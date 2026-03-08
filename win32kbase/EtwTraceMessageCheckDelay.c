/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0092210
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C000C6F4 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C000CBB0 (Is_GetTopLevelWindowSupported.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C003422C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@35@Z @ 0x1C016079C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@335@Z @ 0x1C016094C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1C0161690 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1C0166A94 (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x1C0166C20 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned __int64 v3; // r13
  int v4; // eax
  unsigned int v5; // r15d
  int ThreadInfoFlags; // eax
  __int64 v7; // r9
  int v8; // r12d
  PWSTR Buffer; // rdi
  PWSTR v10; // rsi
  struct tagWND *v11; // rax
  struct tagWND *v12; // rax
  __int64 v13; // r13
  PEPROCESS ThreadProcess; // rax
  ULONG64 v15; // rdx
  int v16; // ecx
  ULONG64 v17; // r8
  ULONG64 v18; // rdx
  __int64 v19; // rcx
  PACCESS_TOKEN v20; // rbx
  int v21; // r8d
  int v22; // r9d
  const WCHAR *v23; // rdx
  const WCHAR *v24; // rcx
  __int64 v25; // rcx
  _BYTE *v26; // r8
  int v27; // r9d
  _BYTE *v28; // rax
  _BYTE *v29; // rax
  unsigned int v30; // ebx
  unsigned int v31; // r14d
  __int64 v32; // rcx
  unsigned int v33; // r8d
  _BYTE *v34; // r9
  unsigned int v35; // [rsp+90h] [rbp-2C8h]
  unsigned int v36; // [rsp+94h] [rbp-2C4h] BYREF
  unsigned int v37; // [rsp+98h] [rbp-2C0h] BYREF
  struct tagWND *v38; // [rsp+A0h] [rbp-2B8h]
  int v39; // [rsp+A8h] [rbp-2B0h]
  int v40; // [rsp+ACh] [rbp-2ACh]
  unsigned int v41; // [rsp+B0h] [rbp-2A8h]
  unsigned int v42; // [rsp+B4h] [rbp-2A4h]
  unsigned int v43; // [rsp+B8h] [rbp-2A0h]
  unsigned int v44; // [rsp+BCh] [rbp-29Ch]
  struct tagTHREADINFO *v45; // [rsp+C0h] [rbp-298h]
  PWSTR v46; // [rsp+C8h] [rbp-290h]
  PWSTR v47; // [rsp+D0h] [rbp-288h]
  int v48; // [rsp+D8h] [rbp-280h]
  int v49; // [rsp+DCh] [rbp-27Ch]
  int v50; // [rsp+E0h] [rbp-278h]
  int v51; // [rsp+E4h] [rbp-274h]
  PACCESS_TOKEN v52; // [rsp+E8h] [rbp-270h]
  __int64 v53; // [rsp+F0h] [rbp-268h]
  PWSTR v54; // [rsp+F8h] [rbp-260h]
  __int64 v55; // [rsp+100h] [rbp-258h]
  _BYTE *v56; // [rsp+108h] [rbp-250h]
  __int64 v57; // [rsp+110h] [rbp-248h]
  struct tagWND *v58; // [rsp+118h] [rbp-240h]
  struct tagWND *v59; // [rsp+120h] [rbp-238h]
  __int128 *v60; // [rsp+128h] [rbp-230h]
  __int64 v61; // [rsp+130h] [rbp-228h] BYREF
  _QWORD v62[2]; // [rsp+138h] [rbp-220h] BYREF
  __int128 v63; // [rsp+148h] [rbp-210h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+158h] [rbp-200h] BYREF
  struct _UNICODE_STRING v65; // [rsp+168h] [rbp-1F0h] BYREF
  _BYTE v66[144]; // [rsp+190h] [rbp-1C8h] BYREF
  _BYTE v67[256]; // [rsp+220h] [rbp-138h] BYREF

  v45 = a1;
  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C02C4068 - 1) <= 2u
     || (qword_1C02C4050 & 0x8001000000040000uLL) == 0
     || (qword_1C02C4058 & 0x8001000000040000uLL) != qword_1C02C4058
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C02C93D8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02C93D8, 0x40000LL) )
      return;
  }
  v36 = 0;
  v37 = 0;
  UnicodeString = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 304);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v49 = v3 - v4;
  if ( (int)v3 - v4 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v8 = ThreadInfoFlags;
  v50 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v47 = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  v11 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 153), 1LL, 0LL, v7);
  v38 = v11;
  if ( v11 )
  {
    if ( (int)EtwpGetClassName(v11, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v47 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() >= 0 && qword_1C02D7028 )
      v12 = (struct tagWND *)qword_1C02D7028(v38);
    else
      v12 = 0LL;
    if ( v12 )
    {
      if ( v38 == v12 )
      {
        v10 = Buffer;
        v46 = Buffer;
      }
      else if ( (int)EtwpGetClassName(v12, &v65) >= 0 )
      {
        v10 = v65.Buffer;
        v46 = v65.Buffer;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 54), v3, &v36, &v37, 0LL, 0LL);
  v35 = *((_DWORD *)a1 + 308);
  v39 = v35;
  v38 = (struct tagWND *)*((_QWORD *)a1 + 155);
  v59 = v38;
  v13 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  v15 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
  if ( v15 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  v16 = *(_DWORD *)v15;
  v48 = v16;
  LODWORD(v63) = v16;
  v17 = *(_QWORD *)(v15 + 8);
  *((_QWORD *)&v63 + 1) = v17;
  if ( (v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (unsigned __int16)v16 + v17 + 2;
  if ( v18 <= v17 || v18 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v16 > HIWORD(v48) )
  {
    if ( (v16 & 1) == 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( (v16 & 1) != 0 )
  {
LABEL_40:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 850LL);
LABEL_41:
    ExRaiseAccessViolation();
  }
  v60 = &v63;
  if ( &v63 )
    v13 = *((_QWORD *)&v63 + 1);
  v19 = *((_QWORD *)a1 + 53);
  if ( (*(_DWORD *)(v19 + 812) & 0x30) == 0x10 )
  {
    v20 = PsReferencePrimaryToken(*(PEPROCESS *)v19);
    v52 = v20;
    v62[0] = 256LL;
    v61 = 130LL;
    v22 = RtlQueryPackageIdentity(v20, v67, v62, v66, &v61, 0LL);
    v39 = v22;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v23 = (const WCHAR *)v66;
      if ( v22 < 0 )
        v23 = &word_1C02856D8;
      v24 = (const WCHAR *)v67;
      if ( v22 < 0 )
        v24 = &word_1C02856D8;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (_DWORD)v24,
        (_DWORD)v23,
        v21,
        v8,
        v5,
        v36,
        v37,
        (__int64)Buffer,
        (__int64)v10,
        (__int64)v24,
        (__int64)v23,
        v35,
        (char)v38);
    }
    if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x40000LL) )
    {
      v62[1] = 0x1000000LL;
      v51 = 2;
      v40 = 1;
      v58 = v38;
      v41 = v35;
      v53 = (__int64)v10;
      v54 = Buffer;
      v55 = v13;
      v28 = v66;
      if ( v27 < 0 )
        v28 = v26;
      v56 = v28;
      v29 = v67;
      if ( v27 < 0 )
        v29 = v26;
      v57 = (__int64)v29;
      v42 = v37;
      v43 = v36;
      v44 = v5;
      LODWORD(v45) = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v25,
        &unk_1C0294CE4);
    }
    PsDereferencePrimaryToken(v20);
  }
  else
  {
    v30 = v37;
    v31 = v36;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(
        v19,
        v18,
        v35,
        v8,
        v5,
        v36,
        v37,
        (__int64)Buffer,
        (__int64)v10,
        v13,
        v35,
        (char)v38);
    if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x40000LL) )
    {
      v57 = 0x1000000LL;
      LODWORD(v45) = 1;
      v56 = v34;
      v44 = v33;
      v55 = (__int64)v10;
      v54 = Buffer;
      v53 = v13;
      v43 = v30;
      v42 = v31;
      v41 = v5;
      v40 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v32,
        &unk_1C0294C0D);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v10 )
  {
    if ( Buffer != v10 )
      RtlFreeUnicodeString(&v65);
  }
}
