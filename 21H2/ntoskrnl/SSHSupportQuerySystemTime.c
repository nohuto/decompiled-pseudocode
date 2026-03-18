/*
 * XREFs of SSHSupportQuerySystemTime @ 0x14025E844
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x140807E5C (SshpSessionManagerInterruptTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SSHSupportQuerySystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}
