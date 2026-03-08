/*
 * XREFs of GreOffsetRgn @ 0x1C0042C20
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003B638 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0044E20 (UserSetDCVisRgn.c)
 *     NtGdiOffsetRgn @ 0x1C00CBFE0 (NtGdiOffsetRgn.c)
 *     EngOffsetRgn @ 0x1C01978C0 (EngOffsetRgn.c)
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00455F0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0051CB0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-8h]
  struct _POINTL v12; // [rsp+68h] [rbp+28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a1, 0, 0);
  v12.x = a2;
  v5 = 0;
  v6 = v10[0];
  v12.y = a3;
  if ( v10[0] )
  {
    v7 = RGNOBJ::bOffset((RGNOBJ *)v10, &v12);
    v6 = v10[0];
    if ( v7 )
    {
      v9 = (v10[0] + 24LL) & -(__int64)(v10[0] != 0LL);
      v5 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v9);
    }
  }
  if ( !v11 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v10);
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
  return v5;
}
