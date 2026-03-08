/*
 * XREFs of ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C035DE24
 * Callers:
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DD184 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02DE944 (-RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURF.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DA98 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(
        struct _EX_RUNDOWN_REF **this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  int v4; // edi
  struct _EX_RUNDOWN_REF *v5; // rcx
  int v6; // eax
  _BYTE v8[8]; // [rsp+20h] [rbp-10h] BYREF
  char v9; // [rsp+28h] [rbp-8h]

  v4 = DXGSESSIONDATA::VailEnsureConnection((DXGSESSIONDATA *)this);
  if ( v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(this + 2363), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    if ( this[2370] )
      ++*((_DWORD *)this + 4738);
    if ( v9 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
    v5 = this[2370];
    if ( v5 && ExAcquireRundownProtection(v5 + 8) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(this[2370][9].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)&this[2370][2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
        v6 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::RegisterCompositionSurfaceProxy(
               (DXG_GUEST_COMPOSITIONOBJECTCHANNEL *)this[2370][11].Count,
               a2);
        v4 = v6;
        if ( v6 < 0 )
          WdLogSingleEntry1(3LL, v6);
        if ( v9 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(this[2370][9].Count + 64));
      }
      else
      {
        v4 = -2147483611;
        WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
      }
      ExReleaseRundownProtection(this[2370] + 8);
    }
    else
    {
      v4 = -2147483611;
      WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
    }
    if ( this[2370] )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(this + 2363), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
      DXGSESSIONDATA::ReleaseVailGuestReference((DXGSESSIONDATA *)this);
      if ( v9 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
    }
  }
  return (unsigned int)v4;
}
