/*
 * XREFs of SdbGetFirstChild @ 0x140759C60
 * Callers:
 *     SdbpMatchList @ 0x140754098 (SdbpMatchList.c)
 *     InitOnceScanIndexes @ 0x1407597B0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x140759974 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407C214C (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x140759AA8 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int NextTagId; // eax
  unsigned int v7; // ecx

  v2 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v7 = 12;
    return v7 < NextTagId ? v7 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v2, v4, v5);
    v7 = v2 + 6;
    return v7 < NextTagId ? v7 : 0;
  }
  return 0LL;
}
