/*
 * XREFs of VidSchiConvertDeferredWaits @ 0x1C003A77C
 * Callers:
 *     VidSchSubmitCommand @ 0x1C00A4B80 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiConvertDeferredWaits(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v2 + 24) + 1728LL), &LockHandle);
  v3 = (_QWORD *)(a1 + 696);
  while ( 1 )
  {
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( (_QWORD *)v4[1] != v3 )
      goto LABEL_7;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      goto LABEL_7;
    *v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    *((_DWORD *)v4 + 8) &= ~0x10u;
    *v4 = 0LL;
    v4[1] = 0LL;
    --*(_DWORD *)(a1 + 804);
    v4[3] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v4 + 5) = 3;
    v6 = *(_QWORD **)(a1 + 688);
    if ( *v6 != a1 + 680 )
LABEL_7:
      __fastfail(3u);
    *v4 = a1 + 680;
    v4[1] = v6;
    *v6 = v4;
    *(_QWORD *)(a1 + 688) = v4;
    ++*(_DWORD *)(a1 + 432);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
