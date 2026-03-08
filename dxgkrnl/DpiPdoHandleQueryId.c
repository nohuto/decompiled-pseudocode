/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C0202B30
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000AB7C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiAppendNumberToString @ 0x1C020301C (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C0204E1C (DpiAppendStringToString.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  char v5; // si
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  const WCHAR *v10; // rax
  int appended; // eax
  unsigned __int16 *v12; // rax
  const WCHAR *v13; // rcx
  void *v14; // rax
  void *v15; // r14
  unsigned int v16; // ebx
  const WCHAR *v18; // rdx
  void *v19; // rbx
  unsigned int v20; // r14d
  void *Pool2; // rax
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  void *Src[2]; // [rsp+98h] [rbp+27h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)Src = 0LL;
  LODWORD(v4) = 0;
  v5 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v6 )
  {
    v12 = (unsigned __int16 *)(v3 + 512);
    if ( *(_DWORD *)(v3 + 496) == 1 && !*v12 )
    {
      v18 = L"DISPLAY\\Default_Monitor";
      goto LABEL_24;
    }
    v13 = L"DISPLAY\\";
LABEL_10:
    appended = DpiAppendStringToString(v13, v12, (PUNICODE_STRING)Src);
LABEL_11:
    LODWORD(v4) = appended;
    if ( appended < 0 )
      return (unsigned int)v4;
    goto LABEL_12;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 2 || !*(_QWORD *)(v3 + 968) )
        {
          LODWORD(v4) = *(_DWORD *)(a2 + 48);
          return (unsigned int)v4;
        }
        *(_OWORD *)Src = *(_OWORD *)(v3 + 960);
        goto LABEL_13;
      }
      v10 = (const WCHAR *)(v3 + 614);
      if ( !*(_WORD *)(v3 + 614) )
      {
        appended = DpiAppendNumberToString(L"UID", *(_DWORD *)(v3 + 504), (PUNICODE_STRING)Src);
        goto LABEL_11;
      }
    }
    else
    {
      v10 = (const WCHAR *)(v3 + 716);
      if ( *(_DWORD *)(v3 + 496) == 1 && !*v10 )
      {
        v18 = L"*PNP09FF";
LABEL_24:
        RtlInitUnicodeString((PUNICODE_STRING)Src, v18);
        goto LABEL_13;
      }
    }
    v18 = v10;
    goto LABEL_24;
  }
  v12 = (unsigned __int16 *)(v3 + 512);
  if ( *(_DWORD *)(v3 + 496) == 1 )
  {
    if ( !*v12 )
    {
      v18 = L"MONITOR\\Default_Monitor";
      goto LABEL_24;
    }
    v13 = L"MONITOR\\";
    goto LABEL_10;
  }
  v19 = 0LL;
  v20 = 0;
  do
  {
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    v20 += 256;
    Pool2 = (void *)ExAllocatePool2(256LL, v20, 1953656900LL);
    v19 = Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741801LL;
      v25 = 6LL;
      goto LABEL_48;
    }
    memset(Pool2, 0, v20);
    v22 = RtlStringCbPrintfW(
            (unsigned __int16 *)v19,
            v20,
            L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&%ws,VIDEO\\VE"
             "N_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
    v23 = v22;
  }
  while ( v22 == -2147483643 );
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v19, 0);
    LODWORD(v4) = -1073741823;
    v24 = v23;
    v25 = 2LL;
LABEL_49:
    WdLogSingleEntry1(v25, v24);
    return (unsigned int)v4;
  }
  v4 = (int)DpiAppendStringToString((PCWSTR)v19, L",,", (PUNICODE_STRING)Src);
  ExFreePoolWithTag(v19, 0);
  if ( (int)v4 < 0 )
  {
    v25 = 2LL;
LABEL_48:
    v24 = v4;
    goto LABEL_49;
  }
  if ( LOWORD(Src[0]) >> 1 )
  {
    v26 = 0LL;
    v27 = LOWORD(Src[0]) >> 1;
    do
    {
      if ( *(_WORD *)((char *)Src[1] + v26) == 44 )
        *(_WORD *)((char *)Src[1] + v26) = 0;
      v26 += 2LL;
      --v27;
    }
    while ( v27 );
  }
LABEL_12:
  v5 = 1;
LABEL_13:
  v14 = (void *)ExAllocatePool2(256LL, WORD1(Src[0]) + 2LL, 1953656900LL);
  v15 = v14;
  if ( v14 )
  {
    v16 = WORD1(Src[0]);
    memset(v14, 0, WORD1(Src[0]) + 2LL);
    memmove(v15, Src[1], v16);
    *(_QWORD *)(a2 + 56) = v15;
  }
  else
  {
    LODWORD(v4) = -1073741801;
  }
  if ( v5 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)Src);
  return (unsigned int)v4;
}
