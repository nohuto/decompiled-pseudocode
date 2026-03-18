/*
 * XREFs of UsbhBusSuspend_Action @ 0x1C001ED64
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C0010420 (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 *     UsbhPCE_Suspend @ 0x1C000F8DC (UsbhPCE_Suspend.c)
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

void __fastcall UsbhBusSuspend_Action(__int64 a1, int a2)
{
  _DWORD *v4; // rbp
  int v5; // r9d
  unsigned __int16 i; // bx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // [rsp+90h] [rbp+18h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0;
  v11 = 0;
  v4 = FdoExt(a1);
  Log(a1, 2048, 1114862963, 0LL, 0LL);
  if ( v4[1054] != v5 )
  {
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
    {
      v7 = UsbhQueryPortState(a1, i, (__int64)&v11, &v12);
      if ( v7 < 0 )
      {
        if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v7) )
        {
          UsbhException(a1, i, 78, 0, 0, v10, v12, usbfile_busm_c, 1198, 0);
          v4[1054] = 2;
        }
      }
      else if ( (v11 & 7) == 3 )
      {
        if ( (v8 = UsbhLatchPdo(a1, i, 0LL, 0x46644433u), (v9 = v8) != 0) && PdoExt(v8)[700]
          || (UsbhPCE_Suspend(a1, a2, i), v9) )
        {
          UsbhUnlatchPdo(a1, v9, 0LL, 0x46644433u);
        }
      }
    }
  }
}
