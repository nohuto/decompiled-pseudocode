/*
 * XREFs of UsbhFdoScheduleDeferredPowerRequest @ 0x1C0001CA4
 * Callers:
 *     UsbhSet_D0_wQueued_Action @ 0x1C0001008 (UsbhSet_D0_wQueued_Action.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002868 (UsbhQueueWorkItemEx.c)
 *     UsbhAllocWorkItem @ 0x1C0003C40 (UsbhAllocWorkItem.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C000DEEC (UsbhPoStartNextPowerIrp_Pdo.c)
 */

__int64 __fastcall UsbhFdoScheduleDeferredPowerRequest(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v9; // r9
  __int64 v10; // rax

  v5 = 0LL;
  Log(a1, 16, 1935962161, a4, a3);
  if ( !v9 )
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  v10 = FdoExt(a1);
  v5 = UsbhAllocWorkItem(a1, a2, a3, 0, 1769428816, *(_BYTE *)(v10 + 5268));
  if ( v5 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 184) + 3LL) |= 1u;
    UsbhPoStartNextPowerIrp_Pdo(a1, *(_QWORD *)(a3 + 48), a4, 1810LL);
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  }
  return 3221225626LL;
}
