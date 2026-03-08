/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C0033C70
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0006AC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C000C6F4 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C000CBB0 (Is_GetTopLevelWindowSupported.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C003422C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0160B94 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x1C0166F30 (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x1C016709C (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // r15d
  unsigned int v6; // edi
  unsigned int ThreadInfoFlags; // r13d
  const WCHAR *Buffer; // rsi
  const WCHAR *v9; // r14
  struct tagWND *v10; // rax
  struct tagWND *v11; // rax
  PEPROCESS ThreadProcess; // rax
  ULONG64 v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  ULONG64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  const wchar_t *v20; // rax
  const WCHAR *v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // al
  int v27; // r8d
  int v28; // r9d
  const WCHAR *v29; // rdx
  const WCHAR *v30; // rcx
  __int64 v31; // rcx
  const WCHAR *v32; // r8
  int v33; // r9d
  const WCHAR *v34; // rax
  const WCHAR *v35; // rax
  unsigned int v36; // [rsp+80h] [rbp-2C8h]
  struct tagWND *v37; // [rsp+88h] [rbp-2C0h]
  int v38; // [rsp+88h] [rbp-2C0h]
  int v39; // [rsp+94h] [rbp-2B4h] BYREF
  unsigned int v40; // [rsp+98h] [rbp-2B0h] BYREF
  unsigned int v41; // [rsp+9Ch] [rbp-2ACh] BYREF
  struct tagTHREADINFO *v42; // [rsp+A0h] [rbp-2A8h] BYREF
  struct tagTHREADINFO *v43; // [rsp+A8h] [rbp-2A0h] BYREF
  const WCHAR *v44; // [rsp+B0h] [rbp-298h]
  PWSTR v45; // [rsp+B8h] [rbp-290h]
  PACCESS_TOKEN PrimaryToken; // [rsp+C0h] [rbp-288h]
  const wchar_t *v47; // [rsp+C8h] [rbp-280h]
  const WCHAR *v48; // [rsp+D0h] [rbp-278h]
  int v49; // [rsp+D8h] [rbp-270h]
  const WCHAR *v50; // [rsp+E0h] [rbp-268h] BYREF
  const WCHAR *v51; // [rsp+E8h] [rbp-260h] BYREF
  const WCHAR *v52; // [rsp+F0h] [rbp-258h] BYREF
  const WCHAR *v53; // [rsp+F8h] [rbp-250h] BYREF
  unsigned __int64 v54; // [rsp+100h] [rbp-248h]
  const WCHAR *v55; // [rsp+108h] [rbp-240h]
  unsigned __int64 v56; // [rsp+110h] [rbp-238h]
  __int64 v57; // [rsp+118h] [rbp-230h] BYREF
  _QWORD v58[2]; // [rsp+120h] [rbp-228h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+130h] [rbp-218h] BYREF
  struct _UNICODE_STRING v60; // [rsp+140h] [rbp-208h] BYREF
  __int128 v61; // [rsp+150h] [rbp-1F8h]
  _BYTE v62[144]; // [rsp+180h] [rbp-1C8h] BYREF
  _BYTE v63[256]; // [rsp+210h] [rbp-138h] BYREF

  v43 = a1;
  v42 = a1;
  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C02C4068 - 1) <= 2u
     || (qword_1C02C4050 & 0x8001000000040000uLL) == 0
     || (qword_1C02C4058 & 0x8001000000040000uLL) != qword_1C02C4058
      ? (v26 = 0)
      : (v26 = 1),
        !v26) )
  {
    if ( (unsigned int)dword_1C02C93D8 <= 5
      || !(unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
      && (v2 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x40000LL)) )
    {
      return;
    }
  }
  v36 = 0;
  v44 = 0LL;
  UnicodeString = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_QWORD *)a1 + 54);
  if ( v4 )
  {
    v5 = v3 - *(_DWORD *)(v4 + 416);
    LODWORD(PrimaryToken) = v5;
    if ( *(_DWORD *)(v4 + 40) )
    {
      v19 = *(_QWORD *)(v4 + 24);
      v6 = v3 - *(_DWORD *)(v19 + 48);
      v36 = *(_DWORD *)(v19 + 24);
      v44 = *(const WCHAR **)(v19 + 32);
      goto LABEL_7;
    }
  }
  else
  {
    v5 = 0;
    LODWORD(PrimaryToken) = 0;
  }
  v6 = 0;
