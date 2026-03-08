/*
 * XREFs of PcisuppGetBusSlotNumber @ 0x1C0099948
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     IrtClearDeletedMsiMappings @ 0x1C00A03EC (IrtClearDeletedMsiMappings.c)
 *     IrtRemapNewMsiAssignments @ 0x1C00A0538 (IrtRemapNewMsiAssignments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PcisuppGetBusSlotNumber(__int64 a1, int *a2, int *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v11; // [rsp+60h] [rbp-18h] BYREF
  int v12[3]; // [rsp+64h] [rbp-14h] BYREF

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
  if ( InterruptRouting )
  {
    v11 = -1;
    v12[0] = -1;
    v9 = (*((__int64 (__fastcall **)(__int64, int *, int *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64))InterruptRouting
          + 4))(
           a1,
           &v11,
           v12,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           a4,
           a5);
  }
  else
  {
    v12[0] = 0;
    v9 = -1073741275;
    v11 = 0;
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( a2 )
    *a2 = v11;
  *a3 = v12[0];
  return 0LL;
}
