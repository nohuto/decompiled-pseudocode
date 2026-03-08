/*
 * XREFs of SleepstudyHelperDestroyBlockerData @ 0x14099EE80
 * Callers:
 *     <none>
 * Callees:
 *     SshpFreeDataEntry @ 0x14099E728 (SshpFreeDataEntry.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlockerData(_QWORD *a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    SshpFreeDataEntry(a1);
    return 0LL;
  }
  return result;
}
