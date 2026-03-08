/*
 * XREFs of IopQueryDeviceResources @ 0x1406F6440
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406F6080 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x1406F6240 (PiQueryAndAllocateBootResources.c)
 *     IopReleaseDeviceResources @ 0x140866C4C (IopReleaseDeviceResources.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406F67F8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x1406F69E8 (PnpDetermineResourceListSize.c)
 *     IopFilterResourceRequirementsCall @ 0x1406F6A4C (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x1406F6D48 (PpIrpQueryResourceRequirements.c)
 *     PnpFilterResourceRequirementsList @ 0x140803FE4 (PnpFilterResourceRequirementsList.c)
 *     PnpCmResourcesToIoResources @ 0x140804A84 (PnpCmResourcesToIoResources.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x14085A248 (PnpMergeFilteredResourceRequirementsList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDeviceResources(_QWORD *a1, int a2, PVOID *a3, ULONG *a4)
{
  _DWORD *v8; // rdi
  __int64 v9; // r12
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned int *v14; // rax
  _DWORD *v15; // rax
  void *v16; // rbx
  __int64 v17; // rdx
  void *Pool2; // rax
  PVOID v19; // rbx
  int v20; // r12d
  PVOID Data; // [rsp+20h] [rbp-79h]
  ULONG DataSize; // [rsp+28h] [rbp-71h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-59h] BYREF
  PVOID P; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v25; // [rsp+58h] [rbp-41h]
  void *Src; // [rsp+60h] [rbp-39h] BYREF
  _WORD v27[68]; // [rsp+68h] [rbp-31h] BYREF
  char v28; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+110h] [rbp+77h] BYREF
  PVOID v30; // [rsp+118h] [rbp+7Fh]

  *a3 = 0LL;
  KeyHandle = 0LL;
  Src = 0LL;
  P = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v8 = 0LL;
  *a4 = 0;
  memset(v27, 0, 0x48uLL);
  v9 = *(_QWORD *)(a1[39] + 40LL);
  *(_QWORD *)&ValueName.Length = v9;
  if ( a2 )
  {
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 0, 2, (_DWORD)a3, (__int64)&v28) != -1073741772 )
    {
      if ( *a3 )
      {
        v8 = (_DWORD *)PnpCmResourcesToIoResources(v13, *a3, 0LL);
        ExFreePoolWithTag(*a3, 0);
        if ( !v8 )
        {
          *a3 = 0LL;
          *a4 = 0;
          return 3221225626LL;
        }
        *a3 = v8;
        *a4 = *v8;
      }
LABEL_18:
      if ( (int)IopFilterResourceRequirementsCall(a1, v8, &Src) < 0 )
      {
        *a3 = v8;
        if ( v8 )
          *a4 = *v8;
        else
          *a4 = 0;
        return 0LL;
      }
      v16 = Src;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      KeyHandle = 0LL;
      if ( !Src )
      {
        *a4 = 0;
        *a3 = 0LL;
LABEL_28:
        if ( (int)CmOpenDeviceRegKey(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(v9 + 48),
                    19,
                    0,
                    131097,
                    1,
                    (__int64)&KeyHandle,
                    0LL) >= 0 )
        {
          ValueName.Buffer = L"FilteredConfigVector";
          DataSize = *a4;
          Data = *a3;
          *(_DWORD *)&ValueName.Length = 2752552;
          ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
          ZwClose(KeyHandle);
        }
        return 0LL;
      }
      v17 = *(unsigned int *)Src;
      *a4 = *(_DWORD *)Src;
      Pool2 = (void *)ExAllocatePool2(256LL, v17, 538996816LL);
      *a3 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v16, *a4);
        ExFreePoolWithTag(v16, 0);
        goto LABEL_28;
      }
      ExFreePoolWithTag(v16, 0);
      return 3221225626LL;
    }
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 1, 1, (unsigned int)&KeyHandle, (__int64)&v28) != -1073741772 )
    {
      v8 = KeyHandle;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v9 + 396) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 1, 2, (unsigned int)&KeyHandle, (__int64)&v28);
      if ( (_DWORD)result == -1073741772 )
      {
        result = 0LL;
        goto LABEL_16;
      }
    }
    else
    {
      v14 = *(unsigned int **)(v9 + 440);
      if ( v14 )
      {
        v15 = (_DWORD *)ExAllocatePool2(256LL, *v14, 538996816LL);
        v8 = v15;
        if ( !v15 )
          return 3221225495LL;
        memmove(v15, *(const void **)(v9 + 440), **(unsigned int **)(v9 + 440));
        goto LABEL_17;
      }
      result = PpIrpQueryResourceRequirements(a1, &KeyHandle);
      if ( (_DWORD)result == -1073741637 )
      {
        v8 = 0LL;
        goto LABEL_17;
      }
    }
    v8 = KeyHandle;
LABEL_16:
    if ( (int)result < 0 )
      return result;
LABEL_17:
    if ( (int)PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 0, 4, (unsigned int)&P, (__int64)&v28) >= 0 )
    {
      v19 = P;
      if ( !P || !*(_DWORD *)P || *((_DWORD *)P + 1) != 5 )
      {
        v20 = PnpFilterResourceRequirementsList(v8);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        if ( v20 < 0 )
        {
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          return (unsigned int)v20;
        }
        v9 = *(_QWORD *)&ValueName.Length;
        if ( (*(_DWORD *)(*(_QWORD *)&ValueName.Length + 396LL) & 1) != 0 )
        {
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          v8 = v30;
        }
        else
        {
          v11 = PnpMergeFilteredResourceRequirementsList(v30);
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          if ( v30 )
            ExFreePoolWithTag(v30, 0);
          if ( (v11 & 0x80000000) != 0 )
            return v11;
          v8 = v25;
        }
      }
    }
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v9 + 396) & 1) == 0 )
  {
    v27[0] = 2587;
    v10 = IopSynchronousCall(a1, (__int64)v27, -1073741637, 0LL, a3);
    v11 = v10;
    if ( v10 == -1073741637 )
    {
      *a3 = 0LL;
      v11 = 0;
    }
    else if ( v10 < 0 )
    {
      return v11;
    }
    *a4 = PnpDetermineResourceListSize(*a3);
    return v11;
  }
  result = PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 0, 7, (_DWORD)a3, (__int64)a4);
  if ( (_DWORD)result == -1073741772 )
    return 0LL;
  return result;
}
