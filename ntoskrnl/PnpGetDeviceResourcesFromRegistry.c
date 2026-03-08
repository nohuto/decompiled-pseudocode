/*
 * XREFs of PnpGetDeviceResourcesFromRegistry @ 0x1406F67F8
 * Callers:
 *     IopQueryDeviceResources @ 0x1406F6440 (IopQueryDeviceResources.c)
 *     IopPnPDispatch @ 0x1407F7890 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     PnpReadDeviceConfiguration @ 0x140842528 (PnpReadDeviceConfiguration.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceResourcesFromRegistry(__int64 a1, int a2, char a3, void **a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  int RegistryValue; // ebx
  HANDLE v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int DeviceConfiguration; // eax
  const WCHAR *v17; // rdx
  __int64 v18; // rdx
  unsigned int *v19; // rdi
  unsigned int v20; // eax
  __int64 Pool2; // rax
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v5 = a5;
  *a4 = 0LL;
  Handle = 0LL;
  P[0] = 0LL;
  *v5 = 0;
  RegistryValue = 0;
  if ( a2 )
  {
    if ( a1 )
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v14 = 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v14 + 48),
                      20,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue < 0 )
      return (unsigned int)RegistryValue;
    if ( (a3 & 1) != 0 )
    {
      v17 = L"OverrideConfigVector";
    }
    else
    {
      if ( (a3 & 2) == 0 )
      {
LABEL_26:
        v10 = Handle;
        goto LABEL_12;
      }
      v17 = L"BasicConfigVector";
    }
    RegistryValue = IopGetRegistryValue(Handle, v17, 0, P);
    if ( RegistryValue >= 0 )
    {
      v19 = (unsigned int *)P[0];
      if ( *((_DWORD *)P[0] + 1) == 10 )
      {
        v20 = *((_DWORD *)P[0] + 3);
        if ( v20 )
        {
          Pool2 = ExAllocatePool2(256LL, v20, 1970499664LL);
          *a4 = (void *)Pool2;
          if ( Pool2 )
          {
            *v5 = v19[3];
            memmove(*a4, (char *)v19 + v19[2], v19[3]);
            if ( *((_DWORD *)*a4 + 1) == -1 )
              *(_QWORD *)((char *)*a4 + 4) = 1LL;
          }
          else
          {
            RegistryValue = -1073741584;
          }
        }
      }
      ExFreePoolWithTag(v19, 0);
    }
    goto LABEL_26;
  }
  if ( (a3 & 1) != 0 )
  {
    v18 = a1 ? *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) : 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v18 + 48),
                      19,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = PnpReadDeviceConfiguration(Handle, 1LL, a4, v5);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
        return (unsigned int)RegistryValue;
    }
  }
  v10 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v15 = 0LL;
    result = CmOpenDeviceRegKey(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(v15 + 48),
               20,
               0,
               131097,
               0,
               (__int64)&Handle,
               0LL);
    if ( (int)result < 0 )
      return result;
    DeviceConfiguration = PnpReadDeviceConfiguration(Handle, 2LL, a4, v5);
    v10 = Handle;
    RegistryValue = DeviceConfiguration;
    if ( DeviceConfiguration >= 0 )
      goto LABEL_12;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_11;
  if ( v10 )
  {
LABEL_10:
    v13 = PnpReadDeviceConfiguration(v10, 4LL, a4, v5);
    v10 = Handle;
    RegistryValue = v13;
LABEL_11:
    if ( !v10 )
      return (unsigned int)RegistryValue;
LABEL_12:
    ZwClose(v10);
    return (unsigned int)RegistryValue;
  }
  if ( a1 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v11 = 0LL;
  result = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v11 + 48), 20, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = Handle;
    goto LABEL_10;
  }
  return result;
}
