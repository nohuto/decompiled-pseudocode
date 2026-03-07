_WORD *__fastcall SdbpGetProcessHistory(char *a1, _WORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // rsi
  char *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *NtSystemRoot; // rax
  __int64 v11; // rcx
  char *v12; // r11
  const wchar_t *v13; // r10
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v15; // dx
  struct _LIST_ENTRY *v16; // rax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // ax
  __int16 v19; // r9
  int v20; // r8d
  char *v21; // rdx
  int v22; // ebp
  __int64 v23; // r15
  size_t v24; // r15
  _WORD *v25; // rdi
  _WORD *v26; // r14
  _WORD *result; // rax
  size_t v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  char *v31; // rax
  __int64 v32; // rbx
  char *v33; // r11
  const wchar_t *v34; // r10
  struct _LIST_ENTRY *v35; // rax
  unsigned __int16 v36; // dx
  struct _LIST_ENTRY *v37; // rax
  unsigned __int16 v38; // dx
  unsigned __int16 v39; // ax
  __int16 v40; // r9
  int v41; // r8d
  char *v42; // rdx
  __int64 v43; // rcx
  _WORD *v44; // rdi
  _BYTE *v45; // rdx
  _WORD *v46; // rax
  _WORD *v47; // rdi

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
    if ( v4 && *(_WORD *)v4 )
    {
      do
      {
        v12 = v7;
        v13 = L"__PROCESS_HISTORY";
        do
        {
          if ( !*(_WORD *)v7 )
            break;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v15);
          v16 = PsGetCurrentServerSiloGlobals();
          v18 = NLS_UPCASE((__int64)v16[77].Flink, v17);
          if ( v19 != v18 )
            break;
          v7 += 2;
          ++v13;
        }
        while ( v13 < L"" );
        if ( v13 == L"" && *(_WORD *)v7 == 61 )
        {
          v20 = 1;
LABEL_18:
          v21 = v7;
          if ( *(_WORD *)v7 )
          {
            v9 = 0LL;
            do
            {
              if ( (__int64)(v9 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              v7 += 2;
              v9 += 2LL;
            }
            while ( *(_WORD *)v7 );
          }
          if ( v20 )
          {
            v9 = ((v7 - (v21 + 2)) >> 1) + 1;
            goto LABEL_34;
          }
        }
        else
        {
          v20 = 0;
          while ( *(_WORD *)v7 )
          {
            if ( *(_WORD *)v7 == 61 && v7 != v12 )
              goto LABEL_18;
            v7 += 2;
          }
        }
        v7 += 2;
      }
      while ( *(_WORD *)v7 );
    }
    v22 = -1073741568;
    v23 = (unsigned int)(v5 + v6 + 1);
  }
  else
  {
    NtSystemRoot = RtlGetNtSystemRoot(v9, v8);
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&NtSystemRoot[2 * v11] );
    v9 = v11 + 1;
LABEL_34:
    v22 = -1073741789;
    v23 = v9 + (unsigned int)(v5 + v6 + 2);
  }
  v24 = 2 * v23;
  v25 = AslAlloc(v9, v24);
  v26 = v25;
  if ( !v25 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  *v25 = 0;
  if ( v22 != -1073741789 )
    goto LABEL_58;
  v28 = v24 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v31 = RtlGetNtSystemRoot(v30, v29);
    do
      ++v3;
    while ( *(_WORD *)&v31[2 * v3] );
    if ( v3 >= v28 )
    {
      if ( v28 )
        *v25 = 0;
      goto LABEL_58;
    }
    v32 = v3;
    memmove(v25, v31, 2 * v3);
    goto LABEL_69;
  }
  if ( !v4 || !*(_WORD *)v4 )
    goto LABEL_58;
  while ( 1 )
  {
    v33 = v4;
    v34 = L"__PROCESS_HISTORY";
    do
    {
      if ( !*(_WORD *)v4 )
        break;
      v35 = PsGetCurrentServerSiloGlobals();
      NLS_UPCASE((__int64)v35[77].Flink, v36);
      v37 = PsGetCurrentServerSiloGlobals();
      v39 = NLS_UPCASE((__int64)v37[77].Flink, v38);
      if ( v40 != v39 )
        break;
      v4 += 2;
      ++v34;
    }
    while ( v34 < L"" );
    v25 = v26;
    if ( v34 != L"" || *(_WORD *)v4 != 61 )
    {
      v41 = 0;
      while ( *(_WORD *)v4 )
      {
        if ( *(_WORD *)v4 == 61 && v4 != v33 )
          goto LABEL_52;
        v4 += 2;
      }
      goto LABEL_57;
    }
    v41 = 1;
LABEL_52:
    v42 = v4;
    if ( *(_WORD *)v4 )
    {
      v43 = 0LL;
      do
      {
        if ( (__int64)(v43 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        v4 += 2;
        v43 += 2LL;
      }
      while ( *(_WORD *)v4 );
    }
    if ( v41 )
      break;
LABEL_57:
    v4 += 2;
    if ( !*(_WORD *)v4 )
      goto LABEL_58;
  }
  v45 = v42 + 2;
  v3 = (v4 - v45) >> 1;
  if ( v3 < v28 )
  {
    v32 = v3;
    memmove(v26, v45, 2 * v3);
LABEL_69:
    v26[v32] = 0;
    v46 = &v26[v3];
    v47 = v46 - 1;
    if ( *(v46 - 1) != 59 )
    {
      v47 = &v26[v3];
      *v46 = 59;
    }
    v25 = v47 + 1;
    goto LABEL_58;
  }
  if ( v28 )
    *v26 = 0;
LABEL_58:
  memmove(v25, a2, 2LL * (unsigned int)v5);
  v44 = &v25[(unsigned int)v5];
  memmove(v44, a3, 2LL * (unsigned int)v6);
  result = v26;
  v44[(unsigned int)v6] = 0;
  return result;
}
