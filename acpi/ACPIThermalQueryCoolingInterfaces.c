/*
 * XREFs of ACPIThermalQueryCoolingInterfaces @ 0x1C00416FC
 * Callers:
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003FAD8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C003FC80 (ACPIThermalActivateConstraint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIThermalQueryCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  signed int v3; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  __int64 v5; // r8
  __int64 Pool2; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  PIO_WORKITEM WorkItem; // rax
  KIRQL v10; // dl
  __int64 *v11; // rcx
  _DWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+48h] [rbp-30h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  DestinationString = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( *(_BYTE *)(a1 + 664) )
  {
    v3 = 259;
    if ( *(_QWORD *)(a1 + 656) )
      v3 = 0;
  }
  else
  {
    v3 = -1073741823;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  if ( v3 == 259 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(a1 + 784));
    if ( !AttachedDeviceReference )
      return (unsigned int)-1073741810;
    v13[0] = 0;
    v13[1] = 1;
    RtlInitUnicodeString(&DestinationString, L"ACPI Thermal Zones");
    if ( RootDeviceExtension )
      v5 = *(_QWORD *)(RootDeviceExtension + 768);
    else
      v5 = 0LL;
    v3 = PoCreateThermalRequest(&v16, AttachedDeviceReference, v5, v13, 0x80000000);
    if ( v3 >= 0 )
    {
      Pool2 = ExAllocatePool2(64LL, 72LL, 1416651585LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = (_QWORD *)(Pool2 + 16);
        *(_BYTE *)(v7 + 42) = 100;
        *(_QWORD *)(v7 + 32) = a1;
        v8[1] = v8;
        *v8 = v8;
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 768));
        *(_QWORD *)(v7 + 48) = WorkItem;
        if ( WorkItem )
        {
          *(_QWORD *)(v7 + 64) = v16;
          *(_BYTE *)(v7 + 40) = PoGetThermalRequestSupport(v16, 0LL);
          *(_BYTE *)(v7 + 41) = PoGetThermalRequestSupport(v16, 1LL);
          v10 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
          if ( *(_BYTE *)(a1 + 664) && !*(_QWORD *)(a1 + 656) )
          {
            *(_QWORD *)(a1 + 656) = v7;
            v11 = (__int64 *)qword_1C006EA98;
            if ( *(__int64 **)qword_1C006EA98 != &AcpiThermalClientList )
              __fastfail(3u);
            *(_QWORD *)v7 = &AcpiThermalClientList;
            *(_QWORD *)(v7 + 8) = v11;
            *v11 = v7;
            qword_1C006EA98 = v7;
            v7 = 0LL;
          }
          v3 = *(_QWORD *)(a1 + 656) == 0LL ? 0xC00000BB : 0;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v10);
          if ( !v7 )
            goto LABEL_24;
          PoDeleteThermalRequest(*(_QWORD *)(v7 + 64));
          IoFreeWorkItem(*(PIO_WORKITEM *)(v7 + 48));
        }
        else
        {
          v3 = -1073741670;
        }
        ExFreePoolWithTag((PVOID)v7, 0x54706341u);
      }
      else
      {
        v3 = -1073741670;
      }
    }
LABEL_24:
    ObfDereferenceObject(AttachedDeviceReference);
  }
  return (unsigned int)v3;
}
