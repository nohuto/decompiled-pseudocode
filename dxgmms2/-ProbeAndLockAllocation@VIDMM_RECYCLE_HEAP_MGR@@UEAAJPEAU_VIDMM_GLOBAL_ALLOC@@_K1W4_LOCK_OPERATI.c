__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ProbeAndLockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        char a7)
{
  __int64 v7; // rax
  struct DXGFASTMUTEX *v8; // rsi
  struct _KTHREAD **v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  VIDMM_RECYCLE_MULTIRANGE *v15; // rbx
  int v16; // edi
  int *v17; // rbx
  __int64 result; // rax
  int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  enum _LOCK_OPERATION v27; // [rsp+20h] [rbp-78h]
  enum _LOCK_OPERATION v28; // [rsp+20h] [rbp-78h]
  struct _KTHREAD **v29; // [rsp+50h] [rbp-48h]
  char v30; // [rsp+58h] [rbp-40h]
  _BYTE v31[16]; // [rsp+60h] [rbp-38h] BYREF
  VIDMM_RECYCLE_MULTIRANGE *v32; // [rsp+A0h] [rbp+8h]

  v7 = *((_QWORD *)a2 + 11);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v29 = (struct _KTHREAD **)((char *)this + 1328);
  v32 = *(VIDMM_RECYCLE_MULTIRANGE **)(v7 + 24);
  v30 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    v27 = 592;
    DxgkLogInternalTriageEvent(v21, 262146LL);
  }
  v12 = v29;
  KeEnterCriticalRegion();
  if ( v12[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v12 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      v27 = 491;
      DxgkLogInternalTriageEvent(v22, 262146LL);
    }
    ++*((_DWORD *)v12 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *((_DWORD *)v12 + 9);
        if ( v20 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v20);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 2);
      ExAcquirePushLockExclusiveEx(v12 + 1, 0LL);
    }
    if ( v12[3] )
    {
      WdLogSingleEntry1(1LL, 515LL);
      v27 = IoModifyAccess|IoWriteAccess|0x200;
      DxgkLogInternalTriageEvent(v23, 262146LL);
    }
    if ( *((_DWORD *)v12 + 8) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      v27 = 516;
      DxgkLogInternalTriageEvent(v24, 262146LL);
    }
    v12[3] = KeGetCurrentThread();
    *((_DWORD *)v12 + 8) = 1;
  }
  v15 = v32;
  v30 = 1;
  v16 = VIDMM_RECYCLE_MULTIRANGE::Lock(v32, a2, a3, a4, v27, a6, a7);
  if ( v30 )
  {
    v17 = (int *)v29;
    v30 = 0;
    if ( v29[3] != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v29, 0LL, 0LL);
    if ( v17[8] <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      v28 = 535;
      DxgkLogInternalTriageEvent(v25, 262146LL);
    }
    if ( v17[8]-- == 1 )
    {
      *((_QWORD *)v17 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v17 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
    v15 = v32;
  }
  if ( v16 >= 0 )
    return (unsigned int)v16;
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  result = VIDMM_RECYCLE_MULTIRANGE::Lock(v15, a2, a3, a4, v28, a6, a7);
  v26 = result;
  if ( v31[8] )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    return v26;
  }
  return result;
}
