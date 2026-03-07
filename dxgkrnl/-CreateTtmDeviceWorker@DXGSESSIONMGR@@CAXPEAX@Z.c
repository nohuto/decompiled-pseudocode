void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *this)
{
  __int64 v2; // rsi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  _BYTE v8[16]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v9; // [rsp+60h] [rbp-58h] BYREF
  char v10; // [rsp+68h] [rbp-50h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF
  char v12; // [rsp+A0h] [rbp-18h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v9,
    (struct DXGPUSHLOCKFAST *)(v2 + 336));
  if ( *((_BYTE *)this + 913) )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Workitem for creating TTM device 0x%I64x is called after the destroy work item.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v3 = *(_QWORD **)(v2 + 368);
    if ( *v3 != v2 + 360 )
      __fastfail(3u);
    *(_QWORD *)this = v2 + 360;
    *((_QWORD *)this + 1) = v3;
    *v3 = this;
    *(_QWORD *)(v2 + 368) = this;
    v4 = *(_QWORD *)(v2 + 136);
    if ( v4 && *(_BYTE *)(v4 + 18497) )
    {
      v12 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v4 + 18648));
      v6 = CTTMDEVICE::RegisterTtmDevice(this, *(struct DXGSESSIONDATA **)(v2 + 136));
      if ( v6 < 0 )
      {
        v7 = v6;
        WdLogSingleEntry4(2LL, *((unsigned int *)this + 20), *((_QWORD *)this + 8), **(unsigned int **)(v2 + 136), v6);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I64"
                    "x, (Status = 0x%I64x).",
          *((unsigned int *)this + 20),
          *((_QWORD *)this + 8),
          **(unsigned int **)(v2 + 136),
          v7,
          0LL);
      }
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( v10 )
  {
    v5 = v9;
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
