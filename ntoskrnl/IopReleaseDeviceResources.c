/*
 * XREFs of IopReleaseDeviceResources @ 0x140866C4C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1409559A8 (PnpDisableDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     IopQueryDeviceResources @ 0x1406F6440 (IopQueryDeviceResources.c)
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IopReleaseDeviceResources(__int64 *a1, int a2)
{
  _DWORD *v2; // rsi
  __int64 result; // rax
  PVOID v6; // rbx
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v9)(__int64, __int64, PVOID); // rax
  __int64 v10; // rdx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  v2 = (_DWORD *)a1 + 99;
  ValueName = 0LL;
  if ( !a1[52] && (*v2 & 0x80u) == 0 )
    return 0LL;
  DataSize = 0;
  v6 = 0LL;
  Data = 0LL;
  if ( a2 && (*v2 & 1) == 0 )
  {
    if ( (int)IopQueryDeviceResources((_QWORD *)a1[4], 0, &Data, &DataSize) < 0 )
    {
      Data = 0LL;
      DataSize = 0;
    }
    else
    {
      v6 = Data;
    }
  }
  result = IopLegacyResourceAllocation(-1, (__int64)PnpDriverObject, a1[4], 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( a2 && (*v2 & 1) == 0 )
    {
      v7 = a1[6];
      KeyHandle = 0LL;
      if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v7, 20, 0, 983103, v6 != 0LL, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        v6 = Data;
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, DataSize);
        else
          ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        ZwClose(KeyHandle);
      }
      if ( v6 )
      {
        PipSetDevNodeFlags((__int64)a1, 64);
        v9 = (void (__fastcall *)(__int64, __int64, PVOID))IopAllocateBootResourcesRoutine;
        v10 = a1[4];
        a1[68] = (__int64)v6;
        v9(4LL, v10, v6);
      }
    }
    return 0LL;
  }
  return result;
}
