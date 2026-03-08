/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90
 * Callers:
 *     SelectWindowRgn @ 0x1C00275FC (SelectWindowRgn.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C006789C (CalcWindowFullScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C009940C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     GetNewMonitor @ 0x1C00AB0FC (GetNewMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     SkipWindowOnMonitor @ 0x1C00C8DE0 (SkipWindowOnMonitor.c)
 *     _MonitorFromWindow @ 0x1C012F60C (_MonitorFromWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A6F6C (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C01DE4F0 (NtUserSetWindowShowState.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     IsSmallerThanScreen @ 0x1C0224BC0 (IsSmallerThanScreen.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r8d
  __int128 *v11; // rcx
  __int128 *Prop; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)GetDispInfo(a1) == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    v11 = Prop;
    if ( Prop )
    {
      if ( !a3 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        return (struct tagMONITOR *)MonitorFromRect((__int64)v11, a2, v10);
      }
      v13 = *Prop;
      v14 = *((_QWORD *)a1 + 5);
      v15 = v13;
      v9 = *(unsigned int *)(v14 + 288);
      goto LABEL_8;
    }
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v6 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v8 = *((_QWORD *)a1 + 5);
      if ( !a3 )
      {
        v10 = *(_DWORD *)(v8 + 288);
        v11 = (__int128 *)(v8 + 88);
        return (struct tagMONITOR *)MonitorFromRect((__int64)v11, a2, v10);
      }
      v15 = *(_OWORD *)(v8 + 88);
      v9 = *(unsigned int *)(v8 + 288);
LABEL_8:
      LogicalToPhysicalDPIRect(&v15, &v15, v9, 0LL);
      v10 = 18;
      v11 = &v15;
      return (struct tagMONITOR *)MonitorFromRect((__int64)v11, a2, v10);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  }
  if ( a2 - 1 <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  return 0LL;
}
