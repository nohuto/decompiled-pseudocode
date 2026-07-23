/*
 * XREFs of ExpWorkQueueInitialize @ 0x1407C2EA8
 * Callers:
 *     ExpWorkQueueInitializeWithMinimumThreads @ 0x1407C2E3C (ExpWorkQueueInitializeWithMinimumThreads.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1403544E0 (KeQueryNodeActiveAffinity.c)
 *     KeInitializePriQueue @ 0x1403C6724 (KeInitializePriQueue.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall ExpWorkQueueInitialize(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // rbx
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF
  USHORT Count; // [rsp+58h] [rbp+10h] BYREF

  Count = 0;
  Affinity = 0LL;
  memset((void *)a1, 0, 0x2E0uLL);
  v10 = a5;
  KeQueryNodeActiveAffinity(*(_WORD *)(a5 + 146), &Affinity, &Count);
  KeInitializePriQueue(a1, Count);
  result = a6;
  *(_DWORD *)(a1 + 716) ^= (*(_DWORD *)(a1 + 716) ^ a2) & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 696) = v10;
  *(_DWORD *)(a1 + 720) = a3;
  *(_QWORD *)(a1 + 688) = a4;
  *(_DWORD *)(a1 + 724) = result;
  return result;
}
