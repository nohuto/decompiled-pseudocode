/*
 * XREFs of CmSiQuerySystemTime @ 0x1403026D0
 * Callers:
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x14099ECA4 (SshpSessionManagerInterruptTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSiQuerySystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}
