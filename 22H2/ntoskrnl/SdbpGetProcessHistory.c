/*
 * XREFs of SdbpGetProcessHistory @ 0x14096630C
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140752FF8 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AB0 (NLS_UPCASE.c)
 *     _wcsnicmp @ 0x1403D1B10 (_wcsnicmp.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x14069F2A0 (RtlGetNtSystemRoot.c)
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075A888 (AslAlloc.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(unsigned __int16 *a1, _WORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int16 *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 NtSystemRoot; // rax
  __int64 v11; // rbx
  unsigned __int16 *v12; // rbp
  unsigned __int16 *v13; // r10
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // ax
  __int16 v16; // r9
  int v17; // r8d
  unsigned __int16 *v18; // rdx
  int v19; // ebp
  __int64 v20; // rbx
  SIZE_T v21; // rbx
  _WORD *v22; // r14
  _WORD *v23; // r15
  _WORD *result; // rax
  SIZE_T v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  _BYTE *v29; // rdx
  _WORD *v30; // rax
  _WORD *v31; // r14
  unsigned __int16 *v32; // r11
  const wchar_t *v33; // r10
  unsigned __int16 *v34; // r10
  unsigned __int16 v35; // ax
  __int16 v36; // r9
  int v37; // r8d
  unsigned __int16 *v38; // rdx
  __int64 v39; // rcx
  _WORD *v40; // r14

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = a1;
  if ( wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    if ( v4 && *v4 )
    {
      do
      {
        v12 = v7;
        v13 = L"__PROCESS_HISTORY";
        do
        {
          if ( !*v7 )
            break;
          NLS_UPCASE(*v13);
          v15 = NLS_UPCASE(v14);
          if ( v15 != v16 )
            break;
          ++v7;
          ++v13;
        }
        while ( v13 < L"" );
        if ( v13 == L"" && *v7 == 61 )
        {
          v17 = 1;
LABEL_18:
          v18 = v7;
          if ( *v7 )
          {
            v9 = 0LL;
            do
            {
              if ( (__int64)(v9 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              ++v7;
              v9 += 2LL;
            }
            while ( *v7 );
          }
          if ( v17 )
          {
            v11 = v7 - (v18 + 1);
            goto LABEL_34;
          }
        }
        else
        {
          v17 = 0;
          while ( *v7 )
          {
            if ( *v7 == 61 && v7 != v12 )
              goto LABEL_18;
            ++v7;
          }
        }
        ++v7;
      }
      while ( *v7 );
    }
    v19 = -1073741568;
    v20 = (unsigned int)(v6 + v5 + 1);
  }
  else
  {
    NtSystemRoot = RtlGetNtSystemRoot(v9, v8);
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(NtSystemRoot + 2 * v11) );
LABEL_34:
    v9 = (unsigned int)(v6 + v5 + 2);
    v19 = -1073741789;
    v20 = v9 + v11 + 1;
  }
  v21 = 2 * v20;
  v22 = AslAlloc(v9, v21);
  v23 = v22;
  if ( !v22 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  *v22 = 0;
  if ( v19 != -1073741789 )
    goto LABEL_69;
  v25 = v21 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v28 = RtlGetNtSystemRoot(v27, v26);
    do
      ++v3;
    while ( *(_WORD *)(v28 + 2 * v3) );
    if ( v3 >= v25 )
      goto LABEL_67;
    v29 = (_BYTE *)v28;
    goto LABEL_41;
  }
  if ( !v4 || !*v4 )
    goto LABEL_69;
  while ( 1 )
  {
    v32 = v4;
    v33 = L"__PROCESS_HISTORY";
    do
    {
      if ( !*v4 )
        break;
      NLS_UPCASE(*v4);
      v35 = NLS_UPCASE(*v34);
      if ( v36 != v35 )
        break;
      ++v4;
      ++v33;
    }
    while ( v33 < L"" );
    if ( v33 != L"" || *v4 != 61 )
    {
      v37 = 0;
      while ( *v4 )
      {
        if ( *v4 == 61 && v4 != v32 )
          goto LABEL_53;
        ++v4;
      }
      goto LABEL_58;
    }
    v37 = 1;
LABEL_53:
    v38 = v4;
    if ( *v4 )
    {
      v39 = 0LL;
      do
      {
        if ( (__int64)(v39 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        ++v4;
        v39 += 2LL;
      }
      while ( *v4 );
    }
    if ( v37 )
      break;
LABEL_58:
    if ( !*++v4 )
      goto LABEL_69;
  }
  v29 = v38 + 1;
  v3 = ((char *)v4 - v29) >> 1;
  if ( v3 < v25 )
  {
LABEL_41:
    memmove(v22, v29, 2 * v3);
    v30 = &v22[v3];
    *v30 = 0;
    v31 = v30 - 1;
    if ( *(v30 - 1) != 59 )
    {
      v31 = &v23[v3];
      *v30 = 59;
    }
    v22 = v31 + 1;
    goto LABEL_69;
  }
LABEL_67:
  if ( v25 )
    *v22 = 0;
LABEL_69:
  memmove(v22, a2, 2LL * (unsigned int)v5);
  v40 = &v22[(unsigned int)v5];
  memmove(v40, a3, 2LL * (unsigned int)v6);
  result = v23;
  v40[(unsigned int)v6] = 0;
  return result;
}
