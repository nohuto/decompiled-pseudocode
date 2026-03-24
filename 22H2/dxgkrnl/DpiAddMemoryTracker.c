/*
 * XREFs of DpiAddMemoryTracker @ 0x1C0057690
 * Callers:
 *     ?DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C0042608 (-DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRI.c)
 *     DxgkAllocateContiguousMemoryCB @ 0x1C0042A40 (DxgkAllocateContiguousMemoryCB.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z @ 0x1C020E940 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0057754 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C0057930 (DpiMapMemoryTrackerToIoMmu.c)
 */

__int64 __fastcall DpiAddMemoryTracker(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 IoMmuContextFromDevice; // rsi
  KIRQL v5; // bp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx

  LODWORD(v3) = 0;
  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice();
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IoMmuContextFromDevice);
  if ( (*(_DWORD *)(IoMmuContextFromDevice + 136) & 1) != 0
    && (v6 = DpiMapMemoryTrackerToIoMmu(IoMmuContextFromDevice, a2), v3 = v6, v6 < 0) )
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = v3;
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v11 = *(_QWORD **)(IoMmuContextFromDevice + 128);
    if ( *v11 != IoMmuContextFromDevice + 120 )
      __fastfail(3u);
    *a2 = IoMmuContextFromDevice + 120;
    a2[1] = v11;
    *v11 = a2;
    *(_QWORD *)(IoMmuContextFromDevice + 128) = a2;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)IoMmuContextFromDevice, v5);
  return (unsigned int)v3;
}
