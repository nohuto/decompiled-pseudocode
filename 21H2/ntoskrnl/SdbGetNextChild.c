/*
 * XREFs of SdbGetNextChild @ 0x14075A3B8
 * Callers:
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 *     SdbFindNextTag @ 0x14075A008 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407C1EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409662B0 (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpGetNextTagId @ 0x14075A478 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
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
