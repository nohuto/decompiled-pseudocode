/*
 * XREFs of SetAppCompatFlags @ 0x1C009CB70
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C009D250 (SetAppImeCompatFlags.c)
 *     WPP_RECORDER_AND_TRACE_SF_DS @ 0x1C009D36C (WPP_RECORDER_AND_TRACE_SF_DS.c)
 *     IsCurrentDesktopComposed @ 0x1C009D460 (IsCurrentDesktopComposed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01521C4 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01593E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  _WORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r15
  _WORD *v10; // rcx
  size_t v11; // r8
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 ThreadTeb; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int16 *v22; // rdx
  char v23; // r14
  unsigned int *v24; // rdx
  __int64 v25; // rcx
  ULONG64 v26; // r8
  ULONG64 v27; // rdx
  _BYTE **v28; // rax
  _WORD *v29; // rbx
  _WORD *v30; // rax
  _WORD *v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rax
  int v34; // r8d
  int v35; // r9d
  _UNKNOWN **v36; // rdx
  ULONG Value; // [rsp+50h] [rbp-1F8h] BYREF
  int v38; // [rsp+54h] [rbp-1F4h] BYREF
  int v39; // [rsp+58h] [rbp-1F0h]
  unsigned int v40; // [rsp+5Ch] [rbp-1ECh]
  _WORD *v41; // [rsp+60h] [rbp-1E8h]
  _WORD *v42; // [rsp+68h] [rbp-1E0h]
  __int128 v43; // [rsp+70h] [rbp-1D8h] BYREF
  UNICODE_STRING String; // [rsp+80h] [rbp-1C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-1B8h] BYREF
  WCHAR SourceString[96]; // [rsp+B0h] [rbp-198h] BYREF
  WCHAR v47[80]; // [rsp+170h] [rbp-D8h] BYREF

  Value = 0;
  DestinationString = 0LL;
  v43 = 0LL;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[83];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 640);
    *((_DWORD *)a1 + 160) = v5;
    a1[81] = *(_QWORD *)(v4 + 648);
    *(_DWORD *)(a1[60] + 20LL) = v5;
    *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
    return 0LL;
  }
  v22 = (unsigned __int16 *)a1[62];
  v23 = 1;
  if ( !v22 )
  {
    v24 = (unsigned int *)(*(_QWORD *)(ProcessPeb + 32) + 96LL);
    if ( (unsigned __int64)v24 >= MmUserProbeAddress )
      v24 = (unsigned int *)MmUserProbeAddress;
    v25 = *v24;
    v39 = v25;
    LODWORD(v43) = v25;
    v26 = *((_QWORD *)v24 + 1);
    *((_QWORD *)&v43 + 1) = v26;
    if ( (v26 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = v26 + (unsigned __int16)v25 + 2LL;
    v28 = (_BYTE **)MmUserProbeAddress;
    if ( v27 < MmUserProbeAddress && (unsigned __int16)v25 <= HIWORD(v39) )
    {
      if ( (v25 & 1) != 0 )
        goto LABEL_54;
      if ( v27 > v26 )
      {
LABEL_48:
        v22 = (unsigned __int16 *)&v43;
        goto LABEL_49;
      }
    }
    if ( (v25 & 1) == 0 )
    {
LABEL_55:
      **v28 = 0;
      goto LABEL_48;
    }
LABEL_54:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
    v28 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_55;
  }
LABEL_49:
  v29 = (_WORD *)(*((_QWORD *)v22 + 1) + 2 * ((unsigned __int64)*v22 >> 1));
  v42 = v29;
  v30 = v29;
  v41 = v29;
  while ( 1 )
  {
    v31 = (_WORD *)*((_QWORD *)v22 + 1);
    if ( v29 == v31 )
      break;
    if ( *v29 == 46 )
      goto LABEL_4;
    v42 = --v29;
  }
  v29 = v30;
  v42 = v30;
LABEL_4:
  v7 = v29;
  v41 = v29;
  while ( v7 != v31 )
  {
    if ( *v7 == 92 || *v7 == 58 )
    {
      v41 = ++v7;
      break;
    }
    v41 = --v7;
  }
  v8 = 2 * (v29 - v7);
  v40 = v8;
  if ( v8 >= 0xA4 )
    v8 = 162;
  v40 = v8;
  v9 = v8;
  memmove(SourceString, v7, v8);
  v10 = (_WORD *)(a1[53] + 992LL);
  if ( !*v10 )
  {
    v11 = 30LL;
    if ( v8 < 0x1E )
      v11 = v8;
    memmove(v10, v7, v11);
    *(_WORD *)(a1[53] + 1022LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v18 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v19 = *(unsigned int *)(v18 + 48);
    ProbeForRead((volatile void *)(unsigned int)v19, 0x488uLL, 4u);
    v12 = *(_QWORD *)(v19 + 480);
  }
  else
  {
    v12 = *(_QWORD *)(ProcessPeb + 720);
  }
  a1[81] = v12;
  if ( (v12 & 0x800000000000000LL) != 0 )
  {
    v38 = 0;
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, 4, &v38, 0LL);
    if ( v38 )
    {
      a1[81] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v21 = PsGetCurrentProcessWin32Process(v20);
      *(_DWORD *)(v21 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
  if ( (a1[81] & 0x2000000) != 0 || (v13 = IsCurrentDesktopComposed(), v14 = 0, !v13) )
    v14 = 1;
  v15 = *(unsigned int *)(a1[53] + 820LL);
  LOBYTE(v15) = v15 & 0x30;
  if ( (_BYTE)v15 == 16 )
    *(_QWORD *)a1[60] |= 0x10000000uLL;
  if ( !v14 )
  {
    v15 = 0x880000000000000LL;
    if ( (a1[81] & 0x880000000000000LL) != 0 )
    {
      *(_QWORD *)(a1[60] + 224LL) |= 0x10uLL;
      goto LABEL_28;
    }
    v15 = a1[53];
    if ( (*(_DWORD *)(v15 + 820) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v15) )
        *(_QWORD *)(a1[60] + 224LL) |= 0x80uLL;
      goto LABEL_28;
    }
  }
  *(_QWORD *)a1[60] |= 0x20000000uLL;
LABEL_28:
  if ( _bittest64(a1 + 81, 0x38u) )
    *(_QWORD *)(a1[60] + 224LL) |= 0x20uLL;
  v16 = *((_DWORD *)a1 + 162);
  if ( (v16 & 0x10000000) == 0 )
  {
    v15 = 1536LL;
    if ( *((_WORD *)a1 + 316) < 0x600u )
    {
      *((_DWORD *)a1 + 162) = v16 | 0x20000000;
      *(_DWORD *)(a1[60] + 24LL) |= 0x20000000u;
    }
  }
  if ( (v9 & 0xFFFFFFFFFFFFFFFEuLL) >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)SourceString + (v9 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  v33 = PsGetCurrentProcessWin32Process(v15);
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v33 + 12) & 0x80u) != 0 ? 43 : 33, SourceString, 0LL) )
  {
    String = 0LL;
    RtlInitUnicodeString(&String, v47);
    RtlUnicodeStringToInteger(&String, 0, &Value);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v23 = 0;
  }
  v36 = &WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v36) = v23;
    LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_DS(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v36, v34, v35, (unsigned int)v47, 80, 0);
  }
  *(_DWORD *)(a1[60] + 20LL) = Value;
  *((_DWORD *)a1 + 160) = Value;
  *(WCHAR *)((char *)SourceString + (v9 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return SetAppImeCompatFlags(a1, &DestinationString);
}
