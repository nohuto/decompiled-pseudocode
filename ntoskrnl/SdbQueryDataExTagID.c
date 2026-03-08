/*
 * XREFs of SdbQueryDataExTagID @ 0x140A4C328
 * Callers:
 *     SdbQueryDataEx @ 0x140A4C284 (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140303EF8 (RtlStringCchCopyNW.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x1407A2980 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     SdbReadQWORDTag @ 0x140800D70 (SdbReadQWORDTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  unsigned int v11; // ebx
  __int64 v12; // rax
  size_t v13; // r14
  wchar_t *v14; // rax
  wchar_t *Str1; // r15
  wchar_t *v16; // rax
  size_t v17; // rbp
  __int64 v18; // r11
  unsigned int FirstNamedTagHelper; // eax
  int v20; // r15d
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // ebp
  int DWORDTag; // eax
  int v24; // r14d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned __int16 v28; // ax
  unsigned int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned int *v32; // rax
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 Src; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+90h] [rbp+18h] BYREF
  int v37; // [rsp+94h] [rbp+1Ch]
  _DWORD *v38; // [rsp+98h] [rbp+20h]

  v38 = a4;
  v37 = HIDWORD(a3);
  StringTagPtr = 0LL;
  v8 = L"Policy";
  v36 = 0;
  Src = 0LL;
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(1LL);
    return 87;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( aPolicy[v12] );
  v13 = (int)v12 + 1;
  v14 = (wchar_t *)AslAlloc(a1, 2 * v13);
  pszDest = v14;
  if ( !v14 )
  {
    AslLogCallPrintf(1LL);
    return 8;
  }
  Str1 = v14;
  while ( 1 )
  {
    v16 = wcschr(v8, 0x5Cu);
    if ( v16 )
    {
      v17 = v16 - v8;
      if ( RtlStringCchCopyNW(pszDest, v13, v8, v17) < 0 )
      {
LABEL_59:
        v11 = 122;
        goto LABEL_60;
      }
      Str1 = pszDest;
      pszDest[v17] = 0;
      v8 = (const wchar_t *)(v18 + 2);
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v13, v8) < 0 )
        goto LABEL_59;
      v8 = 0LL;
    }
    FirstNamedTagHelper = SdbpFindFirstNamedTagHelper(a1, a2, 28687, 24577, Str1, 0);
    a2 = FirstNamedTagHelper;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTagHelper )
      goto LABEL_19;
  }
  if ( !FirstNamedTagHelper )
  {
LABEL_19:
    v11 = 1168;
    goto LABEL_60;
  }
  v20 = 0;
  FirstTag = SdbFindFirstTag(a1, FirstNamedTagHelper, 16408LL);
  if ( !FirstTag )
  {
    AslLogCallPrintf(1LL);
    TagDataSize = 0;
    v11 = 0;
    goto LABEL_53;
  }
  DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0LL);
  v24 = DWORDTag;
  TagDataSize = 0;
  v20 = DWORDTag;
  if ( DWORDTag )
  {
    v25 = DWORDTag - 1;
    if ( v25 )
    {
      v26 = v25 - 2;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 != 7 )
          {
            AslLogCallPrintf(1LL);
            v11 = 1358;
            goto LABEL_60;
          }
          v28 = 20487;
        }
        else
        {
          v28 = 16409;
        }
      }
      else
      {
        v28 = -28667;
      }
    }
    else
    {
      v28 = 24606;
    }
    v29 = SdbFindFirstTag(a1, a2, v28);
    if ( !v29 )
    {
LABEL_33:
      AslLogCallPrintf(1LL);
      goto LABEL_19;
    }
    switch ( v24 )
    {
      case 1:
        StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v29, v30);
        if ( !StringTagPtr )
          goto LABEL_33;
        v31 = -1LL;
        do
          ++v31;
        while ( *((_WORD *)StringTagPtr + v31) );
        TagDataSize = 2 * v31 + 2;
        break;
      case 3:
        TagDataSize = SdbGetTagDataSize(a1, v29);
        StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v29);
        if ( !StringTagPtr )
          goto LABEL_33;
        break;
      case 4:
        v36 = SdbReadDWORDTag(a1, v29, 0LL);
        StringTagPtr = (__int64 *)&v36;
        TagDataSize = 4;
        goto LABEL_40;
      case 11:
        Src = SdbReadQWORDTag(a1, v29, 0LL);
        StringTagPtr = &Src;
        TagDataSize = 8;
LABEL_40:
        v11 = 0;
        goto LABEL_48;
    }
  }
  v11 = 0;
  if ( !TagDataSize )
    goto LABEL_53;
LABEL_48:
  if ( !a5 || !a6 || *a6 < TagDataSize )
  {
    v11 = 122;
LABEL_53:
    v32 = a6;
    if ( !a6 )
      goto LABEL_55;
    goto LABEL_54;
  }
  memmove(a5, StringTagPtr, *a6);
  v32 = a6;
LABEL_54:
  *v32 = TagDataSize;
LABEL_55:
  if ( v38 )
    *v38 = v20;
  if ( a7 )
    *a7 = a2;
LABEL_60:
  ExFreePoolWithTag(pszDest, 0x74705041u);
  return v11;
}
