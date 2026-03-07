// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiDecrementHwContextReference(unsigned int *P, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  unsigned int **v6; // rdx
  PVOID *v7; // rcx
  unsigned int **v8; // rdx
  PVOID *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)P + 2);
  v5 = *(_QWORD *)(v2 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 10, 0xFFFFFFFF) == 1 )
  {
    if ( *((unsigned int **)P + 28) != P + 56 || P[60] )
    {
      v11 = P[60];
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 12288LL, P, v11, 0LL);
      __debugbreak();
      JUMPOUT(0x1C00427A7LL);
    }
    v6 = (unsigned int **)*((_QWORD *)P + 24);
    if ( v6[1] != P + 48
      || (v7 = (PVOID *)*((_QWORD *)P + 25), *v7 != P + 48)
      || (*v7 = v6, v6[1] = (unsigned int *)v7, v8 = (unsigned int **)*((_QWORD *)P + 26), v8[1] != P + 52)
      || (v9 = (PVOID *)*((_QWORD *)P + 27), *v9 != P + 52) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    v8[1] = (unsigned int *)v9;
    if ( *((_BYTE *)P + 91) )
    {
      RtlAvlRemoveNode(v2 + 1736, P + 24);
      RtlAvlRemoveNode(v2 + 1744, P + 30);
      *((_BYTE *)P + 91) = 0;
    }
    VidSchiDecrementDeviceReference(*((char **)P + 1), 1);
    if ( *((_BYTE *)P + 90) )
    {
      v10 = (void *)*((_QWORD *)P + 4);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x4B677844u);
    }
    ExFreePoolWithTag(P, 0);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
