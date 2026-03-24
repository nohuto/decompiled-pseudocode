/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C0122370
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0005F34 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ValidateHwnd @ 0x1C0038600 (ValidateHwnd.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0055548 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C0071528 (Is_GetTopLevelWindowSupported.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A9BEC (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00AFE18 (_GetTopLevelWindow.c)
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x1C00C0C60 (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C012069C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0120820 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x1C0126BD4 (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceInputProcessDelay(PETHREAD *a1)
{
  char v2; // al
  unsigned int v3; // r8d
  int ThreadInfoFlags; // eax
  int v5; // r15d
  const wchar_t *Buffer; // rdi
  const wchar_t *v7; // rsi
  struct tagWND *v8; // rax
  __int64 v9; // r12
  struct tagWND *TopLevelWindow; // rax
  const WCHAR *v11; // r12
  PEPROCESS ThreadProcess; // rax
  ULONG64 v13; // rdx
  int v14; // ecx
  ULONG64 v15; // r8
  ULONG64 v16; // rdx
  _BYTE **v17; // rax
  PETHREAD v18; // rcx
  int v19; // eax
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  const WCHAR *v24; // rdx
  const WCHAR *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // [rsp+80h] [rbp-2D8h] BYREF
  unsigned int v30; // [rsp+84h] [rbp-2D4h] BYREF
  int v31; // [rsp+88h] [rbp-2D0h]
  int v32; // [rsp+8Ch] [rbp-2CCh]
  int v33; // [rsp+90h] [rbp-2C8h]
  PETHREAD v34; // [rsp+98h] [rbp-2C0h]
  int v35; // [rsp+A0h] [rbp-2B8h] BYREF
  int v36; // [rsp+A4h] [rbp-2B4h] BYREF
  int v37; // [rsp+A8h] [rbp-2B0h] BYREF
  unsigned int v38; // [rsp+ACh] [rbp-2ACh] BYREF
  unsigned int v39; // [rsp+B0h] [rbp-2A8h] BYREF
  int v40; // [rsp+B4h] [rbp-2A4h] BYREF
  int v41; // [rsp+B8h] [rbp-2A0h] BYREF
  int v42; // [rsp+BCh] [rbp-29Ch] BYREF
  unsigned int v43; // [rsp+C0h] [rbp-298h] BYREF
  unsigned int v44; // [rsp+C4h] [rbp-294h] BYREF
  int v45; // [rsp+C8h] [rbp-290h] BYREF
  PWSTR v46; // [rsp+D0h] [rbp-288h]
  PACCESS_TOKEN PrimaryToken; // [rsp+D8h] [rbp-280h]
  const wchar_t *v48; // [rsp+E0h] [rbp-278h]
  __int64 v49; // [rsp+E8h] [rbp-270h]
  __int128 *v50; // [rsp+F0h] [rbp-268h]
  __int64 v51; // [rsp+F8h] [rbp-260h] BYREF
  __int64 v52; // [rsp+100h] [rbp-258h] BYREF
  PETHREAD v53; // [rsp+108h] [rbp-250h] BYREF
  const WCHAR *v54; // [rsp+110h] [rbp-248h] BYREF
  const WCHAR *v55; // [rsp+118h] [rbp-240h] BYREF
  const WCHAR *v56; // [rsp+120h] [rbp-238h] BYREF
  const WCHAR *v57; // [rsp+128h] [rbp-230h] BYREF
  const WCHAR *v58; // [rsp+130h] [rbp-228h] BYREF
  PETHREAD v59; // [rsp+138h] [rbp-220h] BYREF
  const WCHAR *v60; // [rsp+140h] [rbp-218h] BYREF
  const WCHAR *v61; // [rsp+148h] [rbp-210h] BYREF
  const WCHAR *v62; // [rsp+150h] [rbp-208h] BYREF
  __int128 v63; // [rsp+158h] [rbp-200h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+168h] [rbp-1F0h] BYREF
  struct _UNICODE_STRING v65; // [rsp+178h] [rbp-1E0h] BYREF
  _BYTE v66[144]; // [rsp+190h] [rbp-1C8h] BYREF
  _BYTE v67[256]; // [rsp+220h] [rbp-138h] BYREF

  PrimaryToken = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C024A738 - 1) <= 2u
     || (qword_1C024A720 & 0x8001000000040000uLL) == 0
     || (qword_1C024A728 & 0x8001000000040000uLL) != qword_1C024A728
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C024A250 <= 5
      || !tlgKeywordOn((__int64)&dword_1C024A250, 0x400000000000LL)
      && (v3 <= 5 || !tlgKeywordOn((__int64)&dword_1C024A250, 0x40000LL)) )
    {
      return;
    }
  }
  v30 = 0;
  v29 = 0;
  UnicodeString = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  EtwpGetLastInputProcessTime(
    a1[54],
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v30,
    &v29);
  if ( v30 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v29 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
  v5 = ThreadInfoFlags;
  v33 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v48 = 0LL;
  v7 = 0LL;
  v46 = 0LL;
  v8 = (struct tagWND *)ValidateHwnd((__int64)a1[148]);
  v9 = (__int64)v8;
  if ( v8 )
  {
    if ( (int)EtwpGetClassName(v8, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v48 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() < 0 )
      TopLevelWindow = 0LL;
    else
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v9);
    if ( TopLevelWindow )
    {
      if ( (struct tagWND *)v9 == TopLevelWindow )
      {
        v7 = Buffer;
        v46 = (PWSTR)Buffer;
      }
      else if ( (int)EtwpGetClassName(TopLevelWindow, &v65) >= 0 )
      {
        v7 = v65.Buffer;
        v46 = v65.Buffer;
      }
    }
  }
  v31 = *((_DWORD *)a1 + 298);
  v34 = a1[150];
  v11 = 0LL;
  v49 = 0LL;
  ThreadProcess = PsGetThreadProcess(*a1);
  v13 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
  if ( v13 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  v14 = *(_DWORD *)v13;
  v32 = v14;
  LODWORD(v63) = v14;
  v15 = *(_QWORD *)(v13 + 8);
  *((_QWORD *)&v63 + 1) = v15;
  if ( (v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = v15 + (unsigned __int16)v14 + 2LL;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 >= MmUserProbeAddress || (unsigned __int16)v14 > HIWORD(v32) )
    goto LABEL_36;
  if ( (v14 & 1) != 0 )
    goto LABEL_37;
  if ( v16 <= v15 )
  {
LABEL_36:
    if ( (v14 & 1) == 0 )
    {
LABEL_38:
      **v17 = 0;
      goto LABEL_39;
    }
LABEL_37:
    v32 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1076);
    v17 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_38;
  }
LABEL_39:
  v50 = &v63;
  if ( &v63 )
    v11 = (const WCHAR *)*((_QWORD *)&v63 + 1);
  v18 = a1[53];
  if ( (*((_DWORD *)v18 + 205) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v18);
    v52 = 256LL;
    v51 = 130LL;
    v19 = RtlQueryPackageIdentity(PrimaryToken, v67, &v52, v66, &v51, 0LL);
    v33 = v19;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v20 = (const wchar_t *)v66;
      if ( v19 < 0 )
        v20 = &word_1C0210C64;
      v21 = (const wchar_t *)v67;
      if ( v19 < 0 )
        v21 = &word_1C0210C64;
      McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        (__int64)v21,
        (__int64)v20,
        (unsigned int)v19,
        v5,
        v30,
        v29,
        Buffer,
        v7,
        v21,
        v20,
        v31,
        (char)v34);
    }
    if ( (unsigned int)dword_1C024A250 > 5 && tlgKeywordOn((__int64)&dword_1C024A250, 0x400000040000LL) )
    {
      v24 = (const WCHAR *)v66;
      if ( (int)v22 < 0 )
        v24 = &word_1C0210C64;
      v25 = (const WCHAR *)v67;
      if ( (int)v22 < 0 )
        v25 = &word_1C0210C64;
      v35 = 2;
      v36 = 1;
      v53 = v34;
      v37 = v31;
      v54 = v7;
      v55 = Buffer;
      v56 = v11;
      v57 = v24;
      v58 = v25;
      v38 = v29;
      v39 = v30;
      v40 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v25,
        byte_1C021998B,
        v22,
        v23,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        &v58,
        &v57,
        &v56,
        &v55,
        &v54,
        (__int64)&v37,
        (__int64)&v53,
        (__int64)&v36,
        (__int64)&v35);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx_EtwWriteTransfer(
        (_DWORD)v18,
        v16,
        v15,
        v5,
        v30,
        v29,
        (__int64)Buffer,
        (__int64)v7,
        (__int64)v11,
        v31,
        (char)v34);
    if ( (unsigned int)dword_1C024A250 > 5 && tlgKeywordOn((__int64)&dword_1C024A250, 0x400000040000LL) )
    {
      v41 = 1;
      v59 = v34;
      v42 = v31;
      v60 = v7;
      v61 = Buffer;
      v62 = v11;
      v43 = v29;
      v44 = v30;
      v45 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v26,
        byte_1C02198D1,
        v27,
        v28,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43,
        &v62,
        &v61,
        &v60,
        (__int64)&v42,
        (__int64)&v59,
        (__int64)&v41);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v7 )
  {
    if ( Buffer != v7 )
      RtlFreeUnicodeString(&v65);
  }
}
