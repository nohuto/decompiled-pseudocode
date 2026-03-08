/*
 * XREFs of SdbGetNextChild @ 0x1407A280C
 * Callers:
 *     SdbFindNextTag @ 0x1407A0218 (SdbFindNextTag.c)
 *     SdbpMatchList @ 0x1407A2310 (SdbpMatchList.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A4EFC0 (SdbpFindNextNamedTagHelper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetNextTagId @ 0x1407A2880 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int NextTagId; // edi
  unsigned int v7; // eax

  v3 = a3;
  v4 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v4);
LABEL_4:
    v7 = SdbpGetNextTagId(a1, v3);
    return v7 < NextTagId ? v7 : 0;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
