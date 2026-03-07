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
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 ThreadTeb; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  unsigned __int16 *v22; // rax
  char v23; // r14
  ULONG64 v24; // rdx
  int v25; // ecx
  ULONG64 v26; // r8
  ULONG64 v27; // rdx
  _WORD *v28; // rcx
  _WORD *v29; // rbx
  _WORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  __int64 v35; // rax
  int v36; // r8d
  int v37; // r9d
  _UNKNOWN **v38; // rdx
  ULONG Value; // [rsp+50h] [rbp-218h] BYREF
  int v40; // [rsp+54h] [rbp-214h]
  int v41; // [rsp+58h] [rbp-210h] BYREF
  unsigned int v42; // [rsp+5Ch] [rbp-20Ch]
  _WORD *v43; // [rsp+60h] [rbp-208h]
  _WORD *v44; // [rsp+68h] [rbp-200h]
  __int64 v45; // [rsp+70h] [rbp-1F8h]
  __int64 v46; // [rsp+78h] [rbp-1F0h]
  __int64 v47; // [rsp+80h] [rbp-1E8h]
  __int128 v48; // [rsp+88h] [rbp-1E0h] BYREF
  UNICODE_STRING String; // [rsp+98h] [rbp-1D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-1C0h] BYREF
  WCHAR SourceString[96]; // [rsp+D0h] [rbp-198h] BYREF
  WCHAR v52[80]; // [rsp+190h] [rbp-D8h] BYREF

  Value = 0;
  DestinationString = 0LL;
  v48 = 0LL;
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
    v24 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
    if ( v24 >= MmUserProbeAddress )
      v24 = MmUserProbeAddress;
    v25 = *(_DWORD *)v24;
    v40 = v25;
    LODWORD(v48) = v25;
    v26 = *(_QWORD *)(v24 + 8);
    *((_QWORD *)&v48 + 1) = v26;
    if ( (v26 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = (unsigned __int16)v25 + v26 + 2;
    if ( v27 <= v26 || v27 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v25 > HIWORD(v40) )
    {
      if ( (v25 & 1) == 0 )
        goto LABEL_64;
    }
    else if ( (v25 & 1) == 0 )
    {
      v22 = (unsigned __int16 *)&v48;
      goto LABEL_49;
    }
    v40 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 216LL);
LABEL_64:
    ExRaiseAccessViolation();
  }
LABEL_49:
  v28 = (_WORD *)*((_QWORD *)v22 + 1);
  v29 = &v28[(unsigned __int64)*v22 >> 1];
  v44 = v29;
  v30 = v29;
  v43 = v29;
  while ( v29 != v28 )
  {
    if ( *v29 == 46 )
      goto LABEL_4;
    v44 = --v29;
  }
  v29 = v30;
  v44 = v30;
LABEL_4:
  v7 = v29;
  v43 = v29;
  while ( v7 != v28 )
  {
    if ( *v7 == 92 || *v7 == 58 )
    {
      v43 = ++v7;
      break;
    }
    v43 = --v7;
  }
  v8 = 2 * (v29 - v7);
  v42 = v8;
  if ( v8 >= 0xA4 )
    v8 = 162;
  v42 = v8;
  v9 = v8;
  memmove(SourceString, v7, v8);
  v10 = (_WORD *)(a1[53] + 976LL);
  if ( !*v10 )
  {
    v11 = 30LL;
    if ( v8 < 0x1E )
      v11 = v8;
    memmove(v10, v7, v11);
    *(_WORD *)(a1[53] + 1006LL) = 0;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  v45 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v45 = CurrentProcessWin32Process;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v20 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v21 = *(unsigned int *)(v20 + 48);
    ProbeForRead((volatile void *)(unsigned int)v21, 0x488uLL, 4u);
    v13 = *(_QWORD *)(v21 + 480);
  }
  else
  {
    v13 = *(_QWORD *)(ProcessPeb + 720);
  }
  a1[81] = v13;
  if ( (v13 & 0x800000000000000LL) != 0 )
  {
    v41 = 0;
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, 4, &v41, 0LL);
    if ( v41 )
    {
      a1[81] &= ~0x800000000000000uLL;
      v32 = PsGetCurrentProcessWin32Process(v31);
      v46 = v32;
      if ( v32 )
      {
        v32 &= -(__int64)(*(_QWORD *)v32 != 0LL);
        v46 = v32;
      }
      *(_DWORD *)(v32 + 12) &= ~0x20000000u;
    }
    else
    {
      v33 = PsGetCurrentProcessWin32Process(v31);
      v47 = v33;
      if ( v33 )
      {
        v33 &= -(__int64)(*(_QWORD *)v33 != 0LL);
        v47 = v33;
      }
      *(_DWORD *)(v33 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
  if ( (a1[81] & 0x2000000) != 0 || (v14 = IsCurrentDesktopComposed(), v15 = 0, !v14) )
    v15 = 1;
  v16 = *(unsigned int *)(a1[53] + 812LL);
  LOBYTE(v16) = v16 & 0x30;
  if ( (_BYTE)v16 == 16 )
    *(_QWORD *)a1[60] |= 0x10000000uLL;
  if ( v15 )
    goto LABEL_27;
  if ( (a1[81] & 0x880000000000000LL) != 0 )
  {
    v16 = a1[60];
    v18 = *(_QWORD *)(v16 + 224) | 0x10LL;
    goto LABEL_38;
  }
  v16 = a1[53];
  if ( (*(_DWORD *)(v16 + 812) & 0x30) != 0x10 )
  {
    if ( !(unsigned int)IsImmersiveBroker(v16) )
      goto LABEL_28;
    v16 = a1[60];
    v18 = *(_QWORD *)(v16 + 224) | 0x80LL;
LABEL_38:
    *(_QWORD *)(v16 + 224) = v18;
    goto LABEL_28;
  }
LABEL_27:
  *(_QWORD *)a1[60] |= 0x20000000uLL;
LABEL_28:
  if ( _bittest64(a1 + 81, 0x38u) )
  {
    v16 = a1[60];
    *(_QWORD *)(v16 + 224) |= 0x20uLL;
  }
  v17 = *((_DWORD *)a1 + 162);
  if ( (v17 & 0x10000000) == 0 )
  {
    v16 = 1536LL;
    if ( *((_WORD *)a1 + 316) < 0x600u )
    {
      *((_DWORD *)a1 + 162) = v17 | 0x20000000;
      v16 = a1[60];
      *(_DWORD *)(v16 + 24) |= 0x20000000u;
    }
  }
  v34 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v34 >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)SourceString + v34) = 0;
  v35 = PsGetCurrentProcessWin32Process(v16);
  if ( v35 )
    v35 &= -(__int64)(*(_QWORD *)v35 != 0LL);
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v35 + 12) & 0x80u) != 0 ? 43 : 33, SourceString, 0LL) )
  {
    String = 0LL;
    RtlInitUnicodeString(&String, v52);
    RtlUnicodeStringToInteger(&String, 0, &Value);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v23 = 0;
  }
  v38 = &WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v38) = v23;
    LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_DS(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v38, v36, v37, (unsigned int)v52, 80, 0);
  }
  *(_DWORD *)(a1[60] + 20LL) = Value;
  *((_DWORD *)a1 + 160) = Value;
  *(WCHAR *)((char *)SourceString + v34) = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return SetAppImeCompatFlags(a1, &DestinationString);
}
