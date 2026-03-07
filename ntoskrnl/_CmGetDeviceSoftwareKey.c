__int64 __fastcall CmGetDeviceSoftwareKey(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4, char a5)
{
  int DeviceRegProp; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // [rsp+40h] [rbp-71h] BYREF
  int v17; // [rsp+44h] [rbp-6Dh] BYREF
  HANDLE v18; // [rsp+48h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v21[24]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v22[76]; // [rsp+80h] [rbp-31h] BYREF
  __int16 v23; // [rsp+CCh] [rbp+1Bh]

  v16 = 88;
  v18 = 0LL;
  Handle = 0LL;
  v17 = 0;
  DestinationString = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0, 10, (__int64)&v17, (__int64)a3, (__int64)&v16, 0);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 240), 1u);
      v17 = 0;
      v16 = 88;
      DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0, 10, (__int64)&v17, (__int64)a3, (__int64)&v16, 0);
      if ( DeviceRegProp == -1073741275 )
      {
        v16 = 78;
        v17 = 0;
        v11 = CmGetDeviceRegProp(a1, a2, 0, 9, (__int64)&v17, (__int64)v22, (__int64)&v16, 0);
        DeviceRegProp = v11;
        if ( v11 == -1073741275 )
        {
          DeviceRegProp = -1073741772;
        }
        else if ( v11 >= 0 )
        {
          v23 = 0;
          DeviceRegProp = CmOpenInstallerClassRegKey(a1, (int)v22, v12, v13, 131103, 0, (__int64)&v18, 0LL);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = CmCreateOrdinalInstanceKey(a1, v18, v21);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = RtlStringCchPrintfExW(a3, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v22, v21);
              if ( DeviceRegProp >= 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a3);
                if ( DeviceRegProp >= 0 )
                {
                  DeviceRegProp = CmSetDeviceRegProp(
                                    a1,
                                    a2,
                                    0LL,
                                    0xAu,
                                    1u,
                                    (__int64)DestinationString.Buffer,
                                    DestinationString.MaximumLength,
                                    0);
                  if ( DeviceRegProp < 0 )
                  {
                    v14 = *(_QWORD *)(a1 + 224);
                    if ( v14 )
                      v15 = *(_QWORD *)(v14 + 8);
                    else
                      v15 = 0LL;
                    RegRtlDeleteKeyTransacted(v18, v21, v15);
                  }
                }
              }
            }
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 240));
      KeLeaveCriticalRegion();
      if ( Handle )
        ZwClose(Handle);
    }
    else
    {
      DeviceRegProp = -1073741772;
    }
  }
  if ( v18 )
    ZwClose(v18);
  return (unsigned int)DeviceRegProp;
}
