/*
 * XREFs of SleepstudyHelperDestroyBlockerData @ 0x1408FB960
 * Callers:
 *     <none>
 * Callees:
 *     SshpFreeDataEntry @ 0x1408FAC18 (SshpFreeDataEntry.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlockerData(_QWORD *a1)
{
  if ( a1 )
    SshpFreeDataEntry(a1);
  return a1 == 0LL ? 0xC000000D : 0;
}
