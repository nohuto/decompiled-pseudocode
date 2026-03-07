__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  int v2; // ebx
  bool v3; // bp
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  int updated; // edi
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
          updated = WmipRegisterOrUpdateDS((__int64)RegEntryByDevice, 0);
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
