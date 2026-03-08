/*
 * XREFs of Usbh_PCE_HW_Stop_Action @ 0x1C0035A14
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C001FF20 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0036604 (UsbhiSignalResumeEvent.c)
 */

void __fastcall Usbh_PCE_HW_Stop_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  __int64 v20; // rax
  int v21; // r10d
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  int v25; // r10d
  int v26; // r10d
  int v27; // r10d
  int v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+28h] [rbp-20h]
  KIRQL v33; // [rsp+58h] [rbp+10h] BYREF

  v33 = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v32 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x22u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v32,
      a3);
  }
  v8 = UsbhLockPcqWithTag(a1, a2, 17, &v33, 0);
  Log(a1, 512, 825716784, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v10 > 10 )
  {
    v21 = v10 - 11;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_27;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_27;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_27;
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( !v28 )
              goto LABEL_28;
            if ( v28 != 2 )
              goto LABEL_25;
          }
        }
      }
      Log(a1, v11, 825716788, v9, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_29;
    }
LABEL_28:
    Log(a1, v11, 825716786, v9, *(unsigned __int16 *)(a2 + 4));
    UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
    v31 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 15;
    *(_DWORD *)(32 * v31 + a2 + 1384) = 15;
    UsbhFlushPortChangeQueue(a1, a2);
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    UsbhiSignalResumeEvent(a1, a2);
    goto LABEL_29;
  }
  if ( v10 == 10 )
    goto LABEL_27;
  v12 = v10 - 1;
  if ( !v12 )
    goto LABEL_28;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_28;
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_27:
    Log(a1, v11, 825716785, v9, *(unsigned __int16 *)(a2 + 4));
    v30 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 17;
    *(_DWORD *)(v30 + a2 + 1384) = 17;
    goto LABEL_29;
  }
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_15;
  v16 = v15 - 1;
  if ( !v16 )
    goto LABEL_15;
  v17 = v16 - 1;
  if ( !v17 )
    goto LABEL_28;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_28;
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_27;
  if ( v19 != 1 )
  {
LABEL_25:
    v29 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(v29 + a2 + 1384) = 19;
    goto LABEL_29;
  }
LABEL_15:
  Log(a1, v11, 825716787, v9, *(unsigned __int16 *)(a2 + 4));
  v20 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 16;
  *(_DWORD *)(v20 + a2 + 1384) = 16;
LABEL_29:
  UsbhUnlockPcqWithTag(a1, a2, v33);
}
