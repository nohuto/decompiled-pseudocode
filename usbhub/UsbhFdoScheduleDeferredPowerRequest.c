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
