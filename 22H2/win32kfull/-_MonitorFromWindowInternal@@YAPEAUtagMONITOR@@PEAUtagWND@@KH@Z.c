/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     SelectWindowRgn @ 0x1C0077C08 (SelectWindowRgn.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C008E854 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     SkipWindowOnMonitor @ 0x1C0095080 (SkipWindowOnMonitor.c)
 *     CalcWindowFullScreen @ 0x1C00CF81C (CalcWindowFullScreen.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x1C010B39C (GetNewMonitor.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A5DB4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C01DD4C0 (NtUserSetWindowShowState.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C02160D4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     IsSmallerThanScreen @ 0x1C0221EB0 (IsSmallerThanScreen.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 *v10; // rcx
  __int128 *Prop; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)GetDispInfo(a1) == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    v10 = Prop;
    if ( Prop )
    {
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v10, a2);
      v12 = *Prop;
      v13 = *((_QWORD *)a1 + 5);
      v14 = v12;
      v9 = *(unsigned int *)(v13 + 288);
      goto LABEL_8;
    }
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v6 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v8 = *((_QWORD *)a1 + 5);
      if ( !a3 )
      {
        v10 = (__int128 *)(v8 + 88);
        return (struct tagMONITOR *)MonitorFromRect(v10, a2);
      }
      v14 = *(_OWORD *)(v8 + 88);
      v9 = *(unsigned int *)(v8 + 288);
LABEL_8:
      LogicalToPhysicalDPIRect(&v14, &v14, v9, 0LL);
      v10 = &v14;
      return (struct tagMONITOR *)MonitorFromRect(v10, a2);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  }
  if ( a2 - 1 <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  return 0LL;
}
