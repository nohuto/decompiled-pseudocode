/*
 * XREFs of Usbh_PCE_ResumeTimeout_Action @ 0x1C0035DD8
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C001FF20 (UsbhLockPcqWithTag.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0036604 (UsbhiSignalResumeEvent.c)
 */

void __fastcall Usbh_PCE_ResumeTimeout_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  LOBYTE(v9) = 0;
  FdoExt(a1);
  v5 = (int)UsbhLockPcqWithTag(a1, a2, 14, (KIRQL *)&v9, 0);
  Log(a1, 512, 825520176, v5, *(unsigned __int16 *)(a2 + 4));
  Log(a1, 512, 825520177, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (_DWORD)v5 == 1 )
  {
    Log(a1, 512, 825520178, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 400) != 5 )
    {
      Log(a1, 512, 825520179, 0LL, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2);
      UsbhiSignalResumeEvent(a1, a2);
    }
    Log(a1, 512, 825520180, 0LL, *(unsigned __int16 *)(a2 + 4));
    v8 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v8 + a2 + 1384) = 1;
  }
  else
  {
    if ( (_DWORD)v5 == 3 || (_DWORD)v5 == 4 || (_DWORD)v5 == 14 )
    {
      if ( *(_BYTE *)(a2 + 2840) )
      {
        *(_BYTE *)(a2 + 2838) = 1;
        UsbhiSignalResumeEvent(a1, a2);
      }
      Log(a1, 512, 825520181, v5, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 0;
    }
    else
    {
      Log(a1, 512, 825520182, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2);
      UsbhiSignalResumeEvent(a1, a2);
    }
    v7 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v5;
    *(_DWORD *)(v7 + a2 + 1384) = v5;
  }
  UsbhUnlockPcqWithTag(a1, a2, v9);
}
