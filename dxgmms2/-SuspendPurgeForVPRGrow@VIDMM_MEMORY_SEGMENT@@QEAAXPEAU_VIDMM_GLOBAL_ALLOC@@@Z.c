void __fastcall VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  VIDMM_GLOBAL *v5; // rcx
  struct _LIST_ENTRY *v6; // rdi
  struct _LIST_ENTRY *v7; // rdx
  VIDMM_GLOBAL **v8; // rbx
  struct _LIST_ENTRY *v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-20h] BYREF
  DXGPUSHLOCK *v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+40h] [rbp-10h]

  v3 = *((_QWORD *)this + 1);
  v9[1] = (struct _LIST_ENTRY *)v9;
  v9[0] = (struct _LIST_ENTRY *)v9;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(v3 + 44512), 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v12 = 2;
  if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(this, v9, a2, 6LL) )
  {
    WdLogSingleEntry0(3LL);
    if ( *((_DWORD *)this + 103) )
    {
      v6 = v9[0];
      while ( v6 != (struct _LIST_ENTRY *)v9 )
      {
        v7 = v6;
        v8 = (VIDMM_GLOBAL **)&v6[-12];
        v6 = v6->Flink;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, v7);
        VIDMM_DEVICE::PartiallySuspend(v8);
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v8);
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
