// Lean compiler output
// Module: Lean.Elab.Import
// Imports: Lean.Parser.Module Lean.Util.Paths Lean.CoreM
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports___boxed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Elab_headerToImports___spec__1___closed__1;
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
static lean_object* l_Lean_Elab_headerToImports___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Elab_headerToImports___closed__2;
static lean_object* l_Lean_Elab_processHeader___closed__2;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_headerToImports___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_headerToImports___closed__4;
static lean_object* l_Lean_Elab_processHeader___closed__1;
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Elab_headerToImports___spec__1(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Lean_Elab_inServer;
lean_object* lean_mk_empty_environment(uint32_t, lean_object*);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_Array_emptyWithCapacity(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
static lean_object* _init_l_panic___at_Lean_Elab_headerToImports___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Array_emptyWithCapacity(lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Elab_headerToImports___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_panic___at_Lean_Elab_headerToImports___spec__1___closed__1;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_headerToImports___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Elab.Import", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_headerToImports___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Elab.headerToImports", 25, 25);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_headerToImports___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_headerToImports___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Elab_headerToImports___closed__1;
x_2 = l_Lean_Elab_headerToImports___closed__2;
x_3 = lean_unsigned_to_nat(17u);
x_4 = lean_unsigned_to_nat(9u);
x_5 = l_Lean_Elab_headerToImports___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_headerToImports___closed__4;
x_3 = l_panic___at_Lean_Elab_headerToImports___spec__1(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_headerToImports(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_processHeader___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_processHeader___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_inServer;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint32_t x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_68 = lean_unsigned_to_nat(0u);
x_69 = l_Lean_Syntax_getArg(x_1, x_68);
x_70 = l_Lean_Syntax_isNone(x_69);
lean_dec(x_69);
x_71 = l_Lean_Elab_headerToImports(x_1);
if (x_70 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = l_Lean_Elab_processHeader___closed__2;
x_73 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_2, x_72);
if (x_73 == 0)
{
uint8_t x_74; uint8_t x_75; lean_object* x_76; 
x_74 = 1;
x_75 = 0;
x_76 = l_Lean_importModules(x_71, x_2, x_5, x_6, x_7, x_74, x_75, x_8);
if (lean_obj_tag(x_76) == 0)
{
uint8_t x_77; 
lean_dec(x_4);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_76, 0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_3);
lean_ctor_set(x_76, 0, x_79);
return x_76;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_76, 0);
x_81 = lean_ctor_get(x_76, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_76);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_3);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_76, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_76, 1);
lean_inc(x_85);
lean_dec(x_76);
x_9 = x_84;
x_10 = x_85;
goto block_67;
}
}
else
{
uint8_t x_86; uint8_t x_87; lean_object* x_88; 
x_86 = 1;
x_87 = 1;
x_88 = l_Lean_importModules(x_71, x_2, x_5, x_6, x_7, x_86, x_87, x_8);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
lean_dec(x_4);
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_3);
lean_ctor_set(x_88, 0, x_91);
return x_88;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_88, 0);
x_93 = lean_ctor_get(x_88, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_88);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_3);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_88, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_88, 1);
lean_inc(x_97);
lean_dec(x_88);
x_9 = x_96;
x_10 = x_97;
goto block_67;
}
}
}
else
{
uint8_t x_98; uint8_t x_99; lean_object* x_100; 
x_98 = 1;
x_99 = 2;
x_100 = l_Lean_importModules(x_71, x_2, x_5, x_6, x_7, x_98, x_99, x_8);
if (lean_obj_tag(x_100) == 0)
{
uint8_t x_101; 
lean_dec(x_4);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_100, 0);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_3);
lean_ctor_set(x_100, 0, x_103);
return x_100;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_100, 0);
x_105 = lean_ctor_get(x_100, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_100);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_3);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_100, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_100, 1);
lean_inc(x_109);
lean_dec(x_100);
x_9 = x_108;
x_10 = x_109;
goto block_67;
}
}
block_67:
{
uint32_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = lean_mk_empty_environment(x_11, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = 0;
x_16 = l_Lean_Syntax_getPos_x3f(x_1, x_15);
x_17 = lean_ctor_get(x_4, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_dec(x_4);
x_19 = lean_box(0);
x_20 = lean_io_error_to_string(x_9);
x_21 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_MessageData_ofFormat(x_21);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_FileMap_toPosition(x_17, x_23);
x_25 = 2;
x_26 = l_Lean_Elab_processHeader___closed__1;
x_27 = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_24);
lean_ctor_set(x_27, 2, x_19);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_27, 4, x_22);
lean_ctor_set_uint8(x_27, sizeof(void*)*5, x_15);
lean_ctor_set_uint8(x_27, sizeof(void*)*5 + 1, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*5 + 2, x_15);
x_28 = l_Lean_MessageLog_add(x_27, x_3);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_14);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_12, 0, x_29);
return x_12;
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_16, 0);
lean_inc(x_30);
lean_dec(x_16);
x_31 = l_Lean_FileMap_toPosition(x_17, x_30);
lean_dec(x_30);
x_32 = 2;
x_33 = l_Lean_Elab_processHeader___closed__1;
x_34 = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(x_34, 0, x_18);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_19);
lean_ctor_set(x_34, 3, x_33);
lean_ctor_set(x_34, 4, x_22);
lean_ctor_set_uint8(x_34, sizeof(void*)*5, x_15);
lean_ctor_set_uint8(x_34, sizeof(void*)*5 + 1, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*5 + 2, x_15);
x_35 = l_Lean_MessageLog_add(x_34, x_3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_14);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_12, 0, x_36);
return x_12;
}
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_37 = lean_ctor_get(x_12, 0);
x_38 = lean_ctor_get(x_12, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_12);
x_39 = 0;
x_40 = l_Lean_Syntax_getPos_x3f(x_1, x_39);
x_41 = lean_ctor_get(x_4, 2);
lean_inc(x_41);
x_42 = lean_ctor_get(x_4, 1);
lean_inc(x_42);
lean_dec(x_4);
x_43 = lean_box(0);
x_44 = lean_io_error_to_string(x_9);
x_45 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Lean_MessageData_ofFormat(x_45);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_unsigned_to_nat(0u);
x_48 = l_Lean_FileMap_toPosition(x_41, x_47);
x_49 = 2;
x_50 = l_Lean_Elab_processHeader___closed__1;
x_51 = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(x_51, 0, x_42);
lean_ctor_set(x_51, 1, x_48);
lean_ctor_set(x_51, 2, x_43);
lean_ctor_set(x_51, 3, x_50);
lean_ctor_set(x_51, 4, x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*5, x_39);
lean_ctor_set_uint8(x_51, sizeof(void*)*5 + 1, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*5 + 2, x_39);
x_52 = l_Lean_MessageLog_add(x_51, x_3);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_38);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_55 = lean_ctor_get(x_40, 0);
lean_inc(x_55);
lean_dec(x_40);
x_56 = l_Lean_FileMap_toPosition(x_41, x_55);
lean_dec(x_55);
x_57 = 2;
x_58 = l_Lean_Elab_processHeader___closed__1;
x_59 = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(x_59, 0, x_42);
lean_ctor_set(x_59, 1, x_56);
lean_ctor_set(x_59, 2, x_43);
lean_ctor_set(x_59, 3, x_58);
lean_ctor_set(x_59, 4, x_46);
lean_ctor_set_uint8(x_59, sizeof(void*)*5, x_39);
lean_ctor_set_uint8(x_59, sizeof(void*)*5 + 1, x_57);
lean_ctor_set_uint8(x_59, sizeof(void*)*5 + 2, x_39);
x_60 = l_Lean_MessageLog_add(x_59, x_3);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_37);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_38);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_63 = !lean_is_exclusive(x_12);
if (x_63 == 0)
{
return x_12;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_12, 0);
x_65 = lean_ctor_get(x_12, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_12);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint32_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox_uint32(x_5);
lean_dec(x_5);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_Lean_Elab_processHeader(x_1, x_2, x_3, x_4, x_9, x_6, x_10, x_8);
lean_dec(x_1);
return x_11;
}
}
lean_object* initialize_Lean_Parser_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_Paths(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_CoreM(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Import(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Paths(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_panic___at_Lean_Elab_headerToImports___spec__1___closed__1 = _init_l_panic___at_Lean_Elab_headerToImports___spec__1___closed__1();
lean_mark_persistent(l_panic___at_Lean_Elab_headerToImports___spec__1___closed__1);
l_Lean_Elab_headerToImports___closed__1 = _init_l_Lean_Elab_headerToImports___closed__1();
lean_mark_persistent(l_Lean_Elab_headerToImports___closed__1);
l_Lean_Elab_headerToImports___closed__2 = _init_l_Lean_Elab_headerToImports___closed__2();
lean_mark_persistent(l_Lean_Elab_headerToImports___closed__2);
l_Lean_Elab_headerToImports___closed__3 = _init_l_Lean_Elab_headerToImports___closed__3();
lean_mark_persistent(l_Lean_Elab_headerToImports___closed__3);
l_Lean_Elab_headerToImports___closed__4 = _init_l_Lean_Elab_headerToImports___closed__4();
lean_mark_persistent(l_Lean_Elab_headerToImports___closed__4);
l_Lean_Elab_processHeader___closed__1 = _init_l_Lean_Elab_processHeader___closed__1();
lean_mark_persistent(l_Lean_Elab_processHeader___closed__1);
l_Lean_Elab_processHeader___closed__2 = _init_l_Lean_Elab_processHeader___closed__2();
lean_mark_persistent(l_Lean_Elab_processHeader___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
