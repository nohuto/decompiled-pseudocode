/*
 * XREFs of ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B6E44
 * Callers:
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B71D8 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1C004D7C0 (-EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B60C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailEnsureConnection(DXGSESSIONDATA *this)
{
  struct DXGFASTMUTEX *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _EX_RUNDOWN_REF *v5; // rcx
  BOOLEAN v6; // al
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE v21[8]; // [rsp+20h] [rbp-10h] BYREF
  char v22; // [rsp+28h] [rbp-8h]

  v1 = (DXGSESSIONDATA *)((char *)this + 18880);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v5 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v5 )
    ++*((_DWORD *)this + 4730);
  if ( v22 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v3);
    v5 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v5 && ExAcquireRundownProtection(v5 + 7) )
  {
    v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    v7 = *((_QWORD *)this + 2366);
    if ( v6 )
    {
      LODWORD(v8) = 0;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v7 + 64) + 64LL));
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(v7 + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 2381LL;
      WdLogEvent5_WdWarning(v12);
      v14 = DXGVAILGUESTOBJECT::EnableVmBusChannel(*((struct _KTHREAD ***)this + 2366), v13);
      v8 = v14;
      if ( v14 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v17 + 24) = v8;
        WdLogEvent5_WdError(v17);
        LODWORD(v8) = -1071775727;
      }
      if ( v22 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v15);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    LODWORD(v8) = -2147483611;
    v18 = WdLogNewEntry5_WdWarning(v5, v3, v4);
    *(_QWORD *)(v18 + 24) = 1LL;
    *(_QWORD *)(v18 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v18);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, v1, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v22 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v19);
  }
  return (unsigned int)v8;
}
