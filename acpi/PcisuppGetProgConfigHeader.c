/*
 * XREFs of PcisuppGetProgConfigHeader @ 0x1C0099B50
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     PcisuppIsPciDevice @ 0x1C0099F68 (PcisuppIsPciDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PcisuppGetProgConfigHeader(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v6; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+88h] [rbp+20h] BYREF

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
  if ( InterruptRouting )
  {
    v7 = -1;
    v6 = -1;
    v4 = (*((__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))InterruptRouting
          + 4))(
           a1,
           &v7,
           &v6,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL);
  }
  else
  {
    v7 = 0;
    v4 = -1073741275;
    v6 = 0;
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v4 >= 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int))(PmHalDispatchTable + 48))(
      0LL,
      v7,
      v6,
      a2,
      0,
      64);
  return (unsigned int)v4;
}
