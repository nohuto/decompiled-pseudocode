/*
 * XREFs of SdbQueryDataExTagID @ 0x1408411FC
 * Callers:
 *     PiIsDriverBlocked @ 0x14075E568 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1402D88AC (RtlStringCchCopyNW.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     SdbpGetMappedTagData @ 0x14075B988 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14079422C (SdbGetTagDataSize.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 *     SdbFindFirstNamedTag @ 0x140841428 (SdbFindFirstNamedTag.c)
 *     SdbReadQWORDTag @ 0x140842904 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  __int64 *StringTagPtr; // r12
  const wchar_t *v8; // rbx
  __int64 v11; // rax
  size_t v12; // r14
  wchar_t *v13; // rax
  wchar_t *Str1; // r15
  wchar_t *v15; // rax
  unsigned int FirstNamedTag; // eax
  int v17; // r15d
  unsigned int FirstTag; // eax
  int DWORDTag; // eax
  int v20; // r14d
  unsigned int TagDataSize; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // ax
  unsigned int v26; // ebx
  unsigned int *v27; // rax
  unsigned int v28; // ebx
  size_t v30; // rbp
  __int64 v31; // r11
  __int64 v32; // rax
  wchar_t *P; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  int Src; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+94h] [rbp+1Ch]
  _DWORD *v37; // [rsp+98h] [rbp+20h]

  v37 = a4;
  v36 = HIDWORD(a3);
  StringTagPtr = 0LL;
  v8 = L"Policy";
  Src = 0;
  QWORDTag = 0LL;
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(1LL);
    return 87;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( aPolicy[v11] );
  v12 = (int)v11 + 1;
  v13 = (wchar_t *)AslAlloc(a1, 2 * v12);
  P = v13;
  if ( !v13 )
  {
    AslLogCallPrintf(1LL);
    return 8;
  }
  Str1 = v13;
  while ( 1 )
  {
    v15 = wcschr(v8, 0x5Cu);
    if ( v15 )
    {
      v30 = v15 - v8;
      if ( RtlStringCchCopyNW(P, v12, v8, v30) < 0 )
      {
LABEL_63:
        v28 = 122;
        goto LABEL_31;
      }
      Str1 = P;
      P[v30] = 0;
      v8 = (const wchar_t *)(v31 + 2);
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v12, v8) < 0 )
        goto LABEL_63;
      v8 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, Str1);
    a2 = FirstNamedTag;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTag )
      goto LABEL_45;
  }
  if ( !FirstNamedTag )
  {
LABEL_45:
    v28 = 1168;
    goto LABEL_31;
  }
  v17 = 0;
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( !FirstTag )
  {
    AslLogCallPrintf(1LL);
    TagDataSize = 0;
    v28 = 0;
    goto LABEL_33;
  }
  DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0);
  v20 = DWORDTag;
  TagDataSize = 0;
  v17 = DWORDTag;
  if ( !DWORDTag )
    goto LABEL_61;
  v22 = DWORDTag - 1;
  if ( v22 )
  {
    v23 = v22 - 2;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        v25 = 16409;
        goto LABEL_17;
      }
      if ( v24 != 7 )
      {
        AslLogCallPrintf(1LL);
        v28 = 1358;
        goto LABEL_31;
      }
      v25 = 20487;
    }
    else
    {
      v25 = -28667;
    }
  }
  else
  {
    v25 = 24606;
  }
LABEL_17:
  v26 = SdbFindFirstTag(a1, a2, v25);
  if ( !v26 )
    goto LABEL_44;
  if ( v20 == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v26);
    if ( StringTagPtr )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *((_WORD *)StringTagPtr + v32) );
      TagDataSize = 2 * v32 + 2;
      goto LABEL_61;
    }
LABEL_44:
    AslLogCallPrintf(1LL);
    goto LABEL_45;
  }
  if ( v20 == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v26);
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v26);
    if ( !StringTagPtr )
      goto LABEL_44;
LABEL_61:
    v28 = 0;
    if ( TagDataSize )
      goto LABEL_22;
    goto LABEL_33;
  }
  if ( v20 != 4 )
  {
    if ( v20 == 11 )
    {
      QWORDTag = SdbReadQWORDTag(a1, v26, 0LL);
      StringTagPtr = &QWORDTag;
      TagDataSize = 8;
      goto LABEL_22;
    }
    goto LABEL_61;
  }
  Src = SdbReadDWORDTag(a1, v26, 0);
  StringTagPtr = (__int64 *)&Src;
  TagDataSize = 4;
LABEL_22:
  if ( a5 && a6 && *a6 >= TagDataSize )
  {
    memmove(a5, StringTagPtr, *a6);
    v27 = a6;
    v28 = 0;
    goto LABEL_26;
  }
  v28 = 122;
LABEL_33:
  v27 = a6;
  if ( a6 )
LABEL_26:
    *v27 = TagDataSize;
  if ( v37 )
    *v37 = v17;
  if ( a7 )
    *a7 = a2;
LABEL_31:
  ExFreePoolWithTag(P, 0x74705041u);
  return v28;
}
