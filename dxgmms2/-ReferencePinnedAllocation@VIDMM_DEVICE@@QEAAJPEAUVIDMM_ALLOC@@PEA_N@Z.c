__int64 __fastcall VIDMM_DEVICE::ReferencePinnedAllocation(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2, bool *a3)
{
  char v6; // al
  bool v7; // di
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  _BYTE v16[8]; // [rsp+68h] [rbp-20h] BYREF
  DXGPUSHLOCK *v17; // [rsp+70h] [rbp-18h]
  int v18; // [rsp+78h] [rbp-10h]

  if ( *(_BYTE *)(**(_QWORD **)a2 + 81LL) )
  {
    WdLogSingleEntry1(1LL, a2);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3223191814LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*(_QWORD *)this + 44672LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v14);
    v6 = *((_BYTE *)a2 + 25);
    v7 = 1;
    v15 = 2;
    if ( (v6 & 1) != 0 )
    {
      *((_BYTE *)a2 + 25) = v6 | 4;
    }
    else
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(*((_QWORD *)this + 2) + 360LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v17);
      *((_BYTE *)a2 + 25) |= 1u;
      v8 = *((_DWORD *)a2 + 38);
      v18 = 2;
      if ( !v8 )
      {
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
        VIDMM_DEVICE::NotifyAllocationResident(this, a2);
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), v10, v11);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      v7 = 0;
    }
    *a3 = v7;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 0LL;
  }
}
