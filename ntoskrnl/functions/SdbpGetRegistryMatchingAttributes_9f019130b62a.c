__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v11; // esi
  int v13; // ebp
  __int64 v14; // r13
  __int64 BinaryTagData; // r12
  unsigned int v16; // r14d
  unsigned int FirstTag; // eax
  __int64 v18; // r8
  _WORD *StringTagPtr; // rax
  _WORD *v20; // r15
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // eax
  int DWORDTag; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  __int64 TagDataSize; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // eax
  __int64 v36; // r8
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v11 = a2;
  v38 = 0LL;
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
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
    goto LABEL_25;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag, v18);
  v20 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_25;
  v21 = SdbFindFirstTag(a1, v11, 24624LL);
  if ( v21 )
    v38 = SdbGetStringTagPtr(a1, v21, v22);
  v23 = SdbFindFirstTag(a1, v11, 16465LL);
  if ( !v23 )
    goto LABEL_16;
  DWORDTag = SdbReadDWORDTag(a1, v23, 0LL);
  v13 = DWORDTag;
  if ( !DWORDTag )
    goto LABEL_25;
  v25 = DWORDTag - 1;
  if ( !v25 )
    goto LABEL_23;
  v26 = v25 - 1;
  if ( !v26 )
    goto LABEL_23;
  v27 = v26 - 1;
  if ( !v27 )
  {
    v33 = SdbFindFirstTag(a1, v11, 36882LL);
    v34 = v33;
    if ( v33 )
    {
      BinaryTagData = SdbGetBinaryTagData(a1, v33);
      if ( BinaryTagData )
      {
        TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v34);
        goto LABEL_17;
      }
    }
    goto LABEL_25;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    v32 = SdbFindFirstTag(a1, v11, 16466LL);
    if ( v32 )
    {
      v10 = SdbReadDWORDTag(a1, v32, 0LL);
      TagDataSize = 0LL;
      goto LABEL_17;
    }
    goto LABEL_25;
  }
  v29 = v28 - 3;
  if ( !v29 )
  {
LABEL_23:
    v35 = SdbFindFirstTag(a1, v11, 24625LL);
    if ( v35 )
    {
      v14 = SdbGetStringTagPtr(a1, v35, v36);
      if ( v14 )
        goto LABEL_16;
    }
LABEL_25:
    AslLogCallPrintf(1LL);
    return v16;
  }
  if ( v29 != 4 )
    goto LABEL_25;
  v30 = SdbFindFirstTag(a1, v11, 20507LL);
  if ( !v30 )
    goto LABEL_25;
  QWORDTag = SdbReadQWORDTag(a1, v30, 0LL);
LABEL_16:
  TagDataSize = 0LL;
LABEL_17:
  v16 = 1;
  *a3 = v20;
  *a4 = v38;
  *a5 = v13;
  *a6 = v14;
  *a7 = v10;
  *a8 = QWORDTag;
  *a9 = BinaryTagData;
  *a10 = TagDataSize;
  return v16;
}
