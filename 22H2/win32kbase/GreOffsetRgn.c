/*
 * XREFs of GreOffsetRgn @ 0x1C005BF60
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C004C660 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     NtGdiOffsetRgn @ 0x1C005BF40 (NtGdiOffsetRgn.c)
 *     EngOffsetRgn @ 0x1C016AAF0 (EngOffsetRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C005C000 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF
  struct _POINTL v8; // [rsp+88h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 0, 0);
  v5 = 0;
  v8.x = a2;
  v8.y = a3;
  if ( v7[0] && (unsigned int)RGNOBJ::bOffset((RGNOBJ *)v7, &v8) )
  {
    v8 = (struct _POINTL)((v7[0] + 24LL) & -(__int64)(v7[0] != 0LL));
    v5 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v8);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
