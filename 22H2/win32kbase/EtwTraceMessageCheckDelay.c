/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0122ED0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0006B64 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ValidateHwnd @ 0x1C0039A70 (ValidateHwnd.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1C0055B80 (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x1C0055D08 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0056548 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C0071FD8 (Is_GetTopLevelWindowSupported.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AA0EC (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00B0158 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C01205A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C012073C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 */

void __fastcall EtwTraceMessageCheckDelay(PETHREAD *a1)
{
  char v2; // al
  unsigned __int64 v3; // r13
  int v4; // eax
  unsigned int v5; // r12d
  int ThreadInfoFlags; // eax
  int v7; // r15d
  const wchar_t *Buffer; // rdi
  const wchar_t *v9; // rsi
  struct tagWND *v10; // rax
  struct tagWND *TopLevelWindow; // rax
  const WCHAR *v12; // r13
  PEPROCESS ThreadProcess; // rax
  ULONG64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // r8
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const WCHAR *v25; // rdx
  const WCHAR *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // [rsp+90h] [rbp-2E8h] BYREF
  unsigned int v31; // [rsp+94h] [rbp-2E4h] BYREF
  int v32; // [rsp+98h] [rbp-2E0h]
  int v33; // [rsp+9Ch] [rbp-2DCh]
  int v34; // [rsp+A0h] [rbp-2D8h]
  PETHREAD v35; // [rsp+A8h] [rbp-2D0h]
  int v36; // [rsp+B0h] [rbp-2C8h]
  int v37; // [rsp+B4h] [rbp-2C4h] BYREF
  int v38; // [rsp+B8h] [rbp-2C0h] BYREF
  int v39; // [rsp+BCh] [rbp-2BCh] BYREF
  unsigned int v40; // [rsp+C0h] [rbp-2B8h] BYREF
  unsigned int v41; // [rsp+C4h] [rbp-2B4h] BYREF
  unsigned int v42; // [rsp+C8h] [rbp-2B0h] BYREF
  int v43; // [rsp+CCh] [rbp-2ACh] BYREF
  int v44; // [rsp+D0h] [rbp-2A8h] BYREF
  int v45; // [rsp+D4h] [rbp-2A4h] BYREF
  unsigned int v46; // [rsp+D8h] [rbp-2A0h] BYREF
  unsigned int v47; // [rsp+DCh] [rbp-29Ch] BYREF
  unsigned int v48; // [rsp+E0h] [rbp-298h] BYREF
  int v49; // [rsp+E4h] [rbp-294h] BYREF
  PWSTR v50; // [rsp+E8h] [rbp-290h]
  PACCESS_TOKEN PrimaryToken; // [rsp+F0h] [rbp-288h]
  const wchar_t *v52; // [rsp+F8h] [rbp-280h]
  __int64 v53; // [rsp+100h] [rbp-278h]
  __int128 *v54; // [rsp+108h] [rbp-270h]
  __int64 v55; // [rsp+110h] [rbp-268h] BYREF
  __int64 v56; // [rsp+118h] [rbp-260h] BYREF
  __int64 v57; // [rsp+120h] [rbp-258h] BYREF
  const WCHAR *v58; // [rsp+128h] [rbp-250h] BYREF
  const WCHAR *v59; // [rsp+130h] [rbp-248h] BYREF
  const WCHAR *v60; // [rsp+138h] [rbp-240h] BYREF
  const WCHAR *v61; // [rsp+140h] [rbp-238h] BYREF
  const WCHAR *v62; // [rsp+148h] [rbp-230h] BYREF
  __int64 v63; // [rsp+150h] [rbp-228h] BYREF
  const WCHAR *v64; // [rsp+158h] [rbp-220h] BYREF
  const WCHAR *v65; // [rsp+160h] [rbp-218h] BYREF
  const WCHAR *v66; // [rsp+168h] [rbp-210h] BYREF
  __int128 v67; // [rsp+170h] [rbp-208h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+180h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v69; // [rsp+190h] [rbp-1E8h] BYREF
  _BYTE v70[144]; // [rsp+1B0h] [rbp-1C8h] BYREF
  _BYTE v71[256]; // [rsp+240h] [rbp-138h] BYREF

  PrimaryToken = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C0249748 - 1) <= 2u
     || (qword_1C0249730 & 0x8001000000040000uLL) == 0
     || (qword_1C0249738 & 0x8001000000040000uLL) != qword_1C0249738
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C0249250 <= 5 || !tlgKeywordOn((__int64)&dword_1C0249250, 0x40000LL) )
      return;
  }
  v31 = 0;
  v30 = 0;
  UnicodeString = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 294);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v36 = v3 - v4;
  if ( (int)v3 - v4 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
  v7 = ThreadInfoFlags;
  v34 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v52 = 0LL;
  v9 = 0LL;
  v50 = 0LL;
  v10 = (struct tagWND *)ValidateHwnd((__int64)a1[148]);
  v35 = v10;
  if ( v10 )
  {
    if ( (int)EtwpGetClassName(v10, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v52 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() < 0 )
      TopLevelWindow = 0LL;
    else
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)v35);
    if ( TopLevelWindow )
    {
      if ( v35 == TopLevelWindow )
      {
        v9 = Buffer;
        v50 = (PWSTR)Buffer;
      }
      else if ( (int)EtwpGetClassName(TopLevelWindow, &v69) >= 0 )
      {
        v9 = v69.Buffer;
        v50 = v69.Buffer;
      }
    }
  }
  EtwpGetLastInputProcessTime(a1[54], v3, &v31, &v30);
  v32 = *((_DWORD *)a1 + 298);
  v35 = a1[150];
  v12 = 0LL;
  v53 = 0LL;
  ThreadProcess = PsGetThreadProcess(*a1);
  v14 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
  if ( v14 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  v15 = *(_DWORD *)v14;
  v33 = v15;
  LODWORD(v67) = v15;
  v16 = *(_QWORD *)(v14 + 8);
  *((_QWORD *)&v67 + 1) = v16;
  if ( (v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = v16 + (unsigned __int16)v15 + 2LL;
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 >= MmUserProbeAddress || (unsigned __int16)v15 > HIWORD(v33) )
    goto LABEL_36;
  if ( (v15 & 1) != 0 )
    goto LABEL_37;
  if ( v17 <= v16 )
  {
LABEL_36:
    if ( (v15 & 1) == 0 )
    {
LABEL_38:
      **v18 = 0;
      goto LABEL_39;
    }
LABEL_37:
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 850);
    v18 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_38;
  }
LABEL_39:
  v54 = &v67;
  if ( &v67 )
    v12 = (const WCHAR *)*((_QWORD *)&v67 + 1);
  v19 = (__int64)a1[53];
  if ( (*(_DWORD *)(v19 + 820) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v19);
    v56 = 256LL;
    v55 = 130LL;
    v20 = RtlQueryPackageIdentity(PrimaryToken, v71, &v56, v70, &v55, 0LL);
    v34 = v20;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v21 = (const wchar_t *)v70;
      if ( v20 < 0 )
        v21 = &word_1C020FC54;
      v22 = (const wchar_t *)v71;
      if ( v20 < 0 )
        v22 = &word_1C020FC54;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (__int64)v22,
        (__int64)v21,
        (unsigned int)v20,
        v7,
        v5,
        v31,
        v30,
        Buffer,
        v9,
        v22,
        v21,
        v32,
        (char)v35);
    }
    if ( (unsigned int)dword_1C0249250 > 5 && tlgKeywordOn((__int64)&dword_1C0249250, 0x40000LL) )
    {
      v25 = (const WCHAR *)v70;
      if ( (int)v23 < 0 )
        v25 = &word_1C020FC54;
      v26 = (const WCHAR *)v71;
      if ( (int)v23 < 0 )
        v26 = &word_1C020FC54;
      v37 = 2;
      v38 = 1;
      v57 = (__int64)v35;
      v39 = v32;
      v58 = v9;
      v59 = Buffer;
      v60 = v12;
      v61 = v25;
      v62 = v26;
      v40 = v30;
      v41 = v31;
      v42 = v5;
      v43 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v26,
        byte_1C0218B16,
        v23,
        v24,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        &v62,
        &v61,
        &v60,
        &v59,
        &v58,
        (__int64)&v39,
        (__int64)&v57,
        (__int64)&v38,
        (__int64)&v37);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(v19, v17, v16, v7, v5, v31, v30, Buffer, v9, v12, v32, (char)v35);
    if ( (unsigned int)dword_1C0249250 > 5 && tlgKeywordOn((__int64)&dword_1C0249250, 0x40000LL) )
    {
      v44 = 1;
      v63 = (__int64)v35;
      v45 = v32;
      v64 = v9;
      v65 = Buffer;
      v66 = v12;
      v46 = v30;
      v47 = v31;
      v48 = v5;
      v49 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v27,
        byte_1C0218A4F,
        v28,
        v29,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        &v66,
        &v65,
        &v64,
        (__int64)&v45,
        (__int64)&v63,
        (__int64)&v44);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v9 )
  {
    if ( Buffer != v9 )
      RtlFreeUnicodeString(&v69);
  }
}
