/*
 * XREFs of KiCopyGroupMasksToAffinityEx @ 0x140237BB0
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x140237838 (KiComputeCpuSetAffinity.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KiCopyGroupMasksToAffinityEx(char *a1, char *a2, unsigned __int16 a3)
{
  unsigned __int16 result; // ax
  __int64 v5; // r10
  signed __int64 v6; // r11
  __int64 v7; // rcx

  if ( a3 > *((_WORD *)a1 + 1) )
    a3 = *((_WORD *)a1 + 1);
  *(_WORD *)a1 = a3;
  result = 0;
  if ( a3 )
  {
    v5 = a3;
    v6 = a1 - a2;
    result = a3;
    do
    {
      *(_QWORD *)&a2[v6 + 8] = *(_QWORD *)a2;
      a2 += 8;
      --v5;
    }
    while ( v5 );
  }
  for ( ; result < *((_WORD *)a1 + 1); *(_QWORD *)&a1[8 * v7 + 8] = 0LL )
    v7 = result++;
  return result;
}
