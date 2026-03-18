/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C0049830
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x1C00090E8 (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0009AF0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00473DC (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C004A064 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C006C860 (Is_GetTopLevelWindowSupported.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C00BB228 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C1440 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x1C01511DC (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  unsigned int v2; // r8d
  char v3; // al
  const WCHAR *v4; // r14
  int ThreadInfoFlags; // r13d
  const wchar_t *Buffer; // rdi
  const wchar_t *v7; // rsi
  struct tagWND *v8; // rax
  struct tagWND *v9; // r12
  struct tagWND *v10; // rax
  __int64 v11; // r12
  PEPROCESS ThreadProcess; // rax
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  ULONG64 v15; // r8
  ULONG64 v16; // rdx
  _BYTE **v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // r12d
  __int64 v23; // rcx
  int v24; // r8d
  const WCHAR *v25; // rax
  const WCHAR *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  const wchar_t *v30; // rdx
  const wchar_t *v31; // rcx
  unsigned int v32[2]; // [rsp+80h] [rbp-2B8h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-2B0h]
  int v34; // [rsp+8Ch] [rbp-2ACh]
  int v35; // [rsp+90h] [rbp-2A8h] BYREF
  unsigned int v36; // [rsp+94h] [rbp-2A4h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp-2A0h] BYREF
  struct tagTHREADINFO *v38; // [rsp+A0h] [rbp-298h] BYREF
  const WCHAR *v39; // [rsp+A8h] [rbp-290h]
  int v40; // [rsp+B0h] [rbp-288h]
  int v41; // [rsp+B4h] [rbp-284h]
  int v42; // [rsp+B8h] [rbp-280h]
  PWSTR v43; // [rsp+C0h] [rbp-278h]
  PACCESS_TOKEN PrimaryToken; // [rsp+C8h] [rbp-270h]
  const WCHAR *v45; // [rsp+D0h] [rbp-268h] BYREF
  const WCHAR *v46; // [rsp+D8h] [rbp-260h] BYREF
  const WCHAR *v47; // [rsp+E0h] [rbp-258h] BYREF
  const WCHAR *v48; // [rsp+E8h] [rbp-250h] BYREF
  const wchar_t *v49; // [rsp+F0h] [rbp-248h]
  _QWORD v50[6]; // [rsp+F8h] [rbp-240h] BYREF
  __int64 v51; // [rsp+128h] [rbp-210h] BYREF
  __int128 v52; // [rsp+130h] [rbp-208h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+140h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v54; // [rsp+150h] [rbp-1E8h] BYREF
  _OWORD v55[9]; // [rsp+168h] [rbp-1D0h] BYREF
  _BYTE v56[256]; // [rsp+200h] [rbp-138h] BYREF

  v38 = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C028DB38 - 1) <= 2u
     || (qword_1C028DB20 & 0x8001000000040000uLL) == 0
     || (qword_1C028DB28 & 0x8001000000040000uLL) != qword_1C028DB28
      ? (v3 = 0)
      : (v3 = 1),
        !v3) )
  {
    if ( (unsigned int)dword_1C028D6F0 <= 5
      || !tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      && (v2 <= 5 || !tlgKeywordOn((__int64)&dword_1C028D6F0, 0x40000LL)) )
    {
      return;
    }
  }
  v32[1] = 0;
  v32[0] = 0;
  UnicodeString = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  v4 = 0LL;
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 54),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v32[1],
    v32);
  if ( v32[1] < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v32[0] < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v41 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 0x28) == 0 )
    return;
  Buffer = 0LL;
  v49 = 0LL;
  v7 = 0LL;
  v43 = 0LL;
  v8 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 151), 1LL, 0LL);
  v9 = v8;
  if ( v8 )
  {
    if ( EtwpGetClassName(v8, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v49 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() >= 0 && qword_1C029C7E0 )
      v10 = (struct tagWND *)qword_1C029C7E0(v9);
    else
      v10 = 0LL;
    if ( v10 )
    {
      if ( v9 == v10 )
      {
        v7 = Buffer;
        v43 = (PWSTR)Buffer;
      }
      else if ( EtwpGetClassName(v10, &v54) >= 0 )
      {
        v7 = v54.Buffer;
        v43 = v54.Buffer;
      }
    }
  }
  v33 = *((_DWORD *)a1 + 304);
  v34 = v33;
  v39 = (const WCHAR *)*((_QWORD *)a1 + 153);
  v50[4] = v39;
  v11 = 0LL;
  v50[3] = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  v13 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v13 >= MmUserProbeAddress )
    v13 = (unsigned int *)MmUserProbeAddress;
  v14 = *v13;
  v40 = v14;
  LODWORD(v52) = v14;
  v15 = *((_QWORD *)v13 + 1);
  *((_QWORD *)&v52 + 1) = v15;
  if ( (v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = v15 + (unsigned __int16)v14 + 2LL;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 >= MmUserProbeAddress || (unsigned __int16)v14 > HIWORD(v40) )
    goto LABEL_28;
  if ( (v14 & 1) != 0 )
    goto LABEL_29;
  if ( v16 <= v15 )
  {
LABEL_28:
    if ( (v14 & 1) == 0 )
    {
LABEL_30:
      **v17 = 0;
      goto LABEL_36;
    }
LABEL_29:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v16, v15);
    v17 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_30;
  }
