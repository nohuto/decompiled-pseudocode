/*
 * XREFs of PcisuppIsPciDevice @ 0x1C0099F68
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 *     IrqArbCommitAllocation @ 0x1C009D040 (IrqArbCommitAllocation.c)
 *     IrqArbFindSuitableRange @ 0x1C009D270 (IrqArbFindSuitableRange.c)
 *     IrqArbGetNextAllocationRange @ 0x1C009D3B0 (IrqArbGetNextAllocationRange.c)
 *     IrqArbQueryConflict @ 0x1C009D820 (IrqArbQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     PcisuppGetProgConfigHeader @ 0x1C0099B50 (PcisuppGetProgConfigHeader.c)
 */

__int64 __fastcall PcisuppIsPciDevice(__int64 a1, bool *a2)
{
  int v4; // edi
  char v6; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v7[3]; // [rsp+61h] [rbp-18h] BYREF
  int v8; // [rsp+64h] [rbp-15h] BYREF
  int v9; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v10[64]; // [rsp+70h] [rbp-9h] BYREF

  v9 = 0;
  memset(v10, 0, sizeof(v10));
  v8 = 0;
  v6 = 0;
  v7[0] = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
  if ( InterruptRouting )
  {
    v9 = -1;
    v8 = -1;
    v4 = (*((__int64 (__fastcall **)(__int64, int *, int *, _QWORD, _QWORD, char *, _BYTE *, _QWORD, _QWORD, _QWORD, _QWORD))InterruptRouting
          + 4))(
           a1,
           &v9,
           &v8,
           0LL,
           0LL,
           &v6,
           v7,
           0LL,
           0LL,
           0LL,
           0LL);
  }
  else
  {
    v4 = -1073741823;
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  *a2 = v4 >= 0 && (v6 != 1 || v7[0] != 1 || (int)PcisuppGetProgConfigHeader(a1, (__int64)v10) < 0 || (v10[9] & 5) != 0);
  return 0LL;
}