LABEL_7:
  if ( v5 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v6 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 0x28) == 0 )
    return;
  Buffer = 0LL;
  v48 = 0LL;
  v9 = 0LL;
  v45 = 0LL;
  v10 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 153), 1LL);
  v37 = v10;
  if ( v10 )
  {
    if ( (int)EtwpGetClassName(v10, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v48 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() >= 0 && qword_1C02D7028 )
      v11 = (struct tagWND *)qword_1C02D7028(v37);
    else
      v11 = 0LL;
    if ( v11 )
    {
      if ( v37 == v11 )
      {
        v9 = Buffer;
        v45 = (PWSTR)Buffer;
      }
      else if ( (int)EtwpGetClassName(v11, &v60) >= 0 )
      {
        v9 = v60.Buffer;
        v45 = v60.Buffer;
      }
    }
  }
  v54 = 0LL;
  v47 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  v13 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
  if ( v13 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  v14 = *(_DWORD *)v13;
  v38 = *(_DWORD *)v13;
  LODWORD(v61) = *(_DWORD *)v13;
  v15 = *(_QWORD *)(v13 + 8);
  *((_QWORD *)&v61 + 1) = v15;
  if ( (v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  LODWORD(v16) = (unsigned __int16)v14;
  v17 = v15 + (unsigned __int16)v14 + 2LL;
  if ( v17 <= v15 || v17 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v14 > HIWORD(v38) )
  {
    if ( (v14 & 1) == 0 )
      goto LABEL_42;
    goto LABEL_41;
  }
  if ( (v14 & 1) != 0 )
  {
LABEL_41:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1091LL);
LABEL_42:
    ExRaiseAccessViolation();
  }
  v54 = v15;
  if ( (_WORD)v14 )
  {
    v16 = (unsigned __int64)(unsigned __int16)v14 >> 1;
    v18 = v16;
    v56 = v16;
    while ( v18 )
    {
      if ( *(_WORD *)(v15 + 2 * v18 - 2) == 92 )
      {
        v20 = L"Invalid";
        if ( v18 != v16 )
          v20 = (const wchar_t *)(v15 + 2 * v18);
        v47 = v20;
        break;
      }
      v56 = --v18;
    }
  }
  v21 = v47;
  if ( !v47 )
    v21 = (const WCHAR *)v15;
  v47 = v21;
  v22 = *((_QWORD *)v43 + 53);
  if ( (*(_DWORD *)(v22 + 812) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v22);
    v58[0] = 256LL;
    v57 = 130LL;
    v28 = RtlQueryPackageIdentity(PrimaryToken, v63, v58, v62, &v57, 0LL);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v29 = (const WCHAR *)v62;
      if ( v28 < 0 )
        v29 = &word_1C02856D8;
      v30 = (const WCHAR *)v63;
      if ( v28 < 0 )
        v30 = &word_1C02856D8;
      McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        (_DWORD)v30,
        (_DWORD)v29,
        v27,
        ThreadInfoFlags,
        v5,
        v6,
        (__int64)Buffer,
        (__int64)v9,
        (__int64)v30,
        (__int64)v29,
        v36,
        (char)v44);
    }
    if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000040000LL) )
    {
      v49 = 2;
      v39 = 1;
      v58[1] = v44;
      v40 = v36;
      v55 = v9;
      v50 = Buffer;
      v51 = v21;
      v34 = (const WCHAR *)v62;
      if ( v33 < 0 )
        v34 = v32;
      v52 = v34;
      v35 = (const WCHAR *)v63;
      if ( v33 < 0 )
        v35 = v32;
      v53 = v35;
      v41 = v6;
      LODWORD(v42) = v5;
      LODWORD(v43) = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v31,
        &unk_1C0294B29);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx_EtwWriteTransfer(
        v22,
        v16,
        v15,
        ThreadInfoFlags,
        v5,
        v6,
        (__int64)Buffer,
        (__int64)v9,
        v15,
        v36,
        (char)v44);
    if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000040000LL) )
    {
      LODWORD(v43) = 1;
      v53 = v44;
      LODWORD(v42) = v36;
      v52 = v9;
      v51 = Buffer;
      v50 = v21;
      v41 = v6;
      v40 = v5;
      v39 = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v23,
        (int)&unk_1C0294A6F,
        v24,
        v25,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v41,
        &v50,
        &v51,
        &v52,
        (__int64)&v42,
        (__int64)&v53,
        (__int64)&v43);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v9 )
  {
    if ( Buffer != v9 )
      RtlFreeUnicodeString(&v60);
  }
}
