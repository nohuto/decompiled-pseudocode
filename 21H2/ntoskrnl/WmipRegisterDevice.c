/*
 * XREFs of WmipRegisterDevice @ 0x1407551C8
 * Callers:
 *     IoWMIRegistrationControl @ 0x1407550F0 (IoWMIRegistrationControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     WmipUnreferenceRegEntry @ 0x140253174 (WmipUnreferenceRegEntry.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     IoGetAttachedDeviceReference @ 0x1402D1260 (IoGetAttachedDeviceReference.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     WmipFindRegEntryByDevice @ 0x140370B34 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140370BF4 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140370CE4 (WmipDeregisterRegEntry.c)
 *     WmipQueueRegWork @ 0x140755334 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14075540C (WmipUpdateDeviceStackSize.c)
 *     WmipRegisterOrUpdateDS @ 0x14075694C (WmipRegisterOrUpdateDS.c)
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
