/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140241EFC
 * Callers:
 *     PoGetFrequencyBucket @ 0x140241CC8 (PoGetFrequencyBucket.c)
 *     PpmPerfGetCurrentState @ 0x140241E34 (PpmPerfGetCurrentState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 33128);
  v3 = *(_QWORD *)(a1 + 33136);
  if ( v2 && v3 )
  {
    if ( *(_BYTE *)(v3 + 100) )
    {
      v4 = *(_DWORD *)(v3 + 116);
    }
    else
    {
      v4 = *(_DWORD *)(v3 + 72);
      a2 = 1;
    }
    if ( a2 && v4 >= *(_DWORD *)(v2 + 368) )
      return *(unsigned int *)(v2 + 368);
  }
  else
  {
    return 100;
  }
  return v4;
}
