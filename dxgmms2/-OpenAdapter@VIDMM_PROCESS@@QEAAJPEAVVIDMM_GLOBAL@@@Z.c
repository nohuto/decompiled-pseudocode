__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  struct _KTHREAD *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v10; // rax
  VIDMM_GLOBAL *v11; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v12; // rbp
  unsigned int v13; // r14d
  _DWORD *v14; // r12
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-28h]

  v2 = 0;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 240LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = this;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, this + 32, 0);
  DXGPUSHLOCK::AcquireExclusive(v17);
  v6 = this[2];
  v7 = v5;
  v18 = 2;
  v8 = *((_QWORD *)v6 + v5);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  }
  else
  {
    v10 = VIDMM_PROCESS::InitializeProcessAdapterInfo((VIDMM_PROCESS *)this, a2);
    v12 = v10;
    if ( v10 )
    {
      *((_QWORD *)this[2] + v7) = v10;
      _InterlockedIncrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v7);
      v13 = 0;
      if ( *((_DWORD *)a2 + 926) )
      {
        v14 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
        do
          VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v13++), v14[v7]);
        while ( v13 < *((_DWORD *)a2 + 926) );
      }
      if ( bTracingEnabled )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v11,
          this[4],
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v12 + 400),
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v12 + 392));
        VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v12);
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v2;
}
