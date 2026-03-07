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
