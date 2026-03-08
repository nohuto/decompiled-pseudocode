/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x14079F5A8
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14079F36C (SdbFindFirstStringIndexedTag.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpBinarySearchUnique @ 0x14079E1DC (SdbpBinarySearchUnique.c)
 *     SdbpBinarySearchFirst @ 0x14079F190 (SdbpBinarySearchFirst.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1407A2980 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned int v6; // esi
  unsigned int v8; // r14d
  __int64 MappedTagData; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  int *v12; // r9
  int v13; // eax
  _DWORD *v14; // r9
  int v16; // edx

  v6 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2, a3) == 0x9801
    && (v8 = (unsigned int)SdbGetTagDataSize(a1, v6) / 0xC,
        MappedTagData = SdbpGetMappedTagData(a1, v6),
        v10 = 0,
        (v11 = MappedTagData) != 0) )
  {
    v12 = a4 + 4;
    if ( (a4[5] & 1) != 0 )
    {
      v13 = SdbpBinarySearchUnique(MappedTagData, v8, a3, v12);
      if ( v13 && *v14 < v8 - 1 )
        v16 = *(_DWORD *)(v11 + 12LL * (unsigned int)(*v14 + 1) + 8);
      else
        v16 = 0;
      a4[2] = v16;
      a4[1] = 0;
    }
    else
    {
      v13 = SdbpBinarySearchFirst(MappedTagData, v8, a3, v12);
    }
    if ( v13 )
      return *(unsigned int *)(v11 + 12LL * (unsigned int)*v14 + 8);
    return v10;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
