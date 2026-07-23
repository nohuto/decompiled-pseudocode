/*
 * XREFs of PsIsProcessLoggingEnabled @ 0x1402ABBF0
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x1406E58F0 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessLoggingEnabled(__int64 a1, int a2)
{
  int v2; // r8d
  _DWORD *v3; // r9

  v2 = 0;
  v3 = 0LL;
  if ( a2 == 16 )
  {
    v2 = 0x1000000;
    v3 = (_DWORD *)(a1 + 1120);
    return (v2 & *v3) != 0;
  }
  if ( a2 != 32 )
  {
    if ( a2 == 2 )
    {
      v2 = 0x100000;
      v3 = (_DWORD *)(a1 + 2172);
    }
    else if ( a2 == 2048 )
    {
      v2 = 0x80000;
      v3 = (_DWORD *)(a1 + 2172);
    }
    return (v2 & *v3) != 0;
  }
  return (*(_DWORD *)(a1 + 1120) & 0x2000000) != 0;
}
