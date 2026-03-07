__int64 __fastcall AslEnvVarQuery(
        char *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // edi
  const wchar_t *v7; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *NtSystemRoot; // rax
  char *v14; // rdx
  unsigned __int64 v15; // rbx
  size_t v16; // rbx
  char *v18; // r11
  const wchar_t *v19; // r10
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v21; // dx
  struct _LIST_ENTRY *v22; // rax
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // ax
  __int16 v25; // r9
  int v26; // r8d
  char *v27; // rdx
  __int64 v28; // rcx

  v6 = 0;
  v7 = &a2[a3];
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*(_WORD *)a1 )
        return (unsigned int)-1073741568;
      v18 = a1;
      v19 = a2;
      if ( a2 < v7 )
        break;
LABEL_18:
      if ( v19 != v7 || *(_WORD *)a1 != 61 )
        goto LABEL_29;
      v26 = 1;
LABEL_21:
      v27 = a1;
      if ( *(_WORD *)a1 )
      {
        v28 = 0LL;
        do
        {
          if ( (__int64)(v28 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          a1 += 2;
          v28 += 2LL;
        }
        while ( *(_WORD *)a1 );
      }
      if ( v26 )
      {
        v14 = v27 + 2;
        v15 = (a1 - v14) >> 1;
        goto LABEL_5;
      }
LABEL_26:
      a1 += 2;
    }
    while ( *(_WORD *)a1 )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v21);
      v22 = PsGetCurrentServerSiloGlobals();
      v24 = NLS_UPCASE((__int64)v22[77].Flink, v23);
      if ( v25 == v24 )
      {
        a1 += 2;
        if ( ++v19 < v7 )
          continue;
      }
      goto LABEL_18;
    }
LABEL_29:
    v26 = 0;
    while ( *(_WORD *)a1 )
    {
      if ( *(_WORD *)a1 == 61 && a1 != v18 )
        goto LABEL_21;
      a1 += 2;
    }
    goto LABEL_26;
  }
  NtSystemRoot = RtlGetNtSystemRoot(v12, v11);
  v14 = NtSystemRoot;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)&NtSystemRoot[2 * v15] );
LABEL_5:
  if ( v15 < a5 )
  {
    *a6 = v15;
    v16 = v15;
    memmove(a4, v14, v16 * 2);
    a4[v16] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v6 = -1073741789;
    *a6 = v15 + 1;
  }
  return v6;
}
