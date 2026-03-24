/*
 * XREFs of VidSchiConvertDeferredWaits @ 0x1C0016B58
 * Callers:
 *     VidSchSubmitCommand @ 0x1C007E2B0 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiConvertDeferredWaits(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1712LL), &LockHandle);
  v2 = (_QWORD *)(a1 + 696);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( (_QWORD *)v3[1] != v2 )
      goto LABEL_8;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_8;
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    *((_DWORD *)v3 + 8) &= ~0x10u;
    *v3 = 0LL;
    v3[1] = 0LL;
    --*(_DWORD *)(a1 + 804);
    v3[3] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v3 + 5) = 3;
    v5 = *(_QWORD **)(a1 + 688);
    if ( *v5 != a1 + 680 )
LABEL_8:
      __fastfail(3u);
    *v3 = a1 + 680;
    v3[1] = v5;
    *v5 = v3;
    *(_QWORD *)(a1 + 688) = v3;
    ++*(_DWORD *)(a1 + 432);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
