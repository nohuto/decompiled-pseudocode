/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x140A4E208
 * Callers:
 *     SdbpCheckMatchingText @ 0x140A4D1D0 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14079D160 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x1407A2980 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  _WORD *StringTagPtr; // rax
  _WORD *v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // r14d
  unsigned int TagDataSize; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebp
  void *v21; // rax
  unsigned int v22; // eax
  int v23; // r14d
  unsigned int v24; // eax

  v7 = 0;
  *a3 = 0LL;
  DWORDTag = 0x2000;
  *a4 = 0LL;
  v9 = a2;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
    goto LABEL_2;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag, v13);
  v15 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_14;
  v16 = SdbFindFirstTag(a1, v9, 36883LL);
  v17 = v16;
  if ( !v16
    || (TagDataSize = SdbGetTagDataSize(a1, v16), (v20 = TagDataSize) == 0)
    || (v21 = AslAlloc(v19, TagDataSize + 2LL), (v11 = v21) == 0LL) )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
    return v7;
  }
  if ( (unsigned int)SdbReadBinaryTag(a1, v17, (__int64)v21, v20)
    && (v22 = SdbFindFirstTag(a1, v9, 16467LL)) != 0
    && (v23 = SdbReadDWORDTag(a1, v22, 0LL)) != 0 )
  {
    v24 = SdbFindFirstTag(a1, v9, 16385LL);
    if ( v24 )
      DWORDTag = SdbReadDWORDTag(a1, v24, 0x2000LL);
    v7 = 1;
    *a3 = v15;
    *a4 = v11;
    *a5 = v20;
    *a6 = v23;
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
