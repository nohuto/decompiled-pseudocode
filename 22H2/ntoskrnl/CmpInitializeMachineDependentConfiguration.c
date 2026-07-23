/*
 * XREFs of CmpInitializeMachineDependentConfiguration @ 0x140A58C04
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402E77D0 (HalpAcpiGetTable.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F9DC0 (ZwCreateKey.c)
 *     ZwOpenSection @ 0x1403FA100 (ZwOpenSection.c)
 *     ZwSetValueKey @ 0x1403FA620 (ZwSetValueKey.c)
 *     __report_rangecheckfailure @ 0x1404B63BC (__report_rangecheckfailure.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6CD0 (CmpAddProcessorConfigurationEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     CmpSetVideoBiosInformation @ 0x140A592D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A594A0 (CmpSetSystemBiosInformation.c)
 *     CmpInitializeSystemBiosInformation @ 0x140A8E8C0 (CmpInitializeSystemBiosInformation.c)
 */

NTSTATUS __fastcall CmpInitializeMachineDependentConfiguration(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rsi
  unsigned int v3; // r14d
  unsigned int v4; // ecx
  NTSTATUS result; // eax
  int v6; // edi
  __int64 v7; // rbx
  unsigned int v8; // ecx
  KPCR *Pcr; // rax
  unsigned int SecondLevelCacheSize; // r9d
  unsigned __int8 *v11; // rax
  int v12; // edx
  int v13; // ecx
  bool v14; // zf
  int v15; // ebx
  __int64 Table; // rax
  unsigned __int8 v17; // cl
  bool v18; // cf
  bool v19; // zf
  char v20; // cl
  bool v21; // al
  HANDLE Handle; // [rsp+40h] [rbp-F8h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-F0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-E8h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-C8h] BYREF
  int Data; // [rsp+A0h] [rbp-98h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-80h]
  UNICODE_STRING v31; // [rsp+C0h] [rbp-78h] BYREF
  UNICODE_STRING v32; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-58h] BYREF
  int v34; // [rsp+E8h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp-48h] BYREF

  v30 = a1;
  Disposition = 0;
  Handle = 0LL;
  v1 = 0LL;
  KeyHandle = 0LL;
  v2 = a1;
  SectionHandle = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v3 = 0;
  v34 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = 0;
  v32 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  DestinationString = 0LL;
  do
  {
    if ( v1 >= 0x54 )
      _report_rangecheckfailure();
    *(_WORD *)((char *)&CmpDeviceIndexTable + v1) = 0;
    ++v4;
    v1 += 2LL;
  }
  while ( v4 < 0x2A );
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
  {
    Data = 1;
    RtlInitUnicodeString(&DestinationString, L"PhysicalAddressExtension");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&v31, L"CentralProcessor");
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v31;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    ZwClose(KeyHandle);
    if ( Disposition == 1 )
    {
      CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      v6 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( 1 )
        {
          v7 = KiProcessorBlock[v6];
          v8 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v7 + 36)];
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v8 >> 6);
          Affinity.Mask = 1LL << (v8 & 0x3F);
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          CmpAddProcessorConfigurationEntry(v7, v6, (int)Handle);
          Pcr = KeGetPcr();
          if ( v6 )
          {
            SecondLevelCacheSize = Pcr->SecondLevelCacheSize;
            if ( *(_BYTE *)(v7 + 65) )
            {
              v11 = (unsigned __int8 *)(v7 + 34192);
              do
              {
                v12 = v11[KiProcessorBlock[0] - v7];
                v13 = *v11 - v12;
                if ( v13 )
                  break;
                ++v11;
              }
              while ( v12 );
              if ( v13 )
                CmProcessorMismatch |= 1u;
              if ( SecondLevelCacheSize != v3 )
                CmProcessorMismatch |= 4u;
              if ( *(_BYTE *)(v7 + 64) != *(_BYTE *)(KiProcessorBlock[0] + 64) )
              {
LABEL_42:
                CmProcessorMismatch |= 2u;
                goto LABEL_21;
              }
              v14 = *(_WORD *)(v7 + 66) == *(_WORD *)(KiProcessorBlock[0] + 66);
            }
            else
            {
              v14 = *(_BYTE *)(KiProcessorBlock[0] + 65) == 0;
            }
            if ( !v14 )
              goto LABEL_42;
          }
          else
          {
            v3 = Pcr->SecondLevelCacheSize;
          }
LABEL_21:
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          if ( ++v6 >= (unsigned int)KeNumberProcessors_0 )
          {
            v2 = v30;
            break;
          }
        }
      }
      if ( CmpConfigurationData )
      {
        ExFreePoolWithTag(CmpConfigurationData, 0);
        CmpConfigurationData = 0LL;
      }
    }
    RtlInitUnicodeString(&v32, L"\\Device\\PhysicalMemory");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v32;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes) >= 0 )
    {
      v15 = dword_140C197B0;
      if ( dword_140C197B0 == 1 )
        CmpSetSystemBiosInformation(v2, SectionHandle, Handle);
      else
        CmpInitializeSystemBiosInformation(v2);
      Table = HalpAcpiGetTable(v2, 1346584902, 0, 0);
      if ( Table )
      {
        v17 = *(_BYTE *)(Table + 8);
        v18 = v17 == 0;
        v19 = v17 == 1;
        if ( v17 > 1u )
        {
          LODWORD(v33) = *(unsigned __int16 *)(Table + 109);
          v34 = *(_DWORD *)(Table + 112);
          HIDWORD(v33) = *(unsigned __int8 *)(Table + 45);
          v20 = *(_BYTE *)(Table + 8);
          v18 = v20 == 0;
          v19 = v20 == 1;
        }
        v21 = !v18 && !v19;
      }
      else
      {
        v21 = 0;
      }
      if ( v21 )
      {
        RtlInitUnicodeString(&DestinationString, L"BootArchitecture");
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v33, 4u);
        RtlInitUnicodeString(&DestinationString, L"PreferredProfile");
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, (char *)&v33 + 4, 4u);
        RtlInitUnicodeString(&DestinationString, L"Capabilities");
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v34, 4u);
      }
      if ( v15 == 1 )
        CmpSetVideoBiosInformation(SectionHandle, Handle);
      ZwClose(SectionHandle);
    }
    ZwClose(Handle);
    return 0;
  }
  return result;
}
