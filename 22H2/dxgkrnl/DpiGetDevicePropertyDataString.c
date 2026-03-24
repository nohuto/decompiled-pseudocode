/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C018AD24
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0053650 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C018DAEC (DpiFdoInitializeFdo.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C023AE4C (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _DWORD *a6)
{
  void *Data; // rdi
  _QWORD *v10; // rsi
  _DWORD *v11; // r14
  NTSTATUS DevicePropertyData; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v21; // eax
  int v22; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG Type; // [rsp+80h] [rbp+40h] BYREF
  size_t RequiredSize; // [rsp+90h] [rbp+50h] BYREF

  Type = 0;
  Data = 0LL;
  LODWORD(RequiredSize) = 0;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v10 = a5;
      if ( a5 )
      {
        v11 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, (PULONG)&RequiredSize, &Type);
          v15 = DevicePropertyData;
          if ( DevicePropertyData != -1073741789 )
            goto LABEL_13;
          if ( Type != 18 )
          {
            LODWORD(v15) = -1073741811;
            v24 = WdLogNewEntry5_WdError(v14, v13);
            *(_QWORD *)(v24 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v24);
            return (unsigned int)v15;
          }
          LODWORD(RequiredSize) = RequiredSize + 2;
          PoolWithTag = ExAllocatePoolWithTag(a4, (unsigned int)RequiredSize, 0x74727044u);
          Data = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v15) = -1073741670;
            v25 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
            *(_QWORD *)(v25 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v25);
            return (unsigned int)v15;
          }
          memset(PoolWithTag, 0, (unsigned int)RequiredSize);
          v21 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, RequiredSize, Data, (PULONG)&RequiredSize, &Type);
          v15 = v21;
          if ( v21 < 0 )
          {
LABEL_13:
            v26 = WdLogNewEntry5_WdError(v14, v13);
            *(_QWORD *)(v26 + 24) = v15;
            WdLogEvent5_WdError(v26);
            if ( (int)v15 < 0 )
            {
              if ( Data )
                ExFreePoolWithTag(Data, 0);
              return (unsigned int)v15;
            }
          }
          v22 = RequiredSize;
          *v10 = Data;
          *v11 = v22;
          return (unsigned int)v15;
        }
      }
    }
  }
  return -1073741811LL;
}
