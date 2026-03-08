/*
 * XREFs of ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C0220198
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1C01DF140 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00113B0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002574C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B6860 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddDq @ 0x1C0222220 (WPP_RECORDER_AND_TRACE_SF_qdddddDq.c)
 */

__int64 __fastcall ShellWindowPos::PositionWindowAsync(
        struct tagWND *a1,
        __int64 a2,
        const struct tagRECT *a3,
        int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // ebx
  const struct tagRECT *v8; // r14
  __int64 v9; // r12
  char v11; // si
  unsigned int v12; // ebp
  char v13; // di
  char v14; // dl
  const char *v15; // rax
  __int64 v16; // rax
  void *v17; // rdi
  struct tagRECT v18; // xmm0
  __int64 v19; // rax
  const char *v21; // rax

  v6 = 0;
  v8 = a3;
  v9 = a2;
  if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 873);
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v12 = a5;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qdddddDq(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)a3, a4);
  }
  if ( (a5 & 0x10) != 0 )
  {
    v13 = RunForegroundAccessCheck((__int64)a1, 3);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v14 = 0;
    }
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = "Granted";
      if ( !v13 )
        v15 = "Denied";
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v14,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x19u,
        0xCu,
        (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
        v15);
    }
    if ( !v13 )
      return 2LL;
    v12 = a5 & 0xFFFFFFFC;
  }
  v16 = Win32AllocPoolZInit(40LL, 1886872405LL);
  v17 = (void *)v16;
  if ( v16 )
  {
    v18 = *v8;
    *(_QWORD *)(v16 + 16) = v9;
    *(_DWORD *)(v16 + 24) = a4;
    *(_DWORD *)(v16 + 28) = v12;
    *(struct tagRECT *)v16 = v18;
    *(_DWORD *)(v16 + 32) = a6;
    if ( v9 && v12 == 1 && IsRectEmptyInl(v8) )
    {
      v19 = HMValidateHandleNoSecure(v9, 1);
      if ( v19
        && (unsigned int)PostEventMessageEx(
                           *(struct tagTHREADINFO **)(v19 + 16),
                           *(struct tagQ **)(*(_QWORD *)(v19 + 16) + 432LL),
                           0x1Bu,
                           a1,
                           0,
                           0LL,
                           (__int64)v17,
                           0LL) )
      {
        goto LABEL_33;
      }
    }
    else if ( PostEventMessageWindow((struct tagTHREADINFO **)a1, 0x1Bu, 0LL, (__int64)v17) )
    {
      goto LABEL_33;
    }
    Win32FreePool(v17);
  }
  v17 = 0LL;
LABEL_33:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = "Succeeded";
    if ( !v17 )
      v21 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x19u,
      0xDu,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      v21);
  }
  LOBYTE(v6) = v17 == 0LL;
  return v6;
}
