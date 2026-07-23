/*
 * XREFs of SmKmStoreHelperWorker @ 0x140291670
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     SmKmStoreHelperCommandProcess @ 0x140291750 (SmKmStoreHelperCommandProcess.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14059E344 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl
  LONG result; // eax
  unsigned int v5; // esi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int128 v10; // [rsp+50h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 25LL);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v5 = *(unsigned __int16 *)(a1 + 58);
    if ( v5 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v3 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v3 & 2) != 0 )
    {
      v6 = *(_OWORD *)(a1 + 80);
      v8 = *(_OWORD *)(a1 + 64);
      v7 = *(_OWORD *)(a1 + 96);
      v9 = v6;
      v10 = v7;
      if ( v5 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, &v8);
        v3 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v3 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v5, &v8);
  }
  return result;
}
