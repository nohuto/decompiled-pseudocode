BOOLEAN HalpIommuLogEarlyFault()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+50h] [rbp+17h]
  int v5; // [rsp+58h] [rbp+1Fh]
  int v6; // [rsp+5Ch] [rbp+23h]
  __int64 v7; // [rsp+60h] [rbp+27h]
  int v8; // [rsp+68h] [rbp+2Fh]
  int v9; // [rsp+6Ch] [rbp+33h]
  __int64 v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]

  v0 = HalpDiagnosticEventHandle;
  result = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT_INIT);
  if ( result )
  {
    EtwWriteEx(v0, &HAL_ETW_EVENT_IOMMU_FAULT_INIT, 0LL, 0, 0LL, 0LL, 0, 0LL);
    v2 = HalpDiagnosticEventHandle;
    result = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT);
    if ( result )
    {
      if ( HalpDiagnosticEventsRegistered )
      {
        if ( HalpIommuGlobalEventBuffer )
        {
          UserData.Reserved = 0;
          v6 = 0;
          v9 = 0;
          v12 = 0;
          v4 = HalpIommuGlobalEventBuffer + 8;
          v7 = HalpIommuGlobalEventBuffer + 16;
          v10 = HalpIommuGlobalEventBuffer + 24;
          UserData.Ptr = HalpIommuGlobalEventBuffer;
          UserData.Size = 8;
          v5 = 8;
          v8 = 4;
          v11 = 8;
          return EtwWriteEx(v2, &HAL_ETW_EVENT_IOMMU_FAULT, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        }
      }
    }
  }
  return result;
}
