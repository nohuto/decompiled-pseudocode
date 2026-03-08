/*
 * XREFs of KsepDbReadKData @ 0x140973EE8
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x1408012E8 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x1407A2980 (SdbGetTagDataSize.c)
 *     SdbReadQWORDTag @ 0x140800D70 (SdbReadQWORDTag.c)
 */

__int64 __fastcall KsepDbReadKData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  __int64 StringTagPtr; // r14
  unsigned int v10; // eax
  int DWORDTag; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  int TagDataSize; // eax
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // ebp
  __int64 MappedTagData; // r15

  v4 = a2;
  v6 = -1073741823;
  if ( !(_DWORD)a2 )
    return v6;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
    return v6;
  StringTagPtr = SdbGetStringTagPtr(a1, FirstTag, v8);
  if ( !StringTagPtr )
    return v6;
  v10 = SdbFindFirstTag(a1, v4, 16408LL);
  if ( !v10 )
    return v6;
  DWORDTag = SdbReadDWORDTag(a1, v10, 0LL);
  switch ( DWORDTag )
  {
    case 1:
      v12 = SdbFindFirstTag(a1, v4, 24606LL);
      v14 = SdbGetStringTagPtr(a1, v12, v13);
      if ( v14 )
      {
        *(_QWORD *)a3 = StringTagPtr;
        v15 = -1LL;
        *(_DWORD *)(a3 + 8) = 1;
        do
          ++v15;
        while ( *(_WORD *)(v14 + 2 * v15) );
        TagDataSize = 2 * v15 + 2;
        *(_QWORD *)(a3 + 16) = v14;
        goto LABEL_18;
      }
      return v6;
    case 4:
      v17 = SdbFindFirstTag(a1, v4, 16409LL);
      *(_QWORD *)a3 = StringTagPtr;
      *(_DWORD *)(a3 + 8) = 4;
      *(_DWORD *)(a3 + 12) = 4;
      v18 = a3 + 24;
      *(_DWORD *)(a3 + 24) = SdbReadDWORDTag(a1, v17, 0LL);
LABEL_14:
      *(_QWORD *)(a3 + 16) = v18;
      return 0;
    case 11:
      v19 = SdbFindFirstTag(a1, v4, 20487LL);
      *(_QWORD *)a3 = StringTagPtr;
      *(_DWORD *)(a3 + 8) = 11;
      *(_DWORD *)(a3 + 12) = 8;
      v18 = a3 + 32;
      *(_QWORD *)(a3 + 32) = SdbReadQWORDTag(a1, v19, 0LL);
      goto LABEL_14;
  }
  if ( DWORDTag != 3 )
    return (unsigned int)-1073741811;
  v20 = SdbFindFirstTag(a1, v4, 36869LL);
  MappedTagData = SdbpGetMappedTagData(a1, v20);
  if ( MappedTagData )
  {
    *(_QWORD *)a3 = StringTagPtr;
    *(_DWORD *)(a3 + 8) = 3;
    TagDataSize = SdbGetTagDataSize(a1, v20);
    *(_QWORD *)(a3 + 16) = MappedTagData;
LABEL_18:
    *(_DWORD *)(a3 + 12) = TagDataSize;
    return 0;
  }
  return v6;
}
