/*
 * XREFs of SdbGetNextChild @ 0x1407599E8
 * Callers:
 *     SdbpMatchList @ 0x140754098 (SdbpMatchList.c)
 *     SdbFindNextTag @ 0x140759638 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x140759974 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407C214C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140966120 (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpGetNextTagId @ 0x140759AA8 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int NextTagId; // edi
  unsigned int v8; // eax

  v4 = a3;
  v5 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v5);
LABEL_4:
    v8 = SdbpGetNextTagId(a1, v4);
    return v8 < NextTagId ? v8 : 0;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
