/*
 * XREFs of RaidZeroUnit @ 0x1C0019BAC
 * Callers:
 *     RaidCreateUnit @ 0x1C0019530 (RaidCreateUnit.c)
 * Callees:
 *     memset @ 0x1C0020540 (memset.c)
 *     RaCreateTagList @ 0x1C0072C58 (RaCreateTagList.c)
 */

__int64 __fastcall RaidZeroUnit(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  memset(a1, 0, 0xD40uLL);
  *a1 = 1;
  RaCreateTagList(a1 + 128);
  *((_QWORD *)a1 + 61) = v2;
  *((_BYTE *)a1 + 500) = 0;
  a1[24] = RaidNullAddress;
  result = 134684677LL;
  a1[328] = 134684677;
  a1[348] = 134684677;
  a1[368] = 134684677;
  a1[388] = 134684677;
  a1[408] = 134684677;
  *(_QWORD *)(a1 + 123) = v2;
  a1[316] = 10;
  return result;
}
