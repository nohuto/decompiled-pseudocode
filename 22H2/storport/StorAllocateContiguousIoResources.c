/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C0006B8C
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011BC0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00151D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C00196B0 (RaidUnitAllocateResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019D9C (RaidPnPPassToMiniPort.c)
 *     RaInitializePower @ 0x1C002B27C (RaInitializePower.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2DC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortGetUncachedExtension @ 0x1C0039670 (StorPortGetUncachedExtension.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004BF64 (RaidUnitSubmitResetRequest.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004DC38 (RaAttemptHighWaterMarkIncrease.c)
 *     RaInitializeRaidResources @ 0x1C004E0B0 (RaInitializeRaidResources.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007843C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v13 = a2;
  v14 = 0LL;
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a3 + 4456);
  v6 = *(_QWORD *)(a3 + 728);
  v7 = *(_QWORD *)(a3 + 4464);
  v13 = 1;
  v8 = *(_QWORD *)(a3 + 4448);
  if ( !*(_QWORD *)(a3 + 5736) )
    v3 = a1;
  v12[0] = v4;
  v9 = *(_BYTE *)(a3 + 736) == 0;
  v15 = v7;
  if ( v9 || *(_DWORD *)(a3 + 756) != 3 )
    result = MmAllocateContiguousNodeMemory(v3, v4, v7, v8, 4, 0x80000000);
  else
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, int *, unsigned int, __int64 *))(*(_QWORD *)(v6 + 8) + 272LL))(
               v6,
               v12,
               &v15,
               v3,
               0,
               &v13,
               0x80000000,
               &v14);
  if ( result )
  {
    if ( *(_QWORD *)(a3 + 5736) )
    {
      v11 = result + v3 - 24LL;
      *(_QWORD *)(result + 816) = v11;
      *(_OWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(result + 816) = 0LL;
    }
    *(_QWORD *)(result + 24) = v14;
    *(_DWORD *)(result + 16) = v3;
  }
  return result;
}
