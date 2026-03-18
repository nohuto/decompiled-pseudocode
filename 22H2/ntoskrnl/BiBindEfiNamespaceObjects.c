/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x140804D40
 * Callers:
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 * Callees:
 *     BiFreeIdentifierList @ 0x1408043F8 (BiFreeIdentifierList.c)
 *     BiBindEfiBootManager @ 0x140805090 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140805D6C (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x140806BE8 (BiBuildIdentifierList.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  _QWORD *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v5[1] = v5;
  v5[0] = v5;
  v3 = BiBuildIdentifierList(a1, v2, v5);
  if ( v3 < 0 || (v3 = BiBindEfiEntries(a1, v5), v3 < 0) || (v3 = BiBindEfiBootManager(a1, v5), v3 < 0) )
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v5);
  return (unsigned int)v3;
}
