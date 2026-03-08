/*
 * XREFs of PiQueryResourceRequirements @ 0x1406F6B60
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     PpIrpQueryResourceRequirements @ 0x1406F6D48 (PpIrpQueryResourceRequirements.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryResourceRequirements(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  ULONG *v4; // rbx
  unsigned int v5; // r14d
  ULONG DataSize; // esi
  int v7; // eax
  HANDLE v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID Data; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  Data = 0LL;
  ValueName = 0LL;
  KeyHandle = 0LL;
  v3 = PpIrpQueryResourceRequirements(v2, &Data);
  v4 = (ULONG *)Data;
  v5 = v3;
  if ( v3 < 0 )
    v4 = 0LL;
  Data = v4;
  if ( v4 )
    DataSize = *v4;
  else
    DataSize = 0;
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v7 = CmOpenDeviceRegKey(
           *(__int64 *)&PiPnpRtlCtx,
           *(_QWORD *)(a1 + 48),
           20,
           0,
           983103,
           v4 != 0LL,
           (__int64)&KeyHandle,
           0LL);
    v8 = KeyHandle;
    if ( v7 < 0 )
      v8 = 0LL;
    KeyHandle = v8;
    if ( v8 )
    {
      *(_DWORD *)&ValueName.Length = 2359330;
      ValueName.Buffer = (wchar_t *)L"BasicConfigVector";
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v4 = (ULONG *)Data;
      if ( Data )
      {
        ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
        ExAcquireFastMutex(&PiResourceListLock);
        *(_QWORD *)(a1 + 440) = v4;
        ExReleaseFastMutex(&PiResourceListLock);
        PipSetDevNodeFlags(a1, 512);
        v4 = 0LL;
      }
      else
      {
        ZwDeleteValueKey(KeyHandle, &ValueName);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
