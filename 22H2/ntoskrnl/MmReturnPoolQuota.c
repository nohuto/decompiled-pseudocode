/*
 * XREFs of MmReturnPoolQuota @ 0x1403289D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C4C958 -= a2;
  else
    qword_140C4C960 -= a2;
}
