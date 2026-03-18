/*
 * XREFs of Usbh_PCE_SoftDisconnect_Action @ 0x1C00369F0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C0002580 (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C001AE80 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002F39C (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_Disable @ 0x1C0034EE0 (UsbhPCE_Disable.c)
 *     UsbhPCE_SD_Resume @ 0x1C0035568 (UsbhPCE_SD_Resume.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035D2C (UsbhUnlockPcqWithTag.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003AA6C (UsbhSoftDisconnectPdo.c)
 */

void __fastcall Usbh_PCE_SoftDisconnect_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  KIRQL v12; // r8
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rax
  KIRQL v16; // r8
  KIRQL v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0;
  FdoExt(a1);
  v6 = (int)UsbhLockPcqWithTag(a1, a2, 8, &v17, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v7,
      0xDu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(unsigned __int16 *)(a2 + 4),
      a2);
  Log(a1, 512, 1597534256, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (int)v6 <= 11 )
  {
    if ( (_DWORD)v6 == 11 || (_DWORD)v6 == 1 )
      goto LABEL_22;
    if ( (int)v6 > 1 )
    {
      if ( (int)v6 > 4 )
      {
        if ( (_DWORD)v6 == 5 )
          goto LABEL_12;
        if ( (_DWORD)v6 != 6 )
        {
          if ( (_DWORD)v6 == 7 )
          {
            Log(a1, 512, 1597534257, v8, *(unsigned __int16 *)(a2 + 4));
            v12 = v17;
            v13 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 400) = 0;
            *(_DWORD *)(a2 + 12) = v14;
            *(_DWORD *)(v13 + a2 + 1384) = v14;
            UsbhUnlockPcqWithTag(a1, a2, v12);
            v11 = 20LL;
            goto LABEL_13;
          }
LABEL_12:
          Log(a1, 512, 1597534261, v8, *(unsigned __int16 *)(a2 + 4));
          UsbhFlushPortChangeQueue(a1, a2, v9, v10);
          UsbhUnlockPcqWithTag(a1, a2, v17);
          v11 = 23LL;
LABEL_13:
          UsbhSoftDisconnectPdo(a1, v11, a3);
          return;
        }
LABEL_22:
        Log(a1, 512, 1597534258, v8, *(unsigned __int16 *)(a2 + 4));
        UsbhUnlockPcqWithTag(a1, a2, v17);
        v11 = 21LL;
        goto LABEL_13;
      }
      goto LABEL_23;
    }
LABEL_21:
    v15 = *(unsigned int *)(a2 + 2400);
    v16 = v17;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v15 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag(a1, a2, v16);
    return;
  }
  if ( (int)v6 <= 13 )
    goto LABEL_12;
  if ( (_DWORD)v6 != 14 )
  {
    if ( (_DWORD)v6 == 15 )
      goto LABEL_22;
    if ( (int)v6 <= 17 )
      goto LABEL_12;
    if ( (_DWORD)v6 == 18 || (_DWORD)v6 == 20 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_23:
  Log(a1, 512, 1597534259, v8, *(unsigned __int16 *)(a2 + 4));
  UsbhUnlockPcqWithTag(a1, a2, v17);
  UsbhPCE_Disable(a1, *(_WORD *)(a2 + 4), a3);
  Log(a1, 512, 1597534260, a3, *(unsigned __int16 *)(a2 + 4));
  UsbhSoftDisconnectPdo(a1, 22LL, a3);
  UsbhPCE_SD_Resume(a1, a2, a3);
}
