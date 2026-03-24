/*
 * XREFs of SetAppCompatFlags @ 0x1C0013E30
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C0014428 (SetAppImeCompatFlags.c)
 *     WPP_RECORDER_SF_DS @ 0x1C0014540 (WPP_RECORDER_SF_DS.c)
 *     IsCurrentDesktopComposed @ 0x1C0014620 (IsCurrentDesktopComposed.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01618D4 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01655E0 (__report_rangecheckfailure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int16 *v7; // rdx
  int v8; // r15d
  ULONG64 v9; // rdx
  int v10; // ecx
  ULONG64 v11; // r8
  ULONG64 v12; // rdx
  _BYTE **v13; // rax
  _WORD *v14; // rbx
  _WORD *v15; // rax
  _WORD *v16; // rcx
  _WORD *v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // r14
  _WORD *v20; // rcx
  size_t v21; // r8
  __int64 ThreadTeb; // rax
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  ULONG Value; // [rsp+40h] [rbp-1F8h] BYREF
  int v35; // [rsp+44h] [rbp-1F4h]
  int v36; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-1ECh]
  _WORD *v38; // [rsp+50h] [rbp-1E8h]
  _WORD *v39; // [rsp+58h] [rbp-1E0h]
  __int128 v40; // [rsp+60h] [rbp-1D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1C8h] BYREF
  struct _UNICODE_STRING v42; // [rsp+80h] [rbp-1B8h] BYREF
  WCHAR v43[96]; // [rsp+A0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+160h] [rbp-D8h] BYREF

  Value = 0;
  v42 = 0LL;
  v40 = 0LL;
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
  v7 = (unsigned __int16 *)a1[62];
  v8 = 1;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
    if ( v9 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v10 = *(_DWORD *)v9;
    v35 = v10;
    LODWORD(v40) = v10;
    v11 = *(_QWORD *)(v9 + 8);
    *((_QWORD *)&v40 + 1) = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    v13 = (_BYTE **)MmUserProbeAddress;
    if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v35) )
    {
      if ( (v10 & 1) != 0 )
        goto LABEL_13;
      if ( v12 > v11 )
      {
LABEL_15:
        v7 = (unsigned __int16 *)&v40;
        goto LABEL_16;
      }
    }
    if ( (v10 & 1) == 0 )
    {
LABEL_14:
      **v13 = 0;
      goto LABEL_15;
    }
LABEL_13:
    v35 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 218LL);
    v13 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  v14 = (_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)*v7 >> 1));
  v39 = v14;
  v15 = v14;
  v38 = v14;
  while ( 1 )
  {
    v16 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v14 == v16 )
      break;
    if ( *v14 == 46 )
      goto LABEL_20;
    v39 = --v14;
  }
  v14 = v15;
  v39 = v15;
LABEL_20:
  v17 = v14;
  v38 = v14;
  while ( v17 != v16 )
  {
    if ( *v17 == 92 || *v17 == 58 )
    {
      v38 = ++v17;
      break;
    }
    v38 = --v17;
  }
  v18 = 2 * (v14 - v17);
  v37 = v18;
  if ( v18 >= 0xA4 )
    v18 = 162;
  v37 = v18;
  v19 = v18;
  memmove(v43, v17, v18);
  v20 = (_WORD *)(a1[53] + 992LL);
  if ( !*v20 )
  {
    v21 = 30LL;
    if ( v18 < 0x1E )
      v21 = v18;
    memmove(v20, v17, v21);
    *(_WORD *)(a1[53] + 1022LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 12) & 0x80u) == 0 )
  {
    v25 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v23 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v24 = *(unsigned int *)(v23 + 48);
    ProbeForRead((volatile void *)(unsigned int)v24, 0x480uLL, 4u);
    v25 = *(_QWORD *)(v24 + 480);
  }
  a1[81] = v25;
  if ( (v25 & 0x800000000000000LL) != 0 )
  {
    v36 = 0;
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, 4, &v36, 0LL);
    if ( v36 )
    {
      a1[81] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v27 = PsGetCurrentProcessWin32Process();
      *(_DWORD *)(v27 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
  if ( (a1[81] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v8 = 0;
  if ( (*(_DWORD *)(a1[53] + 820LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[60] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_48:
    *(_QWORD *)a1[60] |= 0x20000000uLL;
    goto LABEL_51;
  }
  if ( (a1[81] & 0x880000000000000LL) == 0 )
  {
    v28 = a1[53];
    if ( (*(_DWORD *)(v28 + 820) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v28) )
        *(_QWORD *)(a1[60] + 224LL) |= 0x80uLL;
      goto LABEL_51;
    }
    goto LABEL_48;
  }
  *(_QWORD *)(a1[60] + 224LL) |= 0x10uLL;
LABEL_51:
  if ( (a1[81] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[60] + 224LL) |= 0x20uLL;
  v29 = *((_DWORD *)a1 + 162);
  if ( (v29 & 0x10000000) == 0 && *((_WORD *)a1 + 316) < 0x600u )
  {
    *((_DWORD *)a1 + 162) = v29 | 0x20000000;
    *(_DWORD *)(a1[60] + 24LL) |= 0x20000000u;
  }
  if ( (v19 & 0xFFFFFFFFFFFFFFFEuLL) >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v43 + (v19 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  v30 = PsGetCurrentProcessWin32Process();
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v30 + 12) & 0x80u) != 0 ? 43 : 33, v43, 0LL) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DS(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v31,
      v32,
      v33,
      (unsigned int)SourceString,
      Value,
      (__int64)v43);
  *(_DWORD *)(a1[60] + 20LL) = Value;
  *((_DWORD *)a1 + 160) = Value;
  *(WCHAR *)((char *)v43 + (v19 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  RtlInitUnicodeString(&v42, v43);
  return SetAppImeCompatFlags(a1, &v42);
}
