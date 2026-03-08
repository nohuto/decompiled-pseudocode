/*
 * XREFs of HashpInitHash @ 0x140A749CC
 * Callers:
 *     HashpHashMemory @ 0x140A7438C (HashpHashMemory.c)
 * Callees:
 *     SymCryptSha256Init @ 0x1403EF360 (SymCryptSha256Init.c)
 *     SymCryptSha384Init @ 0x1403F4990 (SymCryptSha384Init.c)
 *     SymCryptSha512Init @ 0x1403F617C (SymCryptSha512Init.c)
 *     SymCryptSha1Init @ 0x1403F7520 (SymCryptSha1Init.c)
 *     SymCryptMd5Init @ 0x1403F7F60 (SymCryptMd5Init.c)
 */

__int64 __fastcall HashpInitHash(_DWORD *a1, int *a2)
{
  int v5; // eax

  switch ( *a1 )
  {
    case 0x8003:
      SymCryptMd5Init((__int64)(a1 + 4));
      v5 = 16;
      break;
    case 0x8004:
      SymCryptSha1Init((__int64)(a1 + 4));
      v5 = 20;
      break;
    case 0x800C:
      SymCryptSha256Init((__int64)(a1 + 4));
      v5 = 32;
      break;
    case 0x800D:
      SymCryptSha384Init((__int64)(a1 + 4));
      v5 = 48;
      break;
    case 0x800E:
      SymCryptSha512Init((__int64)(a1 + 4));
      v5 = 64;
      break;
    default:
      return 3221226536LL;
  }
  a1[1] = v5;
  if ( a2 )
    *a2 = v5;
  return 0LL;
}
