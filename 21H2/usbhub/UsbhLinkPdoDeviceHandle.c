/*
 * XREFs of UsbhLinkPdoDeviceHandle @ 0x1C001BE4C
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCreateDevice @ 0x1C001BC70 (UsbhCreateDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhLinkPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v6; // r15
  _DWORD *v7; // rdi
  KIRQL v8; // r12
  _DWORD *v9; // rax
  int v10; // ebx

  v6 = (KSPIN_LOCK *)FdoExt(a1);
  v7 = PdoExt(a2);
  v8 = KeAcquireSpinLockRaiseToDpc(v6 + 465);
  Log(a1, 256, 1819168836, a3, a2);
  v9 = FdoExt(a1);
  if ( *((_QWORD *)v9 + 558) )
    v10 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v9 + 558))(
            *((_QWORD *)v9 + 529),
            a3,
            a2,
            1212441712LL);
  else
    v10 = -1073741822;
  Log(a1, 256, 1819168817, v10, a2);
  if ( v10 >= 0 )
  {
    v7[288] = 2;
    *((_QWORD *)v7 + 145) = a3;
  }
  KeReleaseSpinLock(v6 + 465, v8);
  return (unsigned int)v10;
}
