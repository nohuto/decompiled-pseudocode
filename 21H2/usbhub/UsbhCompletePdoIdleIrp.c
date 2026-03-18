/*
 * XREFs of UsbhCompletePdoIdleIrp @ 0x1C0001330
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001178 (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056374 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C0001418 (UsbhSetIdleIrpState.c)
 *     UsbhGetIdleIrpState @ 0x1C0001488 (UsbhGetIdleIrpState.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhIdleIrp_Event @ 0x1C00576A8 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhCompletePdoIdleIrp(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rsi
  struct _KEVENT *v7; // r14
  __int64 v8; // rcx
  int v9; // ecx
  int IdleIrpState; // r9d
  PIRP v11; // rsi
  __int64 result; // rax
  KIRQL NewIrql; // [rsp+20h] [rbp-28h]
  KIRQL v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0;
  v6 = PdoExt(a2);
  v7 = (struct _KEVENT *)(v6 + 2056);
  KeWaitForSingleObject((PVOID)(v6 + 2056), Executive, 0, 0, 0LL);
  IdleIrpState = UsbhGetIdleIrpState(v8, a2, &v14);
  NewIrql = v14;
  if ( IdleIrpState == 2 )
  {
    *(_DWORD *)(v6 + 1440) = a3;
    IdleIrpState = 3;
  }
  UsbhSetIdleIrpState(v9, a2, 9, IdleIrpState, NewIrql);
  v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 1464), 0LL);
  KeSetEvent(v7, 0, 0);
  result = Log(a1, 16, 1668303172, a3, (__int64)v11);
  if ( v11 )
    return UsbhIdleIrp_Event(a1, a2, v11, 5LL, a3);
  return result;
}
