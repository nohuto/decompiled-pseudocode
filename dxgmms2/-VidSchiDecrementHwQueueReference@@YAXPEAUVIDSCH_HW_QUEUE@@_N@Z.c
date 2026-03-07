// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiDecrementHwQueueReference(char *P)
{
  __int64 v2; // rdi
  char **v3; // rdx
  PVOID *v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 16LL) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1728), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 30, 0xFFFFFFFF) != 1 )
    goto LABEL_21;
  v3 = (char **)*((_QWORD *)P + 1);
  if ( v3[1] != P + 8 || (v4 = (PVOID *)*((_QWORD *)P + 2), *v4 != P + 8) )
LABEL_23:
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  while ( 1 )
  {
    v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1736), (_QWORD **)P + 27, (_DWORD *)P + 58);
    if ( !v5 )
      break;
    ExFreePoolWithTag(v5 - 1, 0);
  }
  v6 = (void *)*((_QWORD *)P + 33);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 33) = 0LL;
  }
  VidSchiDecrementHwContextReference(*((unsigned int **)P + 5), 1);
  if ( *((char **)P + 26) != P + 160 || *((_DWORD *)P + 37) || *((_QWORD *)P + 3) || *((_QWORD *)P + 4) )
  {
    v10 = *((unsigned int *)P + 37);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 12288LL, P, v10, 0LL);
    __debugbreak();
    goto LABEL_23;
  }
  if ( !*((_QWORD *)P + 6) && bTracingEnabled )
  {
    v8 = *((_QWORD *)P + 5);
    v9 = *(_QWORD *)(v8 + 24);
    if ( !v9 || (*(_DWORD *)(v8 + 56) & 0x40) != 0 )
      v9 = *((_QWORD *)P + 5);
    if ( (byte_1C00769C1 & 4) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v8, &EventDestroyHwQueue, v7, v9, 0LL, P);
  }
  ExFreePoolWithTag(P, 0);
LABEL_21:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
