/*
 * XREFs of ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02E2F94
 * Callers:
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02C1EEC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     NtGdiGetETM @ 0x1C02D79C0 (NtGdiGetETM.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C011FE34 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::FontManagement(
        PFFOBJ *this,
        struct _SURFOBJ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8)
{
  unsigned int v11; // edi
  __int64 (__fastcall *v12)(struct _SURFOBJ *, struct _FONTOBJ *, _QWORD, _QWORD, void *, unsigned int, void *); // rbx
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0;
  v12 = *(__int64 (__fastcall **)(struct _SURFOBJ *, struct _FONTOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3040LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v14, this);
  if ( v12 )
    v11 = v12(a2, a3, a4, a5, a6, a7, a8);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v14);
  return v11;
}
