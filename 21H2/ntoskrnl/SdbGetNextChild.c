/*
 * XREFs of SdbGetNextChild @ 0x140792D40
 * Callers:
 *     SdbFindNextTag @ 0x14078EE18 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x140841428 (SdbFindFirstNamedTag.c)
 *     SdbpMatchList @ 0x1408434E0 (SdbpMatchList.c)
 *     SdbpFindNextNamedTag @ 0x140A1311C (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetNextTagId @ 0x1407941A4 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int NextTagId; // edi
  unsigned int v7; // eax

  v4 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v4);
LABEL_4:
    v7 = SdbpGetNextTagId(a1, a3);
    return v7 < NextTagId ? v7 : 0;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
