/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x140237154
 * Callers:
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1402AFA28 (KiSetAffinityThread.c)
 * Callees:
 *     KiTestNodeAffinity @ 0x140237190 (KiTestNodeAffinity.c)
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  __int64 result; // rax

  result = KiTestNodeAffinity(*(_QWORD *)(a1 + 576));
  if ( (_DWORD)result == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
