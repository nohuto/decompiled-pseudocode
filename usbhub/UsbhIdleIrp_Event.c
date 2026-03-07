__int64 __fastcall UsbhIdleIrp_Event(ULONG_PTR a1, __int64 a2, IRP *a3, unsigned int a4, int a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  int IdleIrpState; // eax
  int v12; // r10d
  unsigned int v13; // ebx
  KIRQL NewIrql; // [rsp+68h] [rbp+20h] BYREF

  NewIrql = 0;
  Log(a1, 0x10000, 1936934230, (int)a4, (__int64)a3);
  v9 = PdoExt(a2);
  IdleIrpState = UsbhGetIdleIrpState(v10, a2, &NewIrql);
  v9[360] = a5;
  Log(a1, 0x10000, 1936934193, a2, IdleIrpState);
  switch ( v12 )
  {
    case 0:
      return (unsigned int)UsbhIdleIrp_NoIrp(a1, a2, a3, a4, 0, NewIrql);
    case 1:
      return (unsigned int)UsbhIdleIrp_WaitWorker(a1, a2, a3, a4, 1, NewIrql);
    case 2:
      return (unsigned int)UsbhIdleIrp_CB_Pending(a1, a2, a3, a4, 2, NewIrql);
    case 3:
      return (unsigned int)UsbhIdleIrp_CB_Canceled(a1, a2, (__int64)a3, a4, 3, NewIrql);
    case 4:
      return (unsigned int)UsbhIdleIrp_CB_Complete(a1, a2, (__int64)a3, a4, 4, NewIrql);
    case 5:
      return (unsigned int)UsbhIdleExIrp_IdleReady(a1, a2, (__int64)a3, a4, 5, NewIrql);
  }
  v13 = -1073741823;
  UsbhSetIdleIrpState((unsigned int)(v12 - 4), a2, a4, v12, NewIrql);
  return v13;
}
