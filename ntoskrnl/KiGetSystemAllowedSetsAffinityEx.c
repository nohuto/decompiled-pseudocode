/*
 * XREFs of KiGetSystemAllowedSetsAffinityEx @ 0x140237CA4
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x140237838 (KiComputeCpuSetAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSystemAllowedSetsAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // dx
  __int64 v6; // r11
  __int64 *v7; // r9
  __int64 *v8; // r8

  result = a1[1];
  v4 = a2;
  if ( a2 > (unsigned __int16)result )
    v4 = a1[1];
  *a1 = v4;
  v5 = 0;
  if ( v4 )
  {
    v6 = v4;
    v7 = &KiSystemAllowedCpuSets[a3];
    v5 = v4;
    v8 = (__int64 *)(a1 + 4);
    do
    {
      result = *v7;
      v7 += 2;
      *v8++ = result;
      --v6;
    }
    while ( v6 );
  }
  while ( v5 < a1[1] )
  {
    result = v5++;
    *(_QWORD *)&a1[4 * result + 4] = 0LL;
  }
  return result;
}
