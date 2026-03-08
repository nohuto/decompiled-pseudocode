/*
 * XREFs of EtwpCheckDebugInfoEqual @ 0x140600988
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1409EE4AC (EtwpCovSampContextGetModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckDebugInfoEqual(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r9

  v2 = 0;
  if ( a1 )
  {
    v4 = 0;
    if ( a2 && *(_DWORD *)(a1 + 20) == *(_DWORD *)(a2 + 20) )
    {
      v5 = *(_QWORD *)(a1 + 4) - *(_QWORD *)(a2 + 4);
      if ( !v5 )
        v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)(a2 + 12);
      LOBYTE(v4) = v5 == 0;
    }
  }
  else
  {
    LOBYTE(v2) = a2 == 0;
    return v2;
  }
  return v4;
}
