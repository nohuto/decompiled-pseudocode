/*
 * XREFs of MiInitializeMemoryEvents @ 0x1408096D8
 * Callers:
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140394AB8 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403A9340 (MiUpdateAvailableEvents.c)
 *     MiCreateMemoryEvent @ 0x140809804 (MiCreateMemoryEvent.c)
 *     MiCreatePartitionNamespace @ 0x140809994 (MiCreatePartitionNamespace.c)
 *     MiCreateMemoryEventSD @ 0x14085B500 (MiCreateMemoryEventSD.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     MiInitializePagedPoolEvents @ 0x140B6FC8C (MiInitializePagedPoolEvents.c)
 */

_BOOL8 __fastcall MiInitializeMemoryEvents(unsigned __int16 *a1)
{
  int MemoryEventSD; // ebx
  __int64 v3; // rsi
  int v4; // r8d
  __int64 v5; // r10
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-10h]
  BOOLEAN DaclPresent; // [rsp+A8h] [rbp+38h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+B0h] [rbp+40h] BYREF
  PACL Dacl; // [rsp+B8h] [rbp+48h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v8 = 0LL;
  MemoryEventSD = MiCreateMemoryEventSD(SecurityDescriptor);
  if ( MemoryEventSD < 0 )
    goto LABEL_11;
  MemoryEventSD = MiCreatePartitionNamespace(a1);
  if ( MemoryEventSD < 0 )
    goto LABEL_11;
  v3 = 0LL;
  do
  {
    v4 = 0;
    if ( (unsigned int)v3 < 4 )
    {
      if ( a1 != MiSystemPartition )
        goto LABEL_7;
      LODWORD(v5) = 0;
    }
    else
    {
      v5 = *((_QWORD *)a1 + 32);
      LOBYTE(v4) = a1 == MiSystemPartition;
    }
    MemoryEventSD = MiCreateMemoryEvent(
                      (unsigned int)&MiMemoryEventNames[8 * v3],
                      v3,
                      v5,
                      (unsigned int)SecurityDescriptor,
                      v4,
                      (__int64)&a1[4 * (unsigned int)v3 + 136],
                      (__int64)&a1[4 * v3 + 180]);
    if ( MemoryEventSD < 0 )
      goto LABEL_11;
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 0xB );
  if ( a1 == MiSystemPartition )
  {
    MiInitializePagedPoolEvents();
    MiSignalNonPagedPoolWatchers();
  }
  MiUpdateAvailableEvents(a1);
  MemoryEventSD = 0;
LABEL_11:
  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent )
    ExFreePoolWithTag(Dacl, 0);
  return MemoryEventSD >= 0;
}
