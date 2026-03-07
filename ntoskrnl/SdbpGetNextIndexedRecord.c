__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 MappedTagData; // rdi
  unsigned int TagDataSize; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int NextTagId; // edi
  unsigned int v12; // esi
  __int16 TagFromTagID; // si
  __int16 v14; // ax

  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 && (MappedTagData = SdbpGetMappedTagData(a1, a2)) != 0 )
  {
    if ( (a3[5] & 1) != 0 )
    {
      v12 = a3[1];
      if ( !v12 )
        v12 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
      NextTagId = SdbpGetNextTagId(a1, v12);
      TagFromTagID = SdbGetTagFromTagID(a1, v12);
      v14 = SdbGetTagFromTagID(a1, NextTagId);
      if ( v14 && (v14 & 0xF000) == 0x7000 && v14 == TagFromTagID && NextTagId != a3[2] )
      {
        a3[1] = NextTagId;
        return NextTagId;
      }
    }
    else
    {
      TagDataSize = SdbGetTagDataSize(a1, a2);
      v8 = (unsigned int)a3[4];
      if ( (_DWORD)v8 != TagDataSize / 0xC - 1 )
      {
        v9 = (unsigned int)(v8 + 1);
        if ( *(_QWORD *)(MappedTagData + 12 * v8) == *(_QWORD *)(MappedTagData + 12 * v9) )
        {
          a3[4] = v9;
          return *(unsigned int *)(MappedTagData + 12 * v9 + 8);
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
