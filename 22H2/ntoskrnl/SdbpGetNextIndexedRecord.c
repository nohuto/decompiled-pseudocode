/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x1407C15CC
 * Callers:
 *     SdbFindNextStringIndexedTag @ 0x1407C14DC (SdbFindNextStringIndexedTag.c)
 *     SdbpFindMatchingName @ 0x1407C1520 (SdbpFindMatchingName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x1407595F4 (SdbpGetMappedTagData.c)
 *     SdbpGetNextTagId @ 0x140759AA8 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140759B30 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // esi
  __int64 MappedTagData; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int TagDataSize; // eax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int NextTagId; // edi
  unsigned int v15; // esi
  __int16 TagFromTagID; // si
  __int16 v17; // ax

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 && (MappedTagData = SdbpGetMappedTagData(a1, v4)) != 0 )
  {
    if ( (a3[5] & 1) != 0 )
    {
      v15 = a3[1];
      if ( !v15 )
        v15 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
      NextTagId = SdbpGetNextTagId(a1, v15, v7, v8);
      TagFromTagID = SdbGetTagFromTagID(a1, v15);
      v17 = SdbGetTagFromTagID(a1, NextTagId);
      if ( v17 && (v17 & 0xF000) == 0x7000 && v17 == TagFromTagID && NextTagId != a3[2] )
      {
        a3[1] = NextTagId;
        return NextTagId;
      }
    }
    else
    {
      TagDataSize = SdbGetTagDataSize(a1, v4, v7, v8);
      v10 = (unsigned int)a3[4];
      if ( (_DWORD)v10 != TagDataSize / 0xC - 1 )
      {
        v11 = 3 * v10;
        v12 = (unsigned int)(v10 + 1);
        if ( *(_QWORD *)(MappedTagData + 4 * v11) == *(_QWORD *)(MappedTagData + 12 * v12) )
        {
          a3[4] = v12;
          return *(unsigned int *)(MappedTagData + 12 * v12 + 8);
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
