/*
 * XREFs of xxxDefWindowProc @ 0x1C00A66F0
 * Callers:
 *     xxxGetControlColor @ 0x1C0007848 (xxxGetControlColor.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0013EE8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C006EE00 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxValidateClassAndSize @ 0x1C00FA3E4 (xxxValidateClassAndSize.c)
 *     xxxEventWndProc @ 0x1C0107F00 (xxxEventWndProc.c)
 *     xxxSwitchWndProc @ 0x1C01CC6D0 (xxxSwitchWndProc.c)
 *     xxxGetWindowText @ 0x1C01F3F74 (xxxGetWindowText.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     SfnDWORD @ 0x1C00385D0 (SfnDWORD.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxLoadUserApiHook @ 0x1C00DE45C (xxxLoadUserApiHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, HWND a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax

  if ( a2 == 397 || a2 == 325 )
    return 0LL;
  v7 = 0LL;
  if ( a2 != 60 )
    v7 = a4;
  if ( gihmodUserApiHook < 0 )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  v8 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v8 + 19) < 0 && (a2 != 130 || (*(_BYTE *)(v8 + 18) & 4) == 0 || *(__int16 *)(v8 + 42) < 0) )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook() )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  v10 = a2 & 0x1FFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) != 0 )
  {
    if ( v10 < 0x400 )
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               v7,
               0LL,
               *(_QWORD *)(gpsi + 552LL),
               1,
               0LL);
    v11 = *(_QWORD *)(gpsi + 552LL);
    return SfnDWORD((__int64 *)a1, a2, (__int64)a3, v7, 0LL, v11);
  }
  if ( v10 >= 0x400 )
  {
    v11 = *(_QWORD *)(gpsi + 744LL);
    return SfnDWORD((__int64 *)a1, a2, (__int64)a3, v7, 0LL, v11);
  }
  return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
           a1,
           a2,
           a3,
           v7,
           0LL,
           *(_QWORD *)(gpsi + 744LL),
           0,
           0LL);
}
