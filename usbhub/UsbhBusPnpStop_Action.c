void __fastcall UsbhBusPnpStop_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  __int16 v6; // r9
  __int16 v7; // r13
  unsigned __int16 i; // bp
  int v9; // r10d
  _DWORD *v10; // rbx
  void *v11; // rcx
  void *v12; // rcx
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = FdoExt(a1);
  Log(a1, 2048, 1114862657, 0LL, 0LL);
  UsbhDisablePortIndicators(a1);
  Log(a1, 2048, 1346458929, 0LL, 0LL);
  v5 = *((_QWORD *)v4 + 382);
  v7 = v6 + 1;
  for ( i = v6 + 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); i += v7 )
  {
    v13 = 0;
    UsbhPCE_HW_Stop(a1, i, a2);
    UsbhQueryPortState(a1, i, (__int64)&v13, 0LL);
    Log(a1, 2048, 1937010756, v5, (unsigned __int16)v13);
    if ( v9 >= 0 && (v13 & 2) != 0 )
      UsbhDisablePort(a1);
    UsbhPCE_Close(a1, v5, a2);
    v5 += 2928LL;
  }
  Usbh_BusPnpStop_PdoEvent(a1, a2);
  v10 = FdoExt(a1);
  Log(a1, 4, 1212764791, a1, (int)v10[685]);
  UsbhDecrementHubIsrWorkerReference(a1);
  KeWaitForSingleObject(v10 + 686, Executive, 0, 0, 0LL);
  UsbhFreeTimerObject(a1, v4 + 680);
  UsbhFreeTimerObject(a1, v4 + 682);
  UsbhFreeTimerObject(a1, v4 + 692);
  UsbhFreeTimerObject(a1, v4 + 694);
  IoFreeIrp(*((PIRP *)v4 + 333));
  v11 = (void *)*((_QWORD *)v4 + 334);
  *((_QWORD *)v4 + 333) = 0LL;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v4 + 334) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v4 + 335);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v4 + 335) = 0LL;
  }
}
