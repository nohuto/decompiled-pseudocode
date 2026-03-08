/*
 * XREFs of ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DA98
 * Callers:
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C035DE24 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1C0059D80 (-EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C035D8E8 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailEnsureConnection(DXGSESSIONDATA *this)
{
  struct DXGFASTMUTEX *v1; // rsi
  struct _EX_RUNDOWN_REF *v3; // rcx
  BOOLEAN v4; // al
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  _BYTE v9[8]; // [rsp+50h] [rbp-10h] BYREF
  char v10; // [rsp+58h] [rbp-8h]

  v1 = (DXGSESSIONDATA *)((char *)this + 18904);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( *((_QWORD *)this + 2370) )
    ++*((_DWORD *)this + 4738);
  if ( v10 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  v3 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v3 && ExAcquireRundownProtection(v3 + 8) )
  {
    v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL));
    v5 = *((_QWORD *)this + 2370);
    if ( v4 )
    {
      LODWORD(v6) = 0;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v5 + 72) + 64LL));
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(v5 + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
      WdLogSingleEntry1(3LL, 2407LL);
      v7 = DXGVAILGUESTOBJECT::EnableVmBusChannel(*((struct _KTHREAD ***)this + 2370));
      v6 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL, v7);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Reconnect failed with (0x%I64x).",
          v6,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v6) = -1071775727;
      }
      if ( v10 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
  }
  else
  {
    LODWORD(v6) = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, v1, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v10 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  }
  return (unsigned int)v6;
}
