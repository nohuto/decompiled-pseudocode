/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C0061E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLq @ 0x1C0018F6C (WPP_RECORDER_SF_qLq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0019A3C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C006032C (ndisFreeSharedMemoryInternal.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  int v9; // edx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      0x15u,
      0x22u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      VirtualAddress);
  if ( KeGetCurrentIrql() )
  {
    ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x42u);
    *((NDIS_PHYSICAL_ADDRESS *)VirtualAddress + 8) = PhysicalAddress;
    *((_QWORD *)VirtualAddress + 4) = MiniportAdapterHandle;
    *((_DWORD *)VirtualAddress + 10) = Length;
    *((_BYTE *)VirtualAddress + 44) = Cached;
    *((_QWORD *)VirtualAddress + 6) = VirtualAddress;
    *(_QWORD *)VirtualAddress = 0LL;
    *((_QWORD *)VirtualAddress + 2) = ndisMQueuedFreeSharedHandler;
    *((_QWORD *)VirtualAddress + 3) = VirtualAddress;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)VirtualAddress, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisFreeSharedMemoryInternal(
      (ULONG_PTR)MiniportAdapterHandle,
      Length,
      Cached,
      (ULONG_PTR)VirtualAddress,
      PhysicalAddress.QuadPart);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0x15u,
      0x23u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      VirtualAddress);
}
