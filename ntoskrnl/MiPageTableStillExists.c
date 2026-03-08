/*
 * XREFs of MiPageTableStillExists @ 0x1403A3B20
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A3A90 (MiSmallVaStillMapsFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageTableStillExists(__int64 a1, int *a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10

  *a2 = 0;
  v2 = 4;
  v3 = 4LL;
  while ( 1 )
  {
    --v3;
    --v2;
    v4 = **(_QWORD **)(a1 + 8 * v3);
    if ( (v4 & 1) == 0 )
      break;
    if ( (v4 & 0x80u) != 0LL )
    {
      *a2 = v2;
      return 1LL;
    }
    if ( v3 == 1 )
      return 1LL;
  }
  return 0LL;
}
