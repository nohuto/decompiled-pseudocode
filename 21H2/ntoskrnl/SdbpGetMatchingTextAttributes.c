/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x140965B88
 * Callers:
 *     SdbpCheckMatchingText @ 0x140964D50 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140756588 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14075A500 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int DWORDTag; // r13d
  unsigned int v9; // r12d
  void *v11; // rsi
  unsigned int FirstTag; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  _WORD *StringTagPtr; // rax
  _WORD *v16; // r15
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r14d
  unsigned int TagDataSize; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebp
  PVOID v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r9
  int v27; // r14d
  unsigned int v28; // eax
  __int64 v29; // r9

  v7 = 0;
  *a3 = 0LL;
  DWORDTag = 0x2000;
  *a4 = 0LL;
  v9 = a2;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    goto LABEL_2;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag, v13, v14);
  v16 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_14;
  v17 = SdbFindFirstTag(a1, v9, 36883);
  v20 = v17;
  if ( !v17
    || (TagDataSize = SdbGetTagDataSize(a1, v17, v18, v19), (v23 = TagDataSize) == 0)
    || (v24 = AslAlloc(v22, TagDataSize + 2LL), (v11 = v24) == 0LL) )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
    return v7;
  }
  if ( (unsigned int)SdbReadBinaryTag(a1, v20, (__int64)v24, v23)
    && (v25 = SdbFindFirstTag(a1, v9, 16467)) != 0
    && (v27 = SdbReadDWORDTag(a1, v25, 0LL, v26)) != 0 )
  {
    v28 = SdbFindFirstTag(a1, v9, 16385);
    if ( v28 )
      DWORDTag = SdbReadDWORDTag(a1, v28, 0x2000LL, v29);
    v7 = 1;
    *a3 = v16;
    *a4 = v11;
    *a5 = v23;
    *a6 = v27;
    *a7 = DWORDTag;
  }
  else
  {
LABEL_14:
    AslLogCallPrintf(1LL);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x74705041u);
  }
  return v7;
}
