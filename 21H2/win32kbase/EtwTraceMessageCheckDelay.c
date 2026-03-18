/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0046060
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x1C0008558 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00473DC (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1C004876C (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C004A064 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C006C860 (Is_GetTopLevelWindowSupported.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C1440 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C014B810 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C014B9A4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  unsigned __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  unsigned int ThreadInfoFlags; // eax
  int v6; // r15d
  const wchar_t *Buffer; // r13
  const wchar_t *v8; // r12
  struct tagWND *v9; // rax
  struct tagWND *v10; // rax
  __int64 v11; // rsi
  PEPROCESS ThreadProcess; // rax
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  ULONG64 v15; // r8
  ULONG64 v16; // rdx
  _BYTE **v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned int v20; // esi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  const wchar_t *v24; // rcx
  const wchar_t *v25; // rax
  unsigned int v26; // esi
  unsigned int v27; // r14d
  __int64 v28; // rcx
  int v29; // r8d
  const WCHAR *v30; // rax
  const WCHAR *v31; // rax
  __int64 v32; // [rsp+48h] [rbp-300h]
  unsigned int v33; // [rsp+90h] [rbp-2B8h] BYREF
  unsigned int v34; // [rsp+94h] [rbp-2B4h] BYREF
  unsigned int v35; // [rsp+98h] [rbp-2B0h]
  int v36; // [rsp+9Ch] [rbp-2ACh]
  int v37; // [rsp+A0h] [rbp-2A8h]
  unsigned int v38; // [rsp+A4h] [rbp-2A4h]
  unsigned int v39; // [rsp+A8h] [rbp-2A0h]
  unsigned int v40; // [rsp+ACh] [rbp-29Ch]
  unsigned int v41; // [rsp+B0h] [rbp-298h]
  struct tagWND *v42; // [rsp+B8h] [rbp-290h]
  struct tagTHREADINFO *v43; // [rsp+C0h] [rbp-288h]
  void *v44; // [rsp+C8h] [rbp-280h]
  int v45; // [rsp+D0h] [rbp-278h]
  int v46; // [rsp+D4h] [rbp-274h]
  unsigned int v47; // [rsp+D8h] [rbp-270h]
  int v48; // [rsp+DCh] [rbp-26Ch]
  PWSTR v49; // [rsp+E0h] [rbp-268h]
  PACCESS_TOKEN PrimaryToken; // [rsp+E8h] [rbp-260h]
  const wchar_t *v51; // [rsp+F0h] [rbp-258h]
  const wchar_t *v52; // [rsp+F8h] [rbp-250h]
  const WCHAR *v53; // [rsp+100h] [rbp-248h]
  const WCHAR *v54; // [rsp+108h] [rbp-240h]
  PWSTR v55; // [rsp+110h] [rbp-238h]
  void *v56; // [rsp+118h] [rbp-230h]
  const wchar_t *v57; // [rsp+120h] [rbp-228h]
  __int128 *v58; // [rsp+130h] [rbp-218h]
  __int64 v59; // [rsp+138h] [rbp-210h] BYREF
  __int64 v60; // [rsp+140h] [rbp-208h] BYREF
  __int128 v61; // [rsp+148h] [rbp-200h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+158h] [rbp-1F0h] BYREF
  struct _UNICODE_STRING v63; // [rsp+168h] [rbp-1E0h] BYREF
  _BYTE v64[144]; // [rsp+180h] [rbp-1C8h] BYREF
  _BYTE v65[256]; // [rsp+210h] [rbp-138h] BYREF

  v43 = a1;
  if ( ((W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
     || (unsigned __int8)(byte_1C028DB38 - 1) <= 2u
     || (qword_1C028DB20 & 0x8001000000040000uLL) == 0
     || (qword_1C028DB28 & 0x8001000000040000uLL) != qword_1C028DB28)
    && ((unsigned int)dword_1C028D6F0 <= 5 || !tlgKeywordOn((__int64)&dword_1C028D6F0, 0x40000LL)) )
  {
    return;
  }
  v33 = 0;
  v34 = 0;
  UnicodeString = 0LL;
  v63 = 0LL;
  v61 = 0LL;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_DWORD *)a1 + 300);
  if ( !v3 )
    return;
  v4 = v2 - v3;
  v46 = v2 - v3;
  if ( (int)v2 - v3 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v6 = ThreadInfoFlags;
  v47 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v4 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v55 = 0LL;
  v8 = 0LL;
  v49 = 0LL;
  v9 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 151), 1LL, 0LL);
  v42 = v9;
  if ( v9 )
  {
    if ( EtwpGetClassName(v9, &UnicodeString) >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      v55 = UnicodeString.Buffer;
    }
    if ( (int)Is_GetTopLevelWindowSupported() >= 0 && qword_1C029C7E0 )
      v10 = (struct tagWND *)qword_1C029C7E0(v42);
    else
      v10 = 0LL;
    if ( v10 )
    {
      if ( v42 == v10 )
      {
        v8 = Buffer;
        v49 = (PWSTR)Buffer;
      }
      else if ( EtwpGetClassName(v10, &v63) >= 0 )
      {
        v8 = v63.Buffer;
        v49 = v63.Buffer;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 54), v2, &v33, &v34);
  v35 = *((_DWORD *)a1 + 304);
  v36 = v35;
  v44 = (void *)*((_QWORD *)a1 + 153);
  PrimaryToken = v44;
  v11 = 0LL;
  v42 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  v13 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v13 >= MmUserProbeAddress )
    v13 = (unsigned int *)MmUserProbeAddress;
  v14 = *v13;
  v45 = v14;
  LODWORD(v61) = v14;
  v15 = *((_QWORD *)v13 + 1);
  *((_QWORD *)&v61 + 1) = v15;
  if ( (v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = v15 + (unsigned __int16)v14 + 2LL;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 >= MmUserProbeAddress || (unsigned __int16)v14 > HIWORD(v45) )
    goto LABEL_29;
  if ( (v14 & 1) != 0 )
    goto LABEL_30;
  if ( v16 <= v15 )
  {
LABEL_29:
    if ( (v14 & 1) == 0 )
    {
LABEL_31:
      **v17 = 0;
      goto LABEL_33;
    }
LABEL_30:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v16, v15);
    v17 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_31;
  }
LABEL_33:
  v58 = &v61;
  if ( &v61 )
  {
    v11 = *((_QWORD *)&v61 + 1);
    v42 = (struct tagWND *)*((_QWORD *)&v61 + 1);
  }
  v18 = *((_QWORD *)a1 + 53);
  if ( (*(_DWORD *)(v18 + 820) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v18);
    v60 = 256LL;
    v59 = 130LL;
    v22 = RtlQueryPackageIdentity(PrimaryToken, v65, &v60, v64, &v59, 0LL);
    v23 = (unsigned int)v22;
    v36 = v22;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      if ( v22 < 0 )
        v24 = &word_1C0251294;
      else
        v24 = (const wchar_t *)v64;
      if ( v22 < 0 )
        v25 = &word_1C0251294;
      else
        v25 = (const wchar_t *)v65;
      v26 = v34;
      v27 = v33;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (__int64)v24,
        v35,
        v23,
        v6,
        v4,
        v33,
        v34,
        Buffer,
        v8,
        v25,
        v24,
        v35,
        (char)v44);
    }
    else
    {
      v27 = v33;
      v26 = v34;
    }
    if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x40000LL) )
    {
      v48 = 2;
      v37 = 1;
      v56 = v44;
      v38 = v35;
      v57 = v8;
      v51 = Buffer;
      v52 = (const wchar_t *)v42;
      v30 = (const WCHAR *)v64;
      if ( v29 < 0 )
        v30 = &word_1C0251294;
      v53 = v30;
      v31 = (const WCHAR *)v65;
      if ( v29 < 0 )
        v31 = &word_1C0251294;
      v54 = v31;
      v39 = v26;
      v40 = v27;
      v41 = v4;
      LODWORD(v43) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v28,
        &unk_1C025B840);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    v19 = v34;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v32 = v11;
      v20 = v33;
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(
        v18,
        v35,
        (_DWORD)v44,
        v6,
        v4,
        v33,
        v34,
        (__int64)Buffer,
        (__int64)v8,
        v32,
        v35,
        (char)v44);
    }
    else
    {
      v20 = v33;
    }
    if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x40000LL) )
    {
      LODWORD(v43) = 1;
      v54 = (const WCHAR *)v44;
      v41 = v35;
      v53 = v8;
      v52 = Buffer;
      v51 = (const wchar_t *)v42;
      v40 = v19;
      v39 = v20;
      v38 = v4;
      v37 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v21,
        &unk_1C025B779);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
  {
    if ( Buffer != v8 )
      RtlFreeUnicodeString(&v63);
  }
}
