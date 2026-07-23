/*
 * XREFs of SshpReferenceBlocker @ 0x14061FA14
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x1402502D0 (SleepstudyHelperSetBlockerParentHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SshpReferenceBlocker(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 288);
  _InterlockedIncrement((volatile signed __int32 *)(result + 96));
  return result;
}
