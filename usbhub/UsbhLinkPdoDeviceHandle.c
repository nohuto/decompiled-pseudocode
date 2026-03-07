__int64 __fastcall UsbhLinkPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  KIRQL v8; // r12
  __int64 v9; // rax
  int v10; // ebx

  v6 = FdoExt(a1);
  v7 = PdoExt(a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3720));
  Log(a1, 256, 1819168836, a3, a2);
  v9 = FdoExt(a1);
  if ( *(_QWORD *)(v9 + 4464) )
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v9 + 4464))(
            *(_QWORD *)(v9 + 4232),
            a3,
            a2,
            1212441712LL);
  else
    v10 = -1073741822;
  Log(a1, 256, 1819168817, v10, a2);
  if ( v10 >= 0 )
  {
    *(_DWORD *)(v7 + 1152) = 2;
    *(_QWORD *)(v7 + 1160) = a3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3720), v8);
  return (unsigned int)v10;
}
