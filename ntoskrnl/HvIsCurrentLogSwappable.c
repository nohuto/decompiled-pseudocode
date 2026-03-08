/*
 * XREFs of HvIsCurrentLogSwappable @ 0x140732440
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1406BF454 (CmpGenerateFlushControlData.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 168);
  if ( v1 == 4 )
  {
    v2 = 193LL;
    return *(_BYTE *)(v2 + a1) == 0;
  }
  if ( v1 == 5 )
  {
    v2 = 192LL;
    return *(_BYTE *)(v2 + a1) == 0;
  }
  return 0;
}
