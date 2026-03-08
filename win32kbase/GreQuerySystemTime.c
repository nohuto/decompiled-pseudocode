/*
 * XREFs of GreQuerySystemTime @ 0x1C00C7CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreQuerySystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}
