/*
 * XREFs of SdbGetFirstChild @ 0x14075A630
 * Callers:
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 *     InitOnceScanIndexes @ 0x14075A180 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407C1EAC (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x14075A478 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
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
