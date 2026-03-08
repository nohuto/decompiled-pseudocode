/*
 * XREFs of PpmIdleUpdateIdleReevaluationDuration @ 0x140583244
 * Callers:
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmIdleUpdateIdleReevaluationDuration(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  char v5; // r10
  __int64 *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ecx

  v5 = 0;
  if ( a2 == 2147483651LL )
  {
    if ( (a3 & 0x2000) == 0 )
    {
      if ( (a3 & 1) == 0 || *(_BYTE *)(a5 + 10) )
        return v5;
      v8 = *(_DWORD *)(a1 + 11684);
      v9 = 0;
      *(_BYTE *)(a5 + 10) = 1;
      while ( v8 )
      {
        v8 >>= 4;
        v9 += KeMaximumIncrement;
      }
      a4 = v9;
    }
  }
  else
  {
    if ( a2 != 2147483656LL || *(_BYTE *)(a5 + 8) )
      return v5;
    v6 = PpmCurrentProfile;
    v7 = 55LL * dword_140C3D48C;
    *(_BYTE *)(a5 + 8) = 1;
    a4 = (unsigned int)(10 * LODWORD(v6[v7 + 24]));
  }
  if ( *(_QWORD *)a5 == -1LL || a4 < *(_QWORD *)a5 )
  {
    *(_QWORD *)a5 = a4;
    return 1;
  }
  return v5;
}
