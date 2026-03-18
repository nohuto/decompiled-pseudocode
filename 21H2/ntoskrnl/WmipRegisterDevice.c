/*
 * XREFs of WmipRegisterDevice @ 0x1406C82F8
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipFindRegEntryByDevice @ 0x140248854 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140248914 (WmipAllocRegEntry.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1402E0164 (WmipUnreferenceRegEntry.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
 *     WmipQueueRegWork @ 0x1406C8478 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x1406C8550 (WmipUpdateDeviceStackSize.c)
 *     WmipRegisterOrUpdateDS @ 0x14075EE80 (WmipRegisterOrUpdateDS.c)
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
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
  }
  else
  {
    if ( (v2 & 0x10000000) != 0
      || (AttachedDeviceReference = IoGetAttachedDeviceReference(Object),
          LOBYTE(v7) = AttachedDeviceReference->StackSize + 1,
          WmipUpdateDeviceStackSize(v7),
          ObfDereferenceObject(AttachedDeviceReference),
          updated = ObReferenceObjectByPointer(Object, 0, 0LL, 0),
          updated >= 0) )
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
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
      else
      {
        KeReleaseMutex(&WmipSMMutex, 0);
        updated = -1073741670;
      }
    }
    else
    {
      KeReleaseMutex(&WmipSMMutex, 0);
    }
    if ( v3 )
      WmipDeregisterRegEntry(RegEntryByDevice);
  }
  return (unsigned int)updated;
}
