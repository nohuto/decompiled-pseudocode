__int64 __fastcall IopQuerySecureDeviceClassState(HANDLE KeyHandle, __int64 a2)
{
  PVOID v4; // r14
  NTSTATUS RegistryValue; // eax
  PVOID v6; // rbx
  int SecurityDescriptorInformation; // edi
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  void *v12; // rcx
  char *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  char *v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  char *v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  PVOID SecurityDescriptor[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  SecurityDescriptor[0] = 0LL;
  P = 0LL;
  v4 = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Security", 0, &P);
  v6 = P;
  SecurityDescriptorInformation = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue == -1073741772 )
    {
      SecurityDescriptorInformation = 0;
      goto LABEL_7;
    }
LABEL_27:
    v12 = *(void **)(a2 + 8);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    goto LABEL_23;
  }
  if ( *((_DWORD *)P + 1) != 3 )
  {
    SecurityDescriptorInformation = -1073741492;
    goto LABEL_27;
  }
  SecurityDescriptorInformation = SeCaptureSecurityDescriptor(
                                    (__int64)P + *((unsigned int *)P + 2),
                                    0,
                                    1,
                                    1,
                                    SecurityDescriptor);
  if ( SecurityDescriptorInformation < 0 )
  {
    v4 = SecurityDescriptor[0];
    goto LABEL_20;
  }
  ExFreePoolWithTag(v6, 0);
  v4 = SecurityDescriptor[0];
  v6 = 0LL;
  P = 0LL;
  if ( SecurityDescriptor[0] )
  {
    SecurityDescriptorInformation = IopGetSecurityDescriptorInformation(SecurityDescriptor[0]);
    if ( SecurityDescriptorInformation < 0 )
      goto LABEL_20;
    *(_DWORD *)a2 |= 2u;
    *(_QWORD *)(a2 + 8) = v4;
    v4 = 0LL;
  }
LABEL_7:
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    v8 = IopGetRegistryValue(KeyHandle, L"DeviceType", 0, &P);
    SecurityDescriptorInformation = v8;
    if ( v8 >= 0 )
    {
      v13 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v14 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 1u;
        v15 = *(_DWORD *)&v13[v14];
      }
      else
      {
        v15 = 0;
      }
      *(_DWORD *)(a2 + 4) = v15;
      ExFreePoolWithTag(v13, 0);
      v6 = 0LL;
      P = 0LL;
    }
    else
    {
      if ( v8 != -1073741772 )
        goto LABEL_19;
      v6 = P;
    }
  }
  if ( (*(_DWORD *)a2 & 4) == 0 )
  {
    v9 = IopGetRegistryValue(KeyHandle, L"DeviceCharacteristics", 0, &P);
    SecurityDescriptorInformation = v9;
    if ( v9 >= 0 )
    {
      v16 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v17 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 4u;
        v18 = *(_DWORD *)&v16[v17];
      }
      else
      {
        v18 = 0;
      }
      *(_DWORD *)(a2 + 16) = v18;
      ExFreePoolWithTag(v16, 0);
      v6 = 0LL;
      P = 0LL;
      goto LABEL_15;
    }
    if ( v9 == -1073741772 )
    {
      v6 = P;
      goto LABEL_15;
    }
LABEL_19:
    v6 = P;
    goto LABEL_20;
  }
LABEL_15:
  if ( (*(_DWORD *)a2 & 8) != 0 )
    goto LABEL_20;
  v10 = IopGetRegistryValue(KeyHandle, L"Exclusive", 0, &P);
  SecurityDescriptorInformation = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741772 )
      SecurityDescriptorInformation = 0;
    goto LABEL_19;
  }
  v19 = (char *)P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
  {
    v20 = *((unsigned int *)P + 2);
    *(_DWORD *)a2 |= 8u;
    v21 = *(_DWORD *)&v19[v20];
  }
  else
  {
    v21 = 0;
  }
  *(_DWORD *)(a2 + 20) = v21;
  ExFreePoolWithTag(v19, 0);
  v6 = 0LL;
LABEL_20:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( SecurityDescriptorInformation < 0 )
    goto LABEL_27;
LABEL_23:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)SecurityDescriptorInformation;
}
