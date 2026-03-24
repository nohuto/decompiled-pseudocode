/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200
 * Callers:
 *     SkipWindowOnMonitor @ 0x1C00281D0 (SkipWindowOnMonitor.c)
 *     IsSmallerThanScreen @ 0x1C002C4B0 (IsSmallerThanScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C003DF58 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064D40 (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C006AA64 (CalcWindowFullScreen.c)
 *     GetNewMonitor @ 0x1C006BF5C (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     SelectWindowRgn @ 0x1C0111AAC (SelectWindowRgn.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFFD0 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C0203380 (NtUserSetWindowShowState.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236330 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
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
    Prop = (struct tagRECT *)GetProp(a1, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
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
      LogicalToPhysicalDPIRect(&v11, &v11, *(unsigned int *)(v7 + 288), 0LL);
      v8 = &v11;
      return (struct tagMONITOR *)MonitorFromRect(v8);
    }
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  }
  if ( (unsigned int)(a2 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  return 0LL;
}
