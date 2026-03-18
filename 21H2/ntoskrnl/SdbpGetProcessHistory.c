/*
 * XREFs of SdbpGetProcessHistory @ 0x140A13308
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140A129F4 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     RtlGetNtSystemRoot @ 0x140761D60 (RtlGetNtSystemRoot.c)
 *     AslEnvVarQuery @ 0x140A17E60 (AslEnvVarQuery.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(_WORD *a1, _WORD *a2, void *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v7; // r14
  _WORD *v8; // rbx
  __int64 v9; // rcx
  __int64 NtSystemRoot; // rax
  _WORD *v11; // rdi
  const wchar_t *v12; // r11
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v14; // dx
  _QWORD *v15; // rax
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // ax
  __int16 v18; // r10
  int v19; // r8d
  _WORD *v20; // rdx
  int v21; // r15d
  __int64 v22; // rbx
  SIZE_T v23; // rbx
  _WORD *v24; // rdi
  _WORD *v25; // rsi
  _WORD *result; // rax
  _WORD *v27; // rcx
  _WORD *v28; // rdi
  _WORD *v29; // rdi
  SIZE_T v30; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+80h] [rbp+18h]

  Src = a3;
  v3 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)a3 + v7) );
  v8 = a1;
  if ( wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    if ( a1 && *a1 )
    {
      do
      {
        v11 = v8;
        v12 = L"__PROCESS_HISTORY";
        do
        {
          if ( !*v8 )
            break;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          NLS_UPCASE(CurrentServerSiloGlobals[154], v14);
          v15 = PsGetCurrentServerSiloGlobals();
          v17 = NLS_UPCASE(v15[154], v16);
          if ( v18 != v17 )
            break;
          ++v8;
          ++v12;
        }
        while ( v12 < L"" );
        if ( v12 == L"" && *v8 == 61 )
        {
          v19 = 1;
LABEL_18:
          v20 = v8;
          if ( *v8 )
          {
            v9 = 0LL;
            do
            {
              if ( (__int64)(v9 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              ++v8;
              v9 += 2LL;
            }
            while ( *v8 );
          }
          if ( v19 )
          {
            v3 = v8 - (v20 + 1);
            goto LABEL_34;
          }
        }
        else
        {
          v19 = 0;
          while ( *v8 )
          {
            if ( *v8 == 61 && v8 != v11 )
              goto LABEL_18;
            ++v8;
          }
        }
        ++v8;
      }
      while ( *v8 );
    }
    v21 = -1073741568;
    v22 = (unsigned int)(v5 + v7 + 1);
  }
  else
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    do
      ++v3;
    while ( *(_WORD *)(NtSystemRoot + 2 * v3) );
LABEL_34:
    v21 = -1073741789;
    v9 = v3 + 1;
    v22 = v3 + 1 + (unsigned int)(v5 + v7 + 2);
  }
  v23 = 2 * v22;
  v24 = AslAlloc(v9, v23);
  v25 = v24;
  if ( v24 )
  {
    *v24 = 0;
    if ( v21 == -1073741789 )
    {
      v30 = v23;
      if ( (int)AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 17LL, v24, v23 >> 1, &v30) >= 0 )
      {
        v27 = &v24[v30];
        v28 = v27 - 1;
        if ( *(v27 - 1) != 59 )
        {
          v28 = &v25[v30];
          *v27 = 59;
        }
        v24 = v28 + 1;
      }
    }
    memmove(v24, a2, 2LL * (unsigned int)v5);
    v29 = &v24[(unsigned int)v5];
    memmove(v29, Src, 2LL * (unsigned int)v7);
    result = v25;
    v29[(unsigned int)v7] = 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return result;
}
