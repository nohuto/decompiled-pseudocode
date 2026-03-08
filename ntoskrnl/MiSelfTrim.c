/*
 * XREFs of MiSelfTrim @ 0x14064DCAC
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x1402F0758 (MiPreUnlockWorkingSetShared.c)
 *     MiHandleForceTrimWorkingSets @ 0x1406326A0 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     MiReduceWs @ 0x1402F0810 (MiReduceWs.c)
 *     MiForceAgeWorkingSet @ 0x140632480 (MiForceAgeWorkingSet.c)
 *     MiForcedTrim @ 0x1406324C0 (MiForcedTrim.c)
 */

unsigned __int64 __fastcall MiSelfTrim(__int64 a1, __int8 a2)
{
  unsigned __int64 result; // rax
  char v5; // si
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v7; // r8

  _m_prefetchw((const void *)(a1 + 188));
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)(a1 + 188), 0xFFFFFFF8);
  v5 = result;
  if ( (_DWORD)result )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (result & 2) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      result = MiForcedTrim(a1, a2);
      if ( !result && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        result = *(_QWORD *)(a1 + 128);
        v7 = *(_QWORD *)(a1 + 120);
        if ( result > v7 )
          result = MiReduceWs(a1, a2, v7 - 24);
      }
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    }
    if ( (v5 & 1) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      result = MiForceAgeWorkingSet(a1, a2);
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    }
  }
  return result;
}
