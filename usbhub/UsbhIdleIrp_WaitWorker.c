__int64 __fastcall UsbhIdleIrp_WaitWorker(ULONG_PTR a1, ULONG_PTR a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r14
  int v13; // r9d

  Log(a1, 0x10000, 1936938871, a2, (__int64)a3);
  v12 = PdoExt(v10);
  switch ( a4 )
  {
    case 1:
      if ( a3 )
      {
        UsbhSetIdleIrpState(v11, a2, 1, 1, NewIrql);
        v13 = -2147483631;
        return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
      }
      goto LABEL_15;
    case 2:
      UsbhSetIdleIrpState(v11, a2, 2, 2, NewIrql);
      return 259LL;
    case 3:
      UsbhSetIdleIrpState(v11, a2, 3, 0, NewIrql);
      return 0LL;
    case 5:
      if ( a3 )
      {
        UsbhSetIdleIrpState(v11, a2, 5, 0, NewIrql);
        v13 = v12[360];
        return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
      }
      goto LABEL_15;
    case 6:
      if ( a3 )
      {
        UsbhSetIdleIrpState(v11, a2, 6, 0, NewIrql);
        v13 = -1073741536;
        return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
      }
LABEL_15:
      UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( !a3 )
    goto LABEL_15;
  UsbhSetIdleIrpState(v11, a2, a4, a5, NewIrql);
  v13 = -1073741823;
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
}
