/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C02164D8
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C005F540 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C01F5A64 (DpiFdoInitializeFdo.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C0371108 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  _QWORD *v9; // rsi
  _DWORD *v10; // r14
  NTSTATUS DevicePropertyData; // eax
  unsigned int v12; // ebx
  void *Pool2; // rax
  void *Data; // rdi
  ULONG v15; // ebx
  NTSTATUS v16; // eax
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG Type; // [rsp+70h] [rbp+8h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h] BYREF

  Type = 0;
  LODWORD(Size) = 0;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, (PULONG)&Size, &Type);
          v12 = DevicePropertyData;
          if ( DevicePropertyData == -1073741789 )
          {
            if ( Type == 18 )
            {
              LODWORD(Size) = Size + 2;
              Pool2 = (void *)ExAllocatePool2(a4, (unsigned int)Size, 1953656900LL);
              Data = Pool2;
              if ( Pool2 )
              {
                v15 = Size;
                memset(Pool2, 0, (unsigned int)Size);
                v16 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, v15, Data, (PULONG)&Size, &Type);
                v12 = v16;
                if ( v16 < 0 )
                {
                  WdLogSingleEntry1(2LL, v16);
                  ExFreePoolWithTag(Data, 0);
                  return v12;
                }
                goto LABEL_9;
              }
              v19 = -1073741670LL;
              v12 = -1073741670;
              v20 = 6LL;
            }
            else
            {
              v12 = -1073741811;
              v19 = -1073741811LL;
              v20 = 2LL;
            }
            WdLogSingleEntry1(v20, v19);
            return v12;
          }
          WdLogSingleEntry1(2LL, DevicePropertyData);
          Data = 0LL;
          if ( (v12 & 0x80000000) != 0 )
            return v12;
LABEL_9:
          v17 = Size;
          *v9 = Data;
          *v10 = v17;
          return v12;
        }
      }
    }
  }
  return -1073741811LL;
}
