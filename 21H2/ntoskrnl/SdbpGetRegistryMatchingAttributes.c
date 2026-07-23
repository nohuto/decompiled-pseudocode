/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x140965DB4
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x140964720 (SdbpCheckMatchingRegistry.c)
 *     SdbpCheckMatchingWildcardRegistry @ 0x140965550 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14075A500 (SdbGetTagDataSize.c)
 *     SdbReadQWORDTag @ 0x1407B3BC0 (SdbReadQWORDTag.c)
 *     SdbGetBinaryTagData @ 0x1409663BC (SdbGetBinaryTagData.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v11; // ebp
  unsigned int v13; // esi
  __int64 v14; // r13
  __int64 BinaryTagData; // r12
  unsigned int v16; // r14d
  unsigned int FirstTag; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _WORD *StringTagPtr; // rax
  _WORD *v21; // r15
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r9
  unsigned int DWORDTag; // eax
  unsigned int v28; // eax
  __int64 TagDataSize; // rax
  unsigned int v30; // eax
  __int64 v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // ebp
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v11 = a2;
  v40 = 0LL;
  QWORDTag = 0LL;
  *a5 = 0;
  v13 = 0;
  v14 = 0LL;
  BinaryTagData = 0LL;
  *a4 = 0LL;
  v16 = 0;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    goto LABEL_24;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag, v18, v19);
  v21 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_24;
  v22 = SdbFindFirstTag(a1, v11, 24624);
  if ( v22 )
    v40 = SdbGetStringTagPtr(a1, v22, v23, v24);
  v25 = SdbFindFirstTag(a1, v11, 16465);
  if ( !v25 )
    goto LABEL_15;
  DWORDTag = SdbReadDWORDTag(a1, v25, 0LL, v26);
  v13 = DWORDTag;
  if ( !DWORDTag )
    goto LABEL_24;
  if ( DWORDTag <= 2 )
    goto LABEL_22;
  switch ( DWORDTag )
  {
    case 3u:
      v32 = SdbFindFirstTag(a1, v11, 36882);
      v33 = v32;
      if ( v32 )
      {
        BinaryTagData = SdbGetBinaryTagData(a1, v32);
        if ( BinaryTagData )
        {
          TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v33, v34, v35);
          goto LABEL_16;
        }
      }
      goto LABEL_24;
    case 4u:
      v30 = SdbFindFirstTag(a1, v11, 16466);
      if ( v30 )
      {
        v10 = SdbReadDWORDTag(a1, v30, 0LL, v31);
        TagDataSize = 0LL;
        goto LABEL_16;
      }
      goto LABEL_24;
    case 7u:
LABEL_22:
      v36 = SdbFindFirstTag(a1, v11, 24625);
      if ( v36 )
      {
        v14 = SdbGetStringTagPtr(a1, v36, v37, v38);
        if ( v14 )
          goto LABEL_15;
      }
LABEL_24:
      AslLogCallPrintf(1LL);
      return v16;
  }
  if ( DWORDTag != 11 )
    goto LABEL_24;
  v28 = SdbFindFirstTag(a1, v11, 20507);
  if ( !v28 )
    goto LABEL_24;
  QWORDTag = SdbReadQWORDTag(a1, v28, 0LL);
LABEL_15:
  TagDataSize = 0LL;
LABEL_16:
  v16 = 1;
  *a3 = v21;
  *a4 = v40;
  *a5 = v13;
  *a6 = v14;
  *a7 = v10;
  *a8 = QWORDTag;
  *a9 = BinaryTagData;
  *a10 = TagDataSize;
  return v16;
}
