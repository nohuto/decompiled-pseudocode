/*
 * XREFs of SdbQueryDataExTagID @ 0x1407C1C88
 * Callers:
 *     PiIsDriverBlocked @ 0x14077E4C4 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1403710C0 (RtlStringCchCopyNW.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x140759FC4 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14075A500 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     SdbReadQWORDTag @ 0x1407B3BC0 (SdbReadQWORDTag.c)
 *     SdbFindFirstNamedTag @ 0x1407C1EAC (SdbFindFirstNamedTag.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int DWORDTag; // r12d
  const wchar_t *v8; // rbx
  __int64 v11; // rax
  size_t v12; // r15
  wchar_t *v13; // rax
  wchar_t *Str1; // r14
  wchar_t *v15; // rax
  wchar_t *v16; // rbp
  unsigned int FirstNamedTag; // eax
  unsigned int FirstTag; // eax
  __int64 v19; // r9
  unsigned int TagDataSize; // ebp
  __int64 *StringTagPtr; // r15
  __int16 v22; // ax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r14d
  unsigned int v26; // ebx
  size_t v28; // r14
  __int64 v29; // rax
  wchar_t *P; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  int Src; // [rsp+90h] [rbp+18h] BYREF
  int v33; // [rsp+94h] [rbp+1Ch]
  _DWORD *v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v33 = HIDWORD(a3);
  DWORDTag = 0;
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
    v16 = v15;
    if ( v15 )
    {
      v28 = v15 - v8;
      if ( RtlStringCchCopyNW(P, v12, v8, v28) < 0 )
      {
LABEL_62:
        v26 = 122;
        goto LABEL_33;
      }
      P[v28] = 0;
      v8 = v16 + 1;
      Str1 = P;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v12, v8) < 0 )
        goto LABEL_62;
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
    v26 = 1168;
    goto LABEL_33;
  }
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( FirstTag )
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0LL, v19);
  else
    AslLogCallPrintf(1LL);
  TagDataSize = 0;
  StringTagPtr = 0LL;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_54;
    case 1:
      v22 = 24606;
      break;
    case 3:
      v22 = -28667;
      break;
    case 4:
      v22 = 16409;
      break;
    case 11:
      v22 = 20487;
      break;
    default:
      AslLogCallPrintf(1LL);
      v26 = 1358;
      goto LABEL_33;
  }
  v25 = SdbFindFirstTag(a1, a2, v22);
  if ( !v25 )
  {
LABEL_44:
    AslLogCallPrintf(1LL);
    goto LABEL_45;
  }
  switch ( DWORDTag )
  {
    case 1:
      StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v25, v23, v24);
      if ( StringTagPtr )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *((_WORD *)StringTagPtr + v29) );
        TagDataSize = 2 * v29 + 2;
        goto LABEL_54;
      }
      goto LABEL_44;
    case 3:
      TagDataSize = SdbGetTagDataSize(a1, v25, v23, v24);
      StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v25);
      if ( StringTagPtr )
        goto LABEL_54;
      goto LABEL_44;
    case 4:
      Src = SdbReadDWORDTag(a1, v25, 0LL, v24);
      StringTagPtr = (__int64 *)&Src;
      TagDataSize = 4;
      goto LABEL_23;
  }
  QWORDTag = SdbReadQWORDTag(a1, v25, 0LL);
  StringTagPtr = &QWORDTag;
  TagDataSize = 8;
LABEL_54:
  v26 = 0;
  if ( TagDataSize )
  {
LABEL_23:
    if ( a5 && a6 && *a6 >= TagDataSize )
    {
      memmove(a5, StringTagPtr, *a6);
      v26 = 0;
    }
    else
    {
      v26 = 122;
    }
  }
  if ( a6 )
    *a6 = TagDataSize;
  if ( v34 )
    *v34 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_33:
  ExFreePoolWithTag(P, 0x74705041u);
  return v26;
}
