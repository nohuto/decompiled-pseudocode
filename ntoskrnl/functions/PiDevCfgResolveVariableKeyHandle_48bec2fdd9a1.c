__int64 __fastcall PiDevCfgResolveVariableKeyHandle(_QWORD *a1, void *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v5; // r13
  NTSTATUS RegistryValue; // eax
  unsigned int *v8; // r14
  int DeviceRegProp; // ebx
  const wchar_t **v10; // rsi
  const wchar_t *v11; // rbx
  __int64 v12; // rcx
  wchar_t *v13; // rax
  wchar_t **v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  const WCHAR *v19; // rsi
  NTSTATUS v20; // eax
  const wchar_t *v21; // rdi
  wchar_t *v22; // rax
  unsigned int v23; // esi
  char *v24; // r15
  const wchar_t *v25; // r12
  unsigned int v26; // r13d
  wchar_t *v27; // rax
  wchar_t *v28; // rsi
  __int64 v29; // rdi
  int v30; // edi
  __int64 *v31; // r15
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdi
  const wchar_t *v35; // rsi
  __int64 v36; // rax
  bool v37; // zf
  unsigned int MaximumLength; // ebx
  wchar_t *v39; // r12
  unsigned int v40; // r13d
  unsigned int v41; // ebx
  const wchar_t *v42; // r15
  wchar_t *v43; // rax
  wchar_t *v44; // rsi
  __int64 v45; // rax
  const wchar_t *v46; // r9
  unsigned int v47; // edi
  __int64 v48; // rcx
  __int64 v49; // rdi
  const wchar_t *v50; // rsi
  __int64 v51; // rax
  UNICODE_STRING v52; // xmm0
  unsigned int v53; // edx
  _WORD *v54; // rcx
  HANDLE v55; // rax
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v63[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v65; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Pool2; // [rsp+C8h] [rbp-38h]
  HANDLE KeyHandle; // [rsp+D0h] [rbp-30h] BYREF
  const wchar_t *v68; // [rsp+D8h] [rbp-28h]
  _QWORD *v69; // [rsp+E0h] [rbp-20h]
  _QWORD *v70; // [rsp+E8h] [rbp-18h]
  _BYTE v71[76]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v72; // [rsp+13Ch] [rbp+3Ch]

  v3 = 0;
  v70 = a3;
  *a3 = 0LL;
  v5 = a3;
  v69 = a1;
  P = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v65 = 0LL;
  v62 = 0;
  v63[0] = 0;
  DestinationString = 0LL;
  Pool2 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"KeyRoot", 0, &P);
  v8 = (unsigned int *)P;
  DeviceRegProp = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryString(P) )
    {
LABEL_3:
      DeviceRegProp = -1073741823;
      goto LABEL_102;
    }
    v10 = (const wchar_t **)&off_140A776E0;
    v11 = (const wchar_t *)((char *)v8 + v8[2]);
    while ( wcsicmp(*v10, v11) )
    {
      ++v3;
      v10 += 4;
      if ( v3 >= 7 )
        goto LABEL_7;
    }
    v14 = &(&off_140A776E0)[4 * v3];
    if ( v14 )
    {
      v15 = *((unsigned int *)v14 + 4);
      v16 = *a1;
      if ( !(_DWORD)v15 )
      {
        v18 = *((_DWORD *)v14 + 3);
        if ( !v18 )
        {
          DeviceRegProp = -1073741595;
          goto LABEL_102;
        }
        if ( v18 == 7 )
        {
          v62 = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(v16 + 48),
                            0LL,
                            9,
                            (__int64)v63,
                            (__int64)v71,
                            (__int64)&v62,
                            0);
          if ( DeviceRegProp < 0 )
            goto LABEL_102;
          if ( v63[0] != 1 )
            goto LABEL_3;
          v72 = 0;
          v19 = (const WCHAR *)v71;
        }
        else
        {
          v19 = v14[3];
        }
        DeviceRegProp = PnpCtxOpenContextBaseKey(v12, *((_DWORD *)v14 + 3), v15, 0x20019u, (__int64)&Handle);
        if ( DeviceRegProp < 0 )
          goto LABEL_102;
        if ( v19 )
        {
          RtlInitUnicodeString(&DestinationString, v19);
          ObjectAttributes.RootDirectory = Handle;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          if ( DeviceRegProp < 0 )
            goto LABEL_102;
          ZwClose(Handle);
          Handle = KeyHandle;
        }
LABEL_30:
        ExFreePoolWithTag(v8, 0);
        P = 0LL;
        v20 = IopGetRegistryValue(a2, L"KeyPath", 0, &P);
        v8 = (unsigned int *)P;
        DeviceRegProp = v20;
        if ( v20 < 0 )
        {
          if ( v20 != -1073741772 )
            goto LABEL_102;
          v55 = Handle;
          DeviceRegProp = 0;
          v65 = Handle;
          Handle = 0LL;
        }
        else
        {
          if ( !PnpValidateRegistryString(P) )
            goto LABEL_3;
          v68 = (const wchar_t *)((char *)v8 + v8[2]);
          v21 = v68;
          v22 = wcschr(v68, 0x24u);
          if ( !v22 )
            goto LABEL_95;
          v23 = 0;
          do
          {
            ++v23;
            v22 = wcschr(v22 + 1, 0x24u);
          }
          while ( v22 );
          v59 = v23;
          if ( v23 )
          {
            Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * v23, 1667526736LL);
            v24 = (char *)Pool2;
            if ( !Pool2 )
              goto LABEL_37;
            v25 = v21;
            v26 = 0;
            if ( *v21 )
            {
              do
              {
                if ( v26 >= v23 )
                  break;
                v27 = wcschr(v25, 0x5Cu);
                v28 = v27;
                if ( v27 )
                {
                  *v27 = 0;
                  v29 = v27 - v25;
                }
                else
                {
                  v29 = -1LL;
                  do
                    ++v29;
                  while ( v25[v29] );
                }
                v30 = 2 * v29;
                if ( *v25 == 36 )
                {
                  v31 = (__int64 *)&v24[8 * v26];
                  v32 = PiDevCfgResolveVariable((__int64)v69, v25 + 1, v31);
                  DeviceRegProp = v32;
                  if ( v32 < 0 )
                  {
                    if ( v32 != -1073741772 )
                      goto LABEL_102;
                    DeviceRegProp = 0;
                  }
                  else
                  {
                    v33 = *v31;
                    if ( *(_DWORD *)(*v31 + 32) == 1 || *(_DWORD *)(*v31 + 32) == 2 )
                    {
                      v30 = *(_DWORD *)(v33 + 36) - 2;
                    }
                    else if ( *(_DWORD *)(*v31 + 32) == 7 )
                    {
                      v34 = -1LL;
                      do
                        ++v34;
                      while ( *(_WORD *)(*(_QWORD *)(v33 + 40) + 2 * v34) );
                      v30 = 2 * v34;
                    }
                  }
                  v24 = (char *)Pool2;
                  ++v26;
                }
                if ( (unsigned __int64)(v30 + (unsigned int)UnicodeString.MaximumLength) + 2 >= 0xFFFE )
                {
                  DeviceRegProp = -2147483643;
                  goto LABEL_102;
                }
                UnicodeString.MaximumLength += v30 + 2;
                if ( v28 )
                {
                  *v28 = 92;
                  v35 = v28 + 1;
                }
                else
                {
                  v36 = -1LL;
                  do
                    ++v36;
                  while ( v25[v36] );
                  v35 = &v25[v36];
                }
                v37 = *v35 == 0;
                v25 = v35;
                v23 = v59;
              }
              while ( !v37 );
              if ( DeviceRegProp < 0 )
                goto LABEL_102;
              v21 = v68;
            }
            MaximumLength = UnicodeString.MaximumLength;
            UnicodeString.Length = UnicodeString.MaximumLength - 2;
            v39 = (wchar_t *)ExAllocatePool2(256LL, UnicodeString.MaximumLength, 1667526736LL);
            UnicodeString.Buffer = v39;
            if ( !v39 )
            {
LABEL_37:
              DeviceRegProp = -1073741670;
              goto LABEL_102;
            }
            v40 = MaximumLength;
            v41 = 0;
            v42 = v21;
            LODWORD(P) = 0;
            if ( *v21 )
            {
              while ( v41 < v23 )
              {
                v43 = wcschr(v42, 0x5Cu);
                v44 = v43;
                if ( v43 )
                {
                  *v43 = 0;
                  v45 = v43 - v42;
                }
                else
                {
                  v45 = -1LL;
                  do
                    ++v45;
                  while ( v42[v45] );
                }
                v46 = v42;
                if ( v42 != v21 )
                {
                  if ( v40 <= 2 )
                    goto LABEL_3;
                  *v39++ = 92;
                  v40 -= 2;
                }
                v47 = 2 * v45;
                if ( *v42 == 36 )
                {
                  LODWORD(P) = v41 + 1;
                  v48 = *((_QWORD *)Pool2 + v41);
                  if ( v48 )
                  {
                    if ( *(_DWORD *)(v48 + 32) == 1 || *(_DWORD *)(v48 + 32) == 2 )
                    {
                      v46 = *(const wchar_t **)(v48 + 40);
                      v47 = *(_DWORD *)(v48 + 36) - 2;
                    }
                    else if ( *(_DWORD *)(v48 + 32) == 7 )
                    {
                      v46 = *(const wchar_t **)(v48 + 40);
                      v49 = -1LL;
                      do
                        ++v49;
                      while ( v46[v49] );
                      v47 = 2 * v49;
                    }
                  }
                }
                if ( v40 <= v47 )
                  goto LABEL_3;
                memmove(v39, v46, v47);
                v40 -= v47;
                v39 += (unsigned __int64)v47 >> 1;
                if ( v44 )
                {
                  *v44 = 92;
                  v50 = v44 + 1;
                }
                else
                {
                  v51 = -1LL;
                  do
                    ++v51;
                  while ( v42[v51] );
                  v50 = &v42[v51];
                }
                v42 = v50;
                if ( !*v50 )
                  break;
                v41 = (unsigned int)P;
                v21 = v68;
                v23 = v59;
              }
            }
            if ( v40 != 2 )
              goto LABEL_3;
            v52 = UnicodeString;
            v5 = v70;
            *v39 = 0;
            DestinationString = v52;
          }
          else
          {
LABEL_95:
            v53 = v8[3];
            v54 = (_WORD *)((char *)v8 + v8[2]);
            LODWORD(P) = 0;
            PnpRegSzToString(v54, v53, (int *)&P);
            DestinationString.Length = (unsigned __int16)P;
            DestinationString.MaximumLength = *((_WORD *)v8 + 6);
            DestinationString.Buffer = (wchar_t *)((char *)v8 + v8[2]);
          }
          ObjectAttributes.RootDirectory = Handle;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          v65 = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          DeviceRegProp = ZwOpenKey(&v65, 0x20019u, &ObjectAttributes);
          if ( DeviceRegProp < 0 )
            goto LABEL_102;
          v55 = v65;
        }
        *v5 = v55;
        goto LABEL_102;
      }
      v17 = CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v16 + 48),
              v15,
              0,
              131097,
              0,
              (__int64)&Handle,
              0LL);
LABEL_29:
      DeviceRegProp = v17;
      if ( v17 < 0 )
        goto LABEL_102;
      goto LABEL_30;
    }
LABEL_7:
    if ( !wcsicmp(v11, L"SYSTEM") )
    {
      *(_DWORD *)&DestinationString.Length = 3276848;
      v13 = L"\\Registry\\Machine\\SYSTEM";
LABEL_28:
      DestinationString.Buffer = v13;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      goto LABEL_29;
    }
    if ( !wcsicmp(v11, L"SOFTWARE") )
    {
      v13 = L"\\Registry\\Machine\\SOFTWARE";
LABEL_27:
      *(_DWORD *)&DestinationString.Length = 3538996;
      goto LABEL_28;
    }
    if ( !wcsicmp(v11, L"HARDWARE") )
    {
      v13 = L"\\Registry\\Machine\\HARDWARE";
      goto LABEL_27;
    }
    DeviceRegProp = -1073741772;
  }
LABEL_102:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
