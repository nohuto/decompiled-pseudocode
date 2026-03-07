struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct _MDL *result; // rax
  struct _MDL *v4; // rdi
  DXGFASTMUTEX *v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  DXGFASTMUTEX *v9; // [rsp+50h] [rbp-18h]
  char v10; // [rsp+58h] [rbp-10h]

  v9 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v10 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(v7, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v9);
  v10 = 1;
  result = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  v4 = result;
  if ( v10 )
  {
    v5 = v9;
    v10 = 0;
    if ( *((struct _KTHREAD **)v9 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v9, 0LL, 0LL);
    if ( *((int *)v5 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v8, 262146LL);
    }
    if ( (*((_DWORD *)v5 + 8))-- == 1 )
    {
      *((_QWORD *)v5 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v5 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
    return v4;
  }
  return result;
}
