/*
 * XREFs of SshpReferenceBlocker @ 0x1406C0B04
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x1402D1F00 (SleepstudyHelperSetBlockerParentHandle.c)
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
