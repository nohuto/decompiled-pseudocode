/*
 * XREFs of UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0
 * Callers:
 *     UsbhPCE_QueueDriverReset @ 0x1C0001734 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_Suspend @ 0x1C000F8DC (UsbhPCE_Suspend.c)
 *     Usbh_BS_BusSuspend @ 0x1C000FE40 (Usbh_BS_BusSuspend.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0011440 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhHubProcessChangeWorker @ 0x1C00134E0 (UsbhHubProcessChangeWorker.c)
 *     UsbhBusResume_Action @ 0x1C0013AB0 (UsbhBusResume_Action.c)
 *     UsbhBusPause_Action @ 0x1C0014220 (UsbhBusPause_Action.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0015120 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0015150 (UsbhHubRunPortChangeQueue.c)
 *     UsbhPCE_HardwareWake @ 0x1C001E4CC (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_psSUSPEND @ 0x1C001E580 (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_QueueChange @ 0x1C001E628 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_wRun @ 0x1C001E6FC (UsbhPCE_wRun.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00338F4 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Check @ 0x1C00339C8 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C0033AA0 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0033B7C (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C0033CC4 (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0033D98 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0033E78 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C0033F88 (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C003405C (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0034130 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x1C0034204 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C00342D0 (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1C00343D8 (UsbhPCE_wChangeERROR.c)
 *     UsbhQueuePauseChange @ 0x1C00344BC (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     Usbh_PCE_Suspend_Action @ 0x1C0008CC0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000CF9C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C000D224 (Usbh_PCE_HardwareWake_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0010A20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0011DA0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0012330 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0012D50 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C00159C0 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0015F80 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00164A0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x1C001B420 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001BF60 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C001D514 (Usbh_PCE_psSUSPEND_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0034AE8 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C0034CD8 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0034E08 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C003502C (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C00352A0 (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C00353CC (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C00355C8 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0035734 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C00359FC (Usbh_PCE_wChangeERROR_Action.c)
 */

int *__fastcall UsbhDispatch_PortChangeQueueEventEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int *a8)
{
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-18h]

  v9 = (int)a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a3);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1346662768;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a4;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 5:
      Usbh_PCE_wRun_Action(a1, a2, a4);
      break;
    case 0x10:
      return (int *)Usbh_PCE_wChange_Action(a1, a2, a4);
    case 6:
      Usbh_PCE_wDone_Action(a1, a2, a4);
      break;
    default:
      switch ( (int)v9 )
      {
        case 1:
          Usbh_PCE_Enable_Action(a1, a2);
          break;
        case 2:
          Usbh_PCE_Disable_Action(a1, a2);
          break;
        case 3:
          Usbh_PCE_Resume_Action(a1, a2, a4);
          break;
        case 4:
          LODWORD(v15) = a6;
          Usbh_PCE_QueueChange_Action(a1, a2, a4, a5, v15, a7);
          break;
        case 8:
          Usbh_PCE_SoftDisconnect_Action(a1, a2, a4);
          break;
        case 9:
          Usbh_PCE_BusReset_Action(a1, a2);
          break;
        case 10:
          Usbh_PCE_Suspend_Action(a1, a2, a4, a8);
          break;
        case 11:
          Usbh_PCE_BusDisconnect_Action(a1, a2, a4);
          break;
        case 12:
          Usbh_PCE_HardwareWake_Action(a1, a2, a3);
          break;
        case 13:
          Usbh_PCE_SD_Resume_Action(a1, a2, a4);
          break;
        case 14:
          Usbh_PCE_ResumeTimeout_Action(a1, a2);
          break;
        case 15:
          LODWORD(v15) = a6;
          Usbh_PCE_QueueDriverReset_Action(a1, a2, a4, a5, v15, a7);
          break;
        case 17:
          Usbh_PCE_HW_Stop_Action(a1, a2, a4);
          break;
        case 18:
          Usbh_PCE_psSUSPEND_Action(a1, a2, a4);
          break;
        case 19:
          Usbh_PCE_psPAUSED_Action(a1, a2, a4);
          break;
        case 20:
          a8 = (int *)Usbh_PCE_Check_Action(a1, a2, a4, a8);
          break;
        case 21:
          Usbh_PCE_ResumeDone_Action(a1, a2, a4);
          break;
        case 22:
          Usbh_PCE_Close_Action(a1, a2, a4);
          break;
        case 23:
          Usbh_PCE_wChangeERROR_Action(a1, a2, a4, a5, v15, a7);
          break;
        default:
          return a8;
      }
      break;
  }
  return a8;
}
