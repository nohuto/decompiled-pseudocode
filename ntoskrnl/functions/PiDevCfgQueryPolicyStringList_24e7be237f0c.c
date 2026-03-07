__int64 __fastcall PiDevCfgQueryPolicyStringList(void *a1, const WCHAR *a2, _QWORD *a3)
{
  ULONG v3; // r12d
  int v4; // edi
  void *v5; // r15
  int RegistryValue; // ebx
  unsigned int *v9; // rcx
  ULONG v10; // ebx
  unsigned int *Pool2; // rdi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  NTSTATUS i; // eax
  unsigned int v17; // r14d
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  ULONG Length[2]; // [rsp+38h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  __int128 v25; // [rsp+90h] [rbp-9h] BYREF
  __int128 v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+17h]

  v3 = 0;
  v23 = a3;
  KeyHandle = 0LL;
  *(_QWORD *)Length = 0LL;
  v27 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v4 = 0;
  v5 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, Length);
  if ( RegistryValue < 0 )
  {
    Pool2 = *(unsigned int **)Length;
LABEL_35:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    goto LABEL_37;
  }
  if ( PnpValidateRegistryDword(*(__int64 *)Length) )
    v4 = *(unsigned int *)((char *)v9 + v9[2]);
  ExFreePoolWithTag(v9, 0);
  if ( v4 != 1 )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, a2);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = NtQueryKey(KeyHandle, 4u, (unsigned __int64)&v25, 0x28u, &ResultLength);
    if ( RegistryValue >= 0 )
    {
      if ( !DWORD1(v26) )
      {
LABEL_5:
        RegistryValue = -1073741275;
        goto LABEL_37;
      }
      v10 = HIDWORD(v26) + 2 * (DWORD2(v26) + 12);
      Length[0] = v10;
      Pool2 = (unsigned int *)ExAllocatePool2(256LL, v10, 1667526736LL);
      if ( !Pool2 )
      {
        RegistryValue = -1073741670;
        goto LABEL_37;
      }
      v12 = DWORD1(v26) * HIDWORD(v26) + 2;
      while ( 2 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = (void *)ExAllocatePool2(256LL, v12, 1667526736LL);
        if ( v5 )
        {
          v13 = v12 >> 1;
          v14 = 0;
          v15 = 0;
          for ( i = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, Pool2, v10, &ResultLength);
                ;
                i = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, Pool2, Length[0], &ResultLength) )
          {
            RegistryValue = i;
            if ( i == -2147483622 )
              break;
            if ( i == -2147483643 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Length[0] = ResultLength;
              Pool2 = (unsigned int *)ExAllocatePool2(256LL, ResultLength, 1667526736LL);
              if ( !Pool2 )
              {
                RegistryValue = -1073741670;
LABEL_32:
                ExFreePoolWithTag(v5, 0);
                goto LABEL_35;
              }
              --v3;
            }
            else
            {
              if ( i < 0 )
                goto LABEL_32;
              if ( PnpValidateRegistryString(Pool2) )
              {
                RegistryValue = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)((char *)Pool2 + Pool2[2]));
                if ( RegistryValue < 0 )
                  goto LABEL_32;
                v14 += DestinationString.MaximumLength >> 1;
                if ( v13 > v14 )
                {
                  RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + v15, v13 - v15, DestinationString.Buffer, 0LL, 0LL, 0x900u);
                  v15 += DestinationString.MaximumLength >> 1;
                }
              }
            }
            ++v3;
          }
          v3 = 0;
          RegistryValue = 0;
          if ( !v14 )
          {
            RegistryValue = -1073741275;
            goto LABEL_32;
          }
          v17 = v14 + 1;
          if ( v13 < v17 )
          {
            v10 = Length[0];
            v12 = 2 * v17;
            continue;
          }
          *((_WORD *)v5 + v15) = 0;
          *v23 = v5;
        }
        else
        {
          RegistryValue = -1073741670;
        }
        goto LABEL_35;
      }
    }
  }
LABEL_37:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
