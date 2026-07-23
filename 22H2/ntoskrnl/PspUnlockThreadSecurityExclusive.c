/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x1403164E8
 * Callers:
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  char v4; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r14
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1 + 1280;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1280), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1280));
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v7 = ++CurrentThread->AbAllocationRegionCount;
  v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    if ( v9 )
      break;
    v11 = (__int64)&CurrentThread->LockEntries[v10];
    v8 &= ~(1 << v10);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v11 + 40) == SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( v11 )
        {
          *(_BYTE *)(v11 + 32) |= 2u;
          if ( *(__int64 *)(v11 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
          v12 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
          v13 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
          *(_BYTE *)(v11 + 25) &= ~1u;
          v17 = v12;
          *(_DWORD *)(v11 + 88) = v13;
          *(_QWORD *)(v11 + 32) = 0LL;
          v14 = (signed __int64)(v11 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v7 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v14;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
          goto LABEL_16;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_16:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v17);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v15);
  return KeLeaveCriticalRegionThread(a2);
}
