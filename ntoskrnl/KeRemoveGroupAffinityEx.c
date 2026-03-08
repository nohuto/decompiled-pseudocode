/*
 * XREFs of KeRemoveGroupAffinityEx @ 0x14056CEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 > a2 )
  {
    result = a2;
    *(_QWORD *)&a1[4 * a2 + 4] &= ~a3;
  }
  return result;
}
