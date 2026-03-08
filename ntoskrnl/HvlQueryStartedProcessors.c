/*
 * XREFs of HvlQueryStartedProcessors @ 0x14053E080
 * Callers:
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryStartedProcessors(unsigned int *a1, int *a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // r10d
  int *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( a2 )
  {
    v6 = *a1;
    if ( (unsigned int)HvlpLogicalProcessorCount < *a1 )
      v6 = HvlpLogicalProcessorCount;
    if ( v6 )
    {
      v7 = dword_140D2A9B4;
      v8 = v6;
      do
      {
        v9 = *v7;
        v7 += 30;
        *a2++ = v9;
        --v8;
      }
      while ( v8 );
    }
    v5 = *a1 < (unsigned int)HvlpLogicalProcessorCount ? 0xC0000023 : 0;
  }
  result = v5;
  *a1 = HvlpLogicalProcessorCount;
  return result;
}