LABEL_36:
  v50[5] = &v52;
  if ( &v52 )
  {
    v11 = *((_QWORD *)&v52 + 1);
    if ( (_WORD)v52 )
    {
      v18 = (unsigned __int64)(unsigned __int16)v52 >> 1;
      v16 = v18;
      if ( v18 )
      {
        v19 = *((_QWORD *)&v52 + 1) + 2 * v18;
        while ( *(_WORD *)(v19 - 2) != 92 )
        {
          v19 -= 2LL;
          if ( !--v16 )
            goto LABEL_45;
        }
        v4 = L"Invalid";
        if ( v16 != v18 )
          v4 = (const WCHAR *)v19;
      }
    }
LABEL_45:
    if ( !v4 )
      v4 = (const WCHAR *)*((_QWORD *)&v52 + 1);
  }
  v20 = *((_QWORD *)a1 + 53);
  if ( (*(_DWORD *)(v20 + 820) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v20);
    v50[0] = 256LL;
    v51 = 130LL;
    v21 = RtlQueryPackageIdentity(PrimaryToken, v56, v50, (char *)v55 + 8, &v51, 0LL);
    v34 = v21;
    v22 = v33;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v30 = (const wchar_t *)v55 + 4;
      if ( v21 < 0 )
        v30 = &word_1C0251294;
      v31 = (const wchar_t *)v56;
      if ( v21 < 0 )
        v31 = &word_1C0251294;
      McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        (__int64)v31,
        (__int64)v30,
        (unsigned int)v21,
        ThreadInfoFlags,
        v32[1],
        v32[0],
        Buffer,
        v7,
        v31,
        v30,
        v33,
        (char)v39);
    }
    if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000040000LL) )
    {
      v42 = 2;
      v35 = 1;
      v50[1] = v39;
      v36 = v22;
      v50[2] = v7;
      v45 = Buffer;
      v46 = v4;
      v25 = (const WCHAR *)v55 + 4;
      if ( v24 < 0 )
        v25 = &word_1C0251294;
      v47 = v25;
      v26 = (const WCHAR *)v56;
      if ( v24 < 0 )
        v26 = &word_1C0251294;
      v48 = v26;
      v37 = *(_QWORD *)v32;
      LODWORD(v38) = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v23,
        &unk_1C025B695);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx_EtwWriteTransfer(
        v20,
        v16,
        v33,
        ThreadInfoFlags,
        v32[1],
        v32[0],
        (__int64)Buffer,
        (__int64)v7,
        v11,
        v33,
        (char)v39);
    if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000040000LL) )
    {
      LODWORD(v38) = 1;
      v48 = v39;
      v47 = v7;
      v46 = Buffer;
      v45 = v4;
      v37 = __PAIR64__(v33, v32[0]);
      v36 = v32[1];
      v35 = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v27,
        (int)&unk_1C025B5DB,
        v28,
        v29,
        (__int64)&v35,
        (__int64)&v36,
        (__int64)&v37,
        &v45,
        &v46,
        &v47,
        (__int64)&v37 + 4,
        (__int64)&v48,
        (__int64)&v38);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v7 )
  {
    if ( Buffer != v7 )
      RtlFreeUnicodeString(&v54);
  }
}
