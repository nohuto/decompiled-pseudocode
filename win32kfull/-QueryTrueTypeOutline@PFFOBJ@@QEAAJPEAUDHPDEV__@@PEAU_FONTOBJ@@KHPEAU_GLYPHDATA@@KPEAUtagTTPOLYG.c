/*
 * XREFs of ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C02E31FC
 * Callers:
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0123E18 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C011FE34 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeOutline(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        unsigned int a7,
        struct tagTTPOLYGONHEADER *a8)
{
  __int64 (__fastcall *v10)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *); // rbx
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  v10 = *(__int64 (__fastcall **)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3056LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v12, this);
  LODWORD(v10) = v10(0LL, a3, a4, a5, a6, a7, a8);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v12);
  return (unsigned int)v10;
}
