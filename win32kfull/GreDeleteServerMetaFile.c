/*
 * XREFs of GreDeleteServerMetaFile @ 0x1C02D4A5C
 * Callers:
 *     vCleanupMetaType @ 0x1C00F45A0 (vCleanupMetaType.c)
 *     FreeDdeXact @ 0x1C01FD370 (FreeDdeXact.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01FF294 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteServerMetaFile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx

  LOBYTE(a2) = 21;
  v2 = HmgLock(a1, a2);
  if ( !v2 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 24);
  if ( v3 != 1599096397 && v3 != 1480934989 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
    return 0LL;
  }
  HmgFree(*(_QWORD *)v2);
  return 1LL;
}
