/*
 * XREFs of MiNumberWsSwapPagefiles @ 0x140361990
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 *     MiContractWsSwapPageFile @ 0x14067E2A0 (MiContractWsSwapPageFile.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNumberWsSwapPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // ecx

  v1 = *(_DWORD *)(a1 + 17048);
  v2 = 0;
  if ( v1 )
  {
    v3 = (__int64 *)(a1 + 17056);
    v4 = v1;
    do
    {
      v5 = *v3;
      v6 = v2 + 1;
      ++v3;
      if ( (*(_BYTE *)(v5 + 204) & 0x10) == 0 )
        v6 = v2;
      v2 = v6;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
