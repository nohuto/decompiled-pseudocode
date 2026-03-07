// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rax
  unsigned int *j; // rbx
  unsigned __int64 v6; // rcx
  DXGFASTMUTEX *v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  DXGFASTMUTEX *v11; // [rsp+50h] [rbp-58h]
  char v12; // [rsp+58h] [rbp-50h]
  struct _KAPC_STATE v13; // [rsp+60h] [rbp-48h] BYREF
  VIDMM_PROCESS *v14; // [rsp+90h] [rbp-18h]

  v14 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v14, &v13);
  v11 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v12 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(v9, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v11);
  v12 = 1;
  if ( !dword_1C0076490 )
    goto LABEL_11;
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
        *((_DWORD *)i + 20) != 3;
        i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      goto LABEL_7;
  }
  VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(a2);
LABEL_7:
  for ( j = (unsigned int *)*((_QWORD *)a2 + 8);
        ;
        j = (unsigned int *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)j) )
  {
    v6 = j[20];
    if ( (_DWORD)v6 != 2 )
    {
      if ( (_DWORD)v6 )
      {
        v6 = (unsigned int)(v6 - 1);
        if ( !(_DWORD)v6 || (_DWORD)v6 == 2 )
          j[20] = 2;
      }
      else if ( dword_1C0076490 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
    if ( j == *((unsigned int **)a2 + 9) )
      break;
  }
  if ( v12 )
  {
LABEL_11:
    v7 = v11;
    v12 = 0;
    if ( *((struct _KTHREAD **)v11 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v11, 0LL, 0LL);
    if ( *((int *)v7 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v10, 262146LL);
    }
    if ( (*((_DWORD *)v7 + 8))-- == 1 )
    {
      *((_QWORD *)v7 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v7 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  VIDMM_PROCESS::SafeDetach((VIDMM_PROCESS *)v6, &v13);
}
