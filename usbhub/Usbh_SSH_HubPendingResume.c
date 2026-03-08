/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x1C00076A0
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0020A80 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhUnlockSSH @ 0x1C0022790 (UsbhUnlockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhLockSSH @ 0x1C0058FFC (UsbhLockSSH.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v8 = a2 - 1;
  if ( !v8 )
  {
    v20 = 5LL;
LABEL_29:
    UsbhUnlockSSH(a3, v20);
    return v6;
  }
  v9 = v8 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 )
  {
    v19 = a3;
    goto LABEL_27;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    UsbhUnlockSSH(a3, 5LL);
    KeWaitForSingleObject(v7 + 846, Executive, 0, 0, 0LL);
    v20 = (unsigned int)UsbhLockSSH(a3, 6LL);
    v21 = 0;
    if ( (_DWORD)v20 == 6 )
      v21 = -1073741823;
    v6 = v21;
    goto LABEL_29;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v18 = FdoExt(*(_QWORD *)(a3 + 8));
    *(_DWORD *)(v18 + 3124) = 1;
    *(_DWORD *)(32LL * *(unsigned int *)(v18 + 3456) + v18 + 3468) = 1;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *(_QWORD *)(v18 + 3192) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 3128), 16, 1, 0);
    return v6;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v19 = a3;
    if ( v15 == 1 )
    {
      UsbhUnlockSSH(a3, 6LL);
      UsbhDisarmHubForWakeDetect(a1);
      return v6;
    }
LABEL_27:
    UsbhUnlockSSH(v19, 5LL);
    return (unsigned int)-1073741823;
  }
  v16 = FdoExt(*(_QWORD *)(a3 + 8));
  *(_DWORD *)(v16 + 3124) = 5;
  *(_DWORD *)(32LL * *(unsigned int *)(v16 + 3456) + v16 + 3468) = 5;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *(_QWORD *)(v16 + 3192) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v16 + 3128), 16, 1, 0);
  UsbhSshResumeDownstream(a1);
  return v6;
}
