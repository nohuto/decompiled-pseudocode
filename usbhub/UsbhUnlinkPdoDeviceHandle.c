void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rsi
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r13
  _DWORD *v11; // rbp
  int v12; // r10d
  int v13; // r10d
  int v14; // ecx
  int v15; // ecx
  __int64 *v16; // rbx
  _DWORD *v17; // rax

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  Log(a1, 256, 1970032708, 0LL, 0LL);
  Log(a1, v12, a3, a2, 0LL);
  v14 = v11[288];
  if ( v14 && (v15 = v14 - 1) != 0 )
  {
    if ( v15 == 1 )
    {
      v16 = (__int64 *)(v11 + 290);
      if ( (v11[355] & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *v16, 0LL, 0LL);
        v11[355] &= ~0x20000000u;
        v13 = 256;
      }
      v8 = *v16;
      *v16 = 0xFEFEFEFEFEFEFEFEuLL;
      v11[288] = 1;
      Log(a1, v13, 1970032690, 0LL, v8);
      v17 = FdoExt(a1);
      if ( *((_QWORD *)v17 + 559) )
        (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v17 + 559))(
          *((_QWORD *)v17 + 529),
          v8,
          a2,
          1212441712LL);
    }
  }
  else
  {
    Log(a1, v13, 1970032689, 0LL, (int)v11[288]);
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
