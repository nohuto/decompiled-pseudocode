/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C006C0E8 (CalcWindowFullScreen.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     SkipWindowOnMonitor @ 0x1C00CDFE8 (SkipWindowOnMonitor.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00FD850 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     IsSmallerThanScreen @ 0x1C014CE30 (IsSmallerThanScreen.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CC428 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C01FE820 (NtUserSetWindowShowState.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, int a2, int a3)
{
  __int64 v7; // rax
  struct tagRECT *v8; // rcx
  struct tagRECT v9; // xmm0
  struct tagRECT *Prop; // rax
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)GetDispInfo() == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
    v8 = Prop;
    if ( Prop )
    {
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v8);
      v9 = *Prop;
      v7 = *((_QWORD *)a1 + 5);
      goto LABEL_8;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 42LL) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v7 = *((_QWORD *)a1 + 5);
      v8 = (struct tagRECT *)(v7 + 88);
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v8);
      v9 = *v8;
LABEL_8:
      v11 = v9;
      ((void (__fastcall *)(struct tagRECT *, struct tagRECT *, _QWORD, _QWORD))LogicalToPhysicalDPIRect)(
        &v11,
        &v11,
        *(unsigned int *)(v7 + 288),
        0LL);
      v8 = &v11;
      return (struct tagMONITOR *)MonitorFromRect(v8);
    }
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  }
  if ( (unsigned int)(a2 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  return 0LL;
}
