/*
 * XREFs of UsbhFdoScheduleDeferredPowerRequest @ 0x1C001E494
 * Callers:
 *     UsbhSet_D0_wQueued_Action @ 0x1C001E1B0 (UsbhSet_D0_wQueued_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x1C001E320 (UsbhQueueWorkItemEx.c)
 *     UsbhAllocWorkItem @ 0x1C001E570 (UsbhAllocWorkItem.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C001E7C8 (UsbhPoStartNextPowerIrp_Pdo.c)
 */

__int64 __fastcall UsbhFdoScheduleDeferredPowerRequest(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v9; // r9
  _DWORD *v10; // rax
  int v12; // [rsp+20h] [rbp-28h]

  v5 = 0LL;
  Log(a1, 16, 1935962161, a4, a3);
  if ( !v9 )
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 0x69775750u, v5);
  v10 = FdoExt(a1);
  v5 = UsbhAllocWorkItem(a1, a2, a3, 0, 1769428816, *((_BYTE *)v10 + 5268));
  if ( v5 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 184) + 3LL) |= 1u;
    UsbhPoStartNextPowerIrp_Pdo(a1, *(_QWORD *)(a3 + 48), a4, 1810LL, v12);
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 0x69775750u, v5);
  }
  return 3221225626LL;
}
