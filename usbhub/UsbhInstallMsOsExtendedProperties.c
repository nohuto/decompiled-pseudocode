LONG __fastcall UsbhInstallMsOsExtendedProperties(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int *v3; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // r8
  int v7; // eax
  _WORD *Pool2; // rbx
  char v9; // r8
  char v10; // r8
  unsigned int v11; // esi
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0;
  v3 = 0LL;
  v5 = PdoExt((__int64)a2);
  v6 = v5;
  if ( (v5[358] & 0x400) != 0 )
  {
    v7 = v5[355];
    if ( (v7 & 0x800) == 0 )
    {
      v6[355] = v7 | 0x800;
      UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
      if ( !UsbhExtPropDescSemaphorePresent(a2) )
      {
        Pool2 = (_WORD *)ExAllocatePool2(64LL, 10LL, 1112885333LL);
        if ( Pool2 )
        {
          if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, 1, v9, 5, (__int64)Pool2, 10, &v13) >= 0
            && v13 == 10
            && *(_DWORD *)Pool2 >= 0xAu
            && Pool2[2] == 256
            && Pool2[3] == 5 )
          {
            if ( Pool2[4] )
            {
              v3 = (unsigned int *)ExAllocatePool2(64LL, *(unsigned int *)Pool2, 1112885333LL);
              if ( v3 )
              {
                if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, 1, v10, 5, (__int64)v3, *(_DWORD *)Pool2, &v13) >= 0 )
                {
                  v11 = v13;
                  if ( v13 == *(_DWORD *)Pool2
                    && RtlCompareMemory(Pool2, v3, 0xAuLL) == 10
                    && (int)USBD_ValidateExtendedPropertyDescriptor(v3, v11) >= 0 )
                  {
                    USBD_InstallExtPropDescSections(a2, (__int64)v3, *v3);
                  }
                }
              }
            }
          }
          ExFreePoolWithTag(Pool2, 0);
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
        }
      }
    }
  }
  return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
}
