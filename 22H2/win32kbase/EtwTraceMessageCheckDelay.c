/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0089570
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C000DDF4 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C000E2B0 (Is_GetTopLevelWindowSupported.c)
 *     ValidateHwndEx @ 0x1C0045FD0 (ValidateHwndEx.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C006FEE4 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@35@Z @ 0x1C0137C3C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@335@Z @ 0x1C0137DEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1C013873C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1C013DB34 (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x1C013DCC0 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned __int64 v3; // r13
  int v4; // eax
  unsigned int v5; // r15d
  int ThreadInfoFlags; // eax
  int v7; // r12d
  PWSTR Buffer; // rdi
  PWSTR v9; // rsi
  struct tagWND *v10; // rax
  struct tagWND *v11; // rax
  __int64 v12; // r13
  PEPROCESS ThreadProcess; // rax
  ULONG64 v14; // rdx
  int v15; // ecx
  ULONG64 v16; // r8
  ULONG64 v17; // rdx
  __int64 v18; // rcx
  PACCESS_TOKEN v19; // rbx
  int v20; // r8d
  int v21; // r9d
  const WCHAR *v22; // rdx
  const WCHAR *v23; // rcx
  __int64 v24; // rcx
  _BYTE *v25; // r8
  int v26; // r9d
  _BYTE *v27; // rax
  _BYTE *v28; // rax
  unsigned int v29; // ebx
  unsigned int v30; // r14d
  __int64 v31; // rcx
  unsigned int v32; // r8d
  _BYTE *v33; // r9
  unsigned int v34; // [rsp+90h] [rbp-2C8h]
  unsigned int v35; // [rsp+94h] [rbp-2C4h] BYREF
  unsigned int v36; // [rsp+98h] [rbp-2C0h] BYREF
  struct tagWND *v37; // [rsp+A0h] [rbp-2B8h]
  int v38; // [rsp+A8h] [rbp-2B0h]
  int v39; // [rsp+ACh] [rbp-2ACh]
  unsigned int v40; // [rsp+B0h] [rbp-2A8h]
  unsigned int v41; // [rsp+B4h] [rbp-2A4h]
  unsigned int v42; // [rsp+B8h] [rbp-2A0h]
  unsigned int v43; // [rsp+BCh] [rbp-29Ch]
  struct tagTHREADINFO *v44; // [rsp+C0h] [rbp-298h]
  PWSTR v45; // [rsp+C8h] [rbp-290h]
  PWSTR v46; // [rsp+D0h] [rbp-288h]
  int v47; // [rsp+D8h] [rbp-280h]
  int v48; // [rsp+DCh] [rbp-27Ch]
  int v49; // [rsp+E0h] [rbp-278h]
  int v50; // [rsp+E4h] [rbp-274h]
  PACCESS_TOKEN v51; // [rsp+E8h] [rbp-270h]
  __int64 v52; // [rsp+F0h] [rbp-268h]
  PWSTR v53; // [rsp+F8h] [rbp-260h]
  __int64 v54; // [rsp+100h] [rbp-258h]
  _BYTE *v55; // [rsp+108h] [rbp-250h]
  __int64 v56; // [rsp+110h] [rbp-248h]
  struct tagWND *v57; // [rsp+118h] [rbp-240h]
  struct tagWND *v58; // [rsp+120h] [rbp-238h]
  __int128 *v59; // [rsp+128h] [rbp-230h]
  __int64 v60; // [rsp+130h] [rbp-228h] BYREF
  _QWORD v61[2]; // [rsp+138h] [rbp-220h] BYREF
  __int128 v62; // [rsp+148h] [rbp-210h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+158h] [rbp-200h] BYREF
  struct _UNICODE_STRING v64; // [rsp+168h] [rbp-1F0h] BYREF
  _BYTE v65[144]; // [rsp+190h] [rbp-1C8h] BYREF
  _BYTE v66[256]; // [rsp+220h] [rbp-138h] BYREF

  v44 = a1;
  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C0283068 - 1) <= 2u
     || (qword_1C0283050 & 0x8001000000040000uLL) == 0
     || (qword_1C0283058 & 0x8001000000040000uLL) != qword_1C0283058
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C02883D8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02883D8, 0x40000LL) )
      return;
  }
  v35 = 0;
  v36 = 0;
  UnicodeString = 0LL;
  v64 = 0LL;
  v62 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 304);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v48 = v3 - v4;
  if ( (unsigned int)(v3 - v4) < 0xC8 )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v7 = ThreadInfoFlags;
  v49 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v46 = 0LL;
  v9 = 0LL;
  v45 = 0LL;
  v10 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 153), 1, 0);
  v37 = v10;
  if ( v10 )
  {
    if ( (int)EtwpGetClassName(v10, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v46 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() >= 0 && qword_1C0295EB0 )
      v11 = (struct tagWND *)qword_1C0295EB0(v37);
    else
      v11 = 0LL;
    if ( v11 )
    {
      if ( v37 == v11 )
      {
        v9 = Buffer;
        v45 = Buffer;
      }
      else if ( (int)EtwpGetClassName(v11, &v64) >= 0 )
      {
        v9 = v64.Buffer;
        v45 = v64.Buffer;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 54), v3, &v35, &v36, 0LL, 0LL);
  v34 = *((_DWORD *)a1 + 308);
  v38 = v34;
  v37 = (struct tagWND *)*((_QWORD *)a1 + 155);
  v58 = v37;
  v12 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  v14 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
  if ( v14 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  v15 = *(_DWORD *)v14;
  v47 = v15;
  LODWORD(v62) = v15;
  v16 = *(_QWORD *)(v14 + 8);
  *((_QWORD *)&v62 + 1) = v16;
  if ( (v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (unsigned __int16)v15 + v16 + 2;
  if ( v17 <= v16 || v17 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v15 > HIWORD(v47) )
  {
    if ( (v15 & 1) == 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( (v15 & 1) != 0 )
  {
LABEL_40:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 843LL);
LABEL_41:
    ExRaiseAccessViolation();
  }
  v59 = &v62;
  if ( &v62 )
    v12 = *((_QWORD *)&v62 + 1);
  v18 = *((_QWORD *)a1 + 53);
  if ( (*(_DWORD *)(v18 + 816) & 0x30) == 0x10 )
  {
    v19 = PsReferencePrimaryToken(*(PEPROCESS *)v18);
    v51 = v19;
    v61[0] = 256LL;
    v60 = 130LL;
    v21 = RtlQueryPackageIdentity(v19, v66, v61, v65, &v60, 0LL);
    v38 = v21;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v22 = (const WCHAR *)v65;
      if ( v21 < 0 )
        v22 = &word_1C0248490;
      v23 = (const WCHAR *)v66;
      if ( v21 < 0 )
        v23 = &word_1C0248490;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (_DWORD)v23,
        (_DWORD)v22,
        v20,
        v7,
        v5,
        v35,
        v36,
        (__int64)Buffer,
        (__int64)v9,
        (__int64)v23,
        (__int64)v22,
        v34,
        (char)v37);
    }
    if ( (unsigned int)dword_1C02883D8 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x40000LL) )
    {
      v61[1] = 0x1000000LL;
      v50 = 2;
      v39 = 1;
      v57 = v37;
      v40 = v34;
      v52 = (__int64)v9;
      v53 = Buffer;
      v54 = v12;
      v27 = v65;
      if ( v26 < 0 )
        v27 = v25;
      v55 = v27;
      v28 = v66;
      if ( v26 < 0 )
        v28 = v25;
      v56 = (__int64)v28;
      v41 = v36;
      v42 = v35;
      v43 = v5;
      LODWORD(v44) = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v24,
        &unk_1C025665F);
    }
    PsDereferencePrimaryToken(v19);
  }
  else
  {
    v29 = v36;
    v30 = v35;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(
        v18,
        v17,
        v34,
        v7,
        v5,
        v35,
        v36,
        (__int64)Buffer,
        (__int64)v9,
        v12,
        v34,
        (char)v37);
    if ( (unsigned int)dword_1C02883D8 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x40000LL) )
    {
      v56 = 0x1000000LL;
      LODWORD(v44) = 1;
      v55 = v33;
      v43 = v32;
      v54 = (__int64)v9;
      v53 = Buffer;
      v52 = v12;
      v42 = v29;
      v41 = v30;
      v40 = v5;
      v39 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v31,
        &unk_1C0256588);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v9 )
  {
    if ( Buffer != v9 )
      RtlFreeUnicodeString(&v64);
  }
}
