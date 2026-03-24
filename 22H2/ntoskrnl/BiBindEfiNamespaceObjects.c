/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x1409708D8
 * Callers:
 *     BiOpenSystemStore @ 0x14078371C (BiOpenSystemStore.c)
 * Callees:
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140970678 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x140970978 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x140972020 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v5[1] = (__int64)v5;
  v5[0] = (__int64)v5;
  v3 = BiBuildIdentifierList(a1, v2, v5);
  if ( v3 < 0 || (v3 = BiBindEfiEntries(a1, v5), v3 < 0) || (v3 = BiBindEfiBootManager(a1, (__int64)v5), v3 < 0) )
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v5);
  return (unsigned int)v3;
}
