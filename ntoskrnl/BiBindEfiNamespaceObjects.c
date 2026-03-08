/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x14082BF38
 * Callers:
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 * Callees:
 *     BiFreeIdentifierList @ 0x14082B53C (BiFreeIdentifierList.c)
 *     BiBindEfiBootManager @ 0x14082C288 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14082D024 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
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
