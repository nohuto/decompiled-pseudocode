/*
 * XREFs of WmipRegisterDevice @ 0x1407547F8
 * Callers:
 *     IoWMIRegistrationControl @ 0x140754720 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoGetAttachedDeviceReference @ 0x14022C380 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     WmipUnreferenceRegEntry @ 0x14032E244 (WmipUnreferenceRegEntry.c)
 *     ObReferenceObjectByPointer @ 0x14035F490 (ObReferenceObjectByPointer.c)
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x1403717C4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140371884 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140371974 (WmipDeregisterRegEntry.c)
 *     WmipQueueRegWork @ 0x140754964 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x140754A3C (WmipUpdateDeviceStackSize.c)
 *     WmipRegisterOrUpdateDS @ 0x140755F7C (WmipRegisterOrUpdateDS.c)
 */

__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  int v2; // ebx
  bool v3; // bp
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  NTSTATUS updated; // edi
  _QWORD *v9; // rax

  v2 = 0;
  v3 = 0;
  if ( a2 < 0 )
    v2 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v2 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = 0x40000000;
LABEL_12:
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    goto LABEL_13;
  }
  if ( (v2 & 0x10000000) != 0 )
  {
    updated = 0;
  }
  else
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(Object);
    LOBYTE(v7) = AttachedDeviceReference->StackSize + 1;
    WmipUpdateDeviceStackSize(v7);
    HalPutDmaAdapter((PADAPTER_OBJECT)AttachedDeviceReference);
    updated = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
  }
  if ( updated < 0 )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v9 = WmipAllocRegEntry((__int64)Object, v2);
    RegEntryByDevice = (char *)v9;
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)v9 + 12, 1u);
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( (v2 & 0x10000000) != 0 )
      {
        updated = WmipRegisterOrUpdateDS(RegEntryByDevice, 0LL);
        if ( updated < 0 )
          v3 = 1;
      }
      else
      {
        updated = WmipQueueRegWork(0LL, RegEntryByDevice);
        v3 = updated < 0;
      }
      goto LABEL_12;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = -1073741670;
  }
LABEL_13:
  if ( v3 )
    WmipDeregisterRegEntry(RegEntryByDevice);
  return (unsigned int)updated;
}
