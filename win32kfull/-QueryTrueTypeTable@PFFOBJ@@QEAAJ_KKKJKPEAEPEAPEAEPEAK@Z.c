/*
 * XREFs of ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C01205AC
 * Callers:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C01206D4 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C02B96E0 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C011FE34 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C012068C (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeTable(
        PFFOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  _BYTE v16[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0xFFFFFFFFLL;
  v13 = -1;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3048LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v16, this);
  if ( a7 )
    *a7 = 0;
  if ( v14 )
    v13 = v14(a2, a3, a4, a5, a6, a7, a8, a9);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v16);
  return v13;
}
