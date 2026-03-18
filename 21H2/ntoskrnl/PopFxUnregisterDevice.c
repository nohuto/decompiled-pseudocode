/*
 * XREFs of PopFxUnregisterDevice @ 0x14082310C
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x14080D7EC (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x140864C90 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140355058 (PopFxAddLogEntry.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403A7530 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopPlUnregisterDevice @ 0x1403B9260 (PopPlUnregisterDevice.c)
 *     PopFxComponentRelationsCleanup @ 0x1403B9594 (PopFxComponentRelationsCleanup.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BA794 (PopFxAssignDeviceToDevNode.c)
 *     PopFxRemoveDevice @ 0x1403BA838 (PopFxRemoveDevice.c)
 *     PopFxDestroyDeviceDpm @ 0x1403DCAD0 (PopFxDestroyDeviceDpm.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopFxDeviceRelationsCleanup @ 0x140419798 (PopFxDeviceRelationsCleanup.c)
 *     PopPluginUnregisterDevice @ 0x1405CEFE4 (PopPluginUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140823318 (PopPepUnregisterDevice.c)
 */

__int64 __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  unsigned int i; // edi
  unsigned int v4; // edi
  struct _KEVENT *v5; // rdi
  REGHANDLE v6; // rsi
  unsigned int j; // r8d
  unsigned int k; // esi
  ULONG_PTR v9; // rcx
  __int64 result; // rax
  struct _KEVENT *v11; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

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
    v11 = v5;
    PopFxAddLogEntry((__int64)v5, 0, 2, 0LL);
    if ( PopDiagHandleRegistered )
    {
      v6 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION) )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&v11;
        EtwWrite(v6, &POP_ETW_EVENT_DEVICE_UNREGISTRATION, 0LL, 1u, &UserData);
      }
    }
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
  v9 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v9 )
    PopPluginUnregisterDevice(v9, *(_QWORD *)(BugCheckParameter2 + 72));
  PopPlUnregisterDevice(BugCheckParameter2);
  if ( v5 )
    KeSetEvent(v5 + 4, 0, 0);
  result = *(unsigned int *)(BugCheckParameter2 + 824);
  if ( (result & 1) != 0 )
    return PopFxDestroyDeviceDpm((__int64)v5, BugCheckParameter2);
  return result;
}
