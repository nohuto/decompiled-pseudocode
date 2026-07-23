/*
 * XREFs of SdbpSearchDB @ 0x14077E6B4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14077E548 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140752DDC (SdbpFindNextIndexedWildCardTag.c)
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140755D70 (SdbGetStringTagPtr.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F78 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1407593F0 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindFirstTag @ 0x140759974 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x140759E60 (SdbGetIndex.c)
 *     SdbFindNextStringIndexedTag @ 0x1407C14DC (SdbFindNextStringIndexedTag.c)
 *     SdbFindFirstNamedTag @ 0x1407C214C (SdbFindFirstNamedTag.c)
 *     SdbpCheckExe @ 0x1407D212C (SdbpCheckExe.c)
 *     SdbpFindNextNamedTag @ 0x140966120 (SdbpFindNextNamedTag.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, _RTL_RUN_ONCE *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r15
  unsigned int v9; // edi
  WCHAR *Str1; // r14
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r12
  int FirstStringIndexedTag; // eax
  int v16; // r14d
  __int64 v17; // r8
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int i; // eax
  int v24; // eax
  int FirstTag; // eax
  __int64 v26; // r12
  int FirstNamedTag; // eax
  int v28; // eax
  int v29; // r14d
  int j; // eax
  int v31; // eax
  wchar_t *v32; // [rsp+40h] [rbp-30h]
  _OWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h]
  int v36; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a5;
  LODWORD(v37) = 0;
  a6 = 0;
  v34 = 0LL;
  v9 = 0;
  v36 = 0;
  memset(v33, 0, sizeof(v33));
  memset(a5, 0, 0x80uLL);
  Str1 = *(WCHAR **)(a4 + 40);
  v32 = Str1;
  v13 = 16LL;
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v12, (__int64)Str1, (unsigned int *)v33);
          i;
          i = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v33) )
    {
      v24 = SdbpCheckExe(a1, (int)a2, i, (int)&v36, a4, 1, (__int64)&v37, v6);
      v9 = v36;
      if ( v24 )
      {
        if ( (_DWORD)v37 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v36 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24577, 0LL) )
  {
    v14 = 1LL;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577, Str1, (unsigned int *)v33);
    goto LABEL_4;
  }
  v14 = 0LL;
  FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 28673);
  a6 = FirstTag;
  if ( !FirstTag )
    goto LABEL_28;
  FirstStringIndexedTag = SdbFindFirstNamedTag((int)a2, FirstTag, 28679, 24577, Str1);
LABEL_4:
  while ( 1 )
  {
    v16 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v19 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, (int)&v36, a4, 0, (__int64)&v37, v6);
    v9 = v36;
    if ( v19 )
    {
      if ( (_DWORD)v37 != 2 )
        goto LABEL_7;
    }
    else if ( (unsigned int)v36 > 0x10 )
    {
      goto LABEL_15;
    }
    if ( v14 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v33);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTag((int)a2, a6, v16, 24577, v32);
  }
  if ( *(_QWORD *)(a4 + 48) )
  {
    if ( (unsigned int)SdbGetIndex(a2, 28679, 24608, 0LL) )
    {
      v26 = 1LL;
      FirstNamedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608, *(const WCHAR **)(a4 + 48), (unsigned int *)v33);
      goto LABEL_42;
    }
    v26 = 0LL;
    a6 = SdbFindFirstTag((__int64)a2, 0LL, 28673);
    if ( a6 )
    {
LABEL_28:
      AslLogCallPrintf(1LL);
      goto LABEL_7;
    }
    FirstNamedTag = SdbFindFirstNamedTag((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_42:
    while ( 1 )
    {
      v29 = FirstNamedTag;
      if ( !FirstNamedTag )
        break;
      v28 = SdbpCheckExe(a1, (int)a2, FirstNamedTag, (int)&v36, a4, 0, (__int64)&v37, v6);
      v9 = v36;
      if ( v28 )
      {
        if ( (_DWORD)v37 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v36 > 0x10 )
      {
        goto LABEL_15;
      }
      if ( v26 )
        FirstNamedTag = SdbFindNextStringIndexedTag(a2, v33);
      else
        FirstNamedTag = SdbpFindNextNamedTag((int)a2, a6, v29, 24608, *(wchar_t **)(a4 + 48));
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v17, (__int64)v32, (unsigned int *)v33);
          j;
          j = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v33) )
    {
      v31 = SdbpCheckExe(a1, (int)a2, j, (int)&v36, a4, 2, (__int64)&v37, v6);
      v9 = v36;
      if ( v31 )
      {
        if ( (_DWORD)v37 != 2 )
          break;
      }
      else if ( (unsigned int)v36 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
LABEL_7:
  if ( v9 > 0x10 || (v13 = v9) != 0 )
  {
    do
    {
LABEL_15:
      v20 = SdbFindFirstTag((__int64)a2, *v6, 24582);
      if ( v20 )
        SdbGetStringTagPtr((__int64)a2, v20, v21, v22);
      v6 += 2;
      --v13;
    }
    while ( v13 );
  }
  return v9;
}
