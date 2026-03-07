char __fastcall PnprIsProcessorDevice(PDEVICE_OBJECT Pdo, char a2, unsigned int *a3, void *a4)
{
  char v4; // bl
  unsigned int v7; // edi
  unsigned int Data; // [rsp+40h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-Ch] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+48h] [rbp-8h] BYREF
  ULONG Type; // [rsp+78h] [rbp+28h] BYREF

  v4 = 0;
  Data = 0;
  RequiredSize = 0;
  SymbolicLinkList = 0LL;
  Type = 0;
  if ( a2 )
  {
    if ( IoGetDeviceInterfaces(&GUID_DEVICE_PROCESSOR, Pdo, 0, &SymbolicLinkList) >= 0 )
    {
      if ( *SymbolicLinkList )
      {
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( IoGetDevicePropertyData(Pdo, &PROCESSOR_NUMBER_PKEY, 0, 0, 4u, &Data, &RequiredSize, &Type) >= 0
          && Type == 7 )
        {
          v7 = Data;
          if ( (int)HalGetProcessorIdByNtNumber(Data) >= 0 )
          {
            *a3 = v7;
            return 1;
          }
        }
      }
    }
  }
  else if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 4u, a4, &RequiredSize, &Type) >= 0
         && Type == 7 )
  {
    *a3 = -1;
    return 1;
  }
  return v4;
}
