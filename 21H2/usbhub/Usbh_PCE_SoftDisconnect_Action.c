/*
 * XREFs of Usbh_PCE_SoftDisconnect_Action @ 0x1C0035734
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C001D1A0 (UsbhLockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D610 (UsbhFlushPortChangeQueue.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002DFC0 (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_Disable @ 0x1C0033B7C (UsbhPCE_Disable.c)
 *     UsbhPCE_SD_Resume @ 0x1C0034204 (UsbhPCE_SD_Resume.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034A70 (UsbhUnlockPcqWithTag.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003975C (UsbhSoftDisconnectPdo.c)
 */

void __fastcall Usbh_PCE_SoftDisconnect_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  KIRQL v10; // r8
  __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // rax
  KIRQL v14; // r8
  KIRQL v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  FdoExt(a1);
  v6 = (int)UsbhLockPcqWithTag(a1, a2, 8, &v15, 0);
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
            v10 = v15;
            v11 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 400) = 0;
            *(_DWORD *)(a2 + 12) = v12;
            *(_DWORD *)(v11 + a2 + 1384) = v12;
            UsbhUnlockPcqWithTag(a1, a2, v10);
            v9 = 20LL;
            goto LABEL_13;
          }
LABEL_12:
          Log(a1, 512, 1597534261, v8, *(unsigned __int16 *)(a2 + 4));
          UsbhFlushPortChangeQueue(a1, a2);
          UsbhUnlockPcqWithTag(a1, a2, v15);
          v9 = 23LL;
LABEL_13:
          UsbhSoftDisconnectPdo(a1, v9, a3);
          return;
        }
LABEL_22:
        Log(a1, 512, 1597534258, v8, *(unsigned __int16 *)(a2 + 4));
        UsbhUnlockPcqWithTag(a1, a2, v15);
        v9 = 21LL;
        goto LABEL_13;
      }
      goto LABEL_23;
    }
LABEL_21:
    v13 = *(unsigned int *)(a2 + 2400);
    v14 = v15;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag(a1, a2, v14);
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
  UsbhUnlockPcqWithTag(a1, a2, v15);
  UsbhPCE_Disable(a1, *(_WORD *)(a2 + 4), a3);
  Log(a1, 512, 1597534260, a3, *(unsigned __int16 *)(a2 + 4));
  UsbhSoftDisconnectPdo(a1, 22LL, a3);
  UsbhPCE_SD_Resume(a1, a2, a3);
}
