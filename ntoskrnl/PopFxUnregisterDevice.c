/*
 * XREFs of PopFxUnregisterDevice @ 0x140982DC4
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x1408803F8 (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x140981B50 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PoFxActivateComponent @ 0x140305CE0 (PoFxActivateComponent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopFxAssignDeviceToDevNode @ 0x140393BD4 (PopFxAssignDeviceToDevNode.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D0F90 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxComponentRelationsCleanup @ 0x140587474 (PopFxComponentRelationsCleanup.c)
 *     PopFxDestroyDeviceDpm @ 0x14058779C (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceRelationsCleanup @ 0x140587938 (PopFxDeviceRelationsCleanup.c)
 *     PopFxRemoveDevice @ 0x140589250 (PopFxRemoveDevice.c)
 *     PopPluginUnregisterDevice @ 0x14058A6DC (PopPluginUnregisterDevice.c)
 *     PopPlUnregisterDevice @ 0x14059F9D0 (PopPlUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14098C5AC (PopDiagTraceFxDeviceUnregistration.c)
 *     PopPepUnregisterDevice @ 0x14099A948 (PopPepUnregisterDevice.c)
 */

void __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  unsigned int i; // edi
  unsigned int v4; // edi
  struct _KEVENT *v5; // rdi
  unsigned int j; // r8d
  unsigned int k; // esi
  ULONG_PTR v8; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 824) & 1) == 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 828);
    for ( i = 0; i < v2; ++i )
    {
      PoFxActivateComponent(BugCheckParameter2, i, 2);
      v2 = *(_DWORD *)(BugCheckParameter2 + 828);
    }
    v4 = 0;
    if ( v2 )
    {
      do
        KeWaitForSingleObject(
          (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * v4++) + 104LL),
          Executive,
          0,
          0,
          0LL);
      while ( v4 < *(_DWORD *)(BugCheckParameter2 + 828) );
    }
  }
  v5 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v5 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2);
    PopDiagTraceFxDeviceUnregistration(v5);
    PopFxAssignDeviceToDevNode((__int64)v5, 0LL);
  }
  for ( j = 0; j < *(_DWORD *)(BugCheckParameter2 + 828); ++j )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * j) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, 0x20u);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 824), 0, 0) & 1) == 0 )
  {
    PopFxDeviceRelationsCleanup(BugCheckParameter2);
    for ( k = 0; k < *(_DWORD *)(BugCheckParameter2 + 828); ++k )
      PopFxComponentRelationsCleanup(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * k));
  }
  PopPepUnregisterDevice(*(PVOID *)(BugCheckParameter2 + 56));
  v8 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v8 )
    PopPluginUnregisterDevice(v8, *(_QWORD *)(BugCheckParameter2 + 72));
  PopPlUnregisterDevice(BugCheckParameter2);
  if ( v5 )
    KeSetEvent(v5 + 4, 0, 0);
  if ( (*(_DWORD *)(BugCheckParameter2 + 824) & 1) != 0 )
    PopFxDestroyDeviceDpm((__int64)v5, BugCheckParameter2);
}
