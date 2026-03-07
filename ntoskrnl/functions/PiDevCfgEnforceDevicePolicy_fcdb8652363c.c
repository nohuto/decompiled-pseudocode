__int64 __fastcall PiDevCfgEnforceDevicePolicy(__int64 a1, __int64 a2, const wchar_t *a3)
{
  int v5; // esi
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  char v9; // r15
  unsigned int v10; // ebx
  int v11; // eax
  _WORD *v12; // rsi
  int v13; // eax
  wchar_t *v14; // r14
  const wchar_t *v15; // rdi
  __int64 v16; // rax
  const wchar_t *v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  wchar_t *v20; // r12
  int v21; // eax
  wchar_t *v22; // r13
  __int64 v23; // r12
  const wchar_t **v24; // r14
  const wchar_t *v25; // rsi
  wchar_t *v26; // r12
  char v27; // r14
  const wchar_t *v28; // rdi
  __int64 v29; // rax
  const wchar_t *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  wchar_t *v34; // r14
  int v35; // eax
  wchar_t *v36; // rsi
  const wchar_t *v37; // rdi
  __int64 v38; // rax
  const wchar_t *v39; // rdi
  __int64 v40; // rax
  PVOID v41; // rcx
  char v42; // al
  unsigned int v43; // eax
  char v44; // [rsp+28h] [rbp-79h]
  char v45; // [rsp+29h] [rbp-78h]
  char v46; // [rsp+2Ah] [rbp-77h]
  char v47; // [rsp+2Bh] [rbp-76h]
  char v48; // [rsp+2Ch] [rbp-75h]
  HANDLE Handle; // [rsp+30h] [rbp-71h] BYREF
  PVOID P; // [rsp+38h] [rbp-69h] BYREF
  BOOL v51; // [rsp+40h] [rbp-61h]
  __int64 v52; // [rsp+48h] [rbp-59h] BYREF
  const wchar_t *v53; // [rsp+50h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-49h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-41h] BYREF
  __int64 v56; // [rsp+68h] [rbp-39h] BYREF
  const wchar_t **v57; // [rsp+70h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-29h] BYREF
  wchar_t *v59; // [rsp+A8h] [rbp+7h] BYREF
  wchar_t *v60; // [rsp+B0h] [rbp+Fh] BYREF
  PVOID v61; // [rsp+B8h] [rbp+17h]
  char v64; // [rsp+120h] [rbp+7Fh] BYREF

  v52 = 8913030LL;
  Handle = 0LL;
  v53 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\DeviceInstall";
  P = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v52;
  Str1 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v64 = 0;
  v5 = 576;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !PnpBootMode )
    {
LABEL_3:
      v7 = 0;
      goto LABEL_4;
    }
    LODWORD(v52) = 6422624;
    v53 = L"\\Registry\\Machine\\System\\DriverDatabase\\Policies";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v52;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
    goto LABEL_3;
  LODWORD(v52) = 1703960;
  v53 = L"Restrictions";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v52;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_3;
  LOBYTE(v5) = 0;
  v9 = 0;
  v51 = v5;
  v44 = 0;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v48 = 0;
  v10 = 1;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"AllowDenyLayered", &v64) >= 0 )
    v51 = v64 != 0;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyRemovableDevices", &v64) >= 0
    && v64
    && (*(_BYTE *)(a1 + 560) & 0x10) != 0 )
  {
    v9 = 1;
  }
  v11 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceClasses", &P);
  v12 = P;
  if ( v11 < 0 )
    v12 = 0LL;
  P = v12;
  v13 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceClasses", &Str1);
  v14 = Str1;
  if ( v13 < 0 )
    v14 = 0LL;
  v61 = v14;
  if ( a3 )
  {
    if ( v12 )
    {
      v15 = v12;
      if ( *v12 )
      {
        while ( wcsicmp(v15, a3) )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v15[v16] );
          v15 += v16 + 1;
          if ( !*v15 )
            goto LABEL_33;
        }
        v44 = 1;
      }
    }
    else if ( !v14 )
    {
      goto LABEL_41;
    }
LABEL_33:
    if ( v14 )
    {
      v17 = v14;
      if ( *v14 )
      {
        while ( wcsicmp(v17, a3) )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( v17[v18] );
          v17 += v18 + 1;
          if ( !*v17 )
            goto LABEL_41;
        }
        v47 = 1;
        v9 = 1;
      }
    }
  }
LABEL_41:
  v19 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceIDs", &v56);
  v20 = (wchar_t *)v56;
  if ( v19 < 0 )
    v20 = 0LL;
  Str1 = v20;
  v21 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceIDs", &v57);
  v22 = (wchar_t *)v57;
  if ( v21 < 0 )
    v22 = 0LL;
  if ( v20 || v22 )
  {
    v23 = 2LL;
    v24 = (const wchar_t **)(a2 + 32);
    v56 = 2LL;
    v57 = (const wchar_t **)(a2 + 32);
    do
    {
      v25 = *v24;
      if ( *v24 && *v25 )
      {
        v26 = Str1;
        v27 = v45;
        do
        {
          if ( v26 )
          {
            if ( !v27 )
            {
              v28 = v26;
              if ( *v26 )
              {
                while ( wcsicmp(v28, v25) )
                {
                  v29 = -1LL;
                  do
                    ++v29;
                  while ( v28[v29] );
                  v28 += v29 + 1;
                  if ( !*v28 )
                    goto LABEL_60;
                }
                v27 = 1;
                v44 = 1;
              }
            }
          }
LABEL_60:
          if ( v22 )
          {
            if ( !v46 )
            {
              v30 = v22;
              if ( *v22 )
              {
                while ( wcsicmp(v30, v25) )
                {
                  v31 = -1LL;
                  do
                    ++v31;
                  while ( v30[v31] );
                  v30 += v31 + 1;
                  if ( !*v30 )
                    goto LABEL_69;
                }
                v46 = 1;
                v9 = 1;
              }
            }
          }
LABEL_69:
          v32 = -1LL;
          do
            ++v32;
          while ( v25[v32] );
          v25 += v32 + 1;
        }
        while ( *v25 );
        v23 = v56;
        v45 = v27;
        v24 = v57;
      }
      v24 += 2;
      --v23;
      v57 = v24;
      v56 = v23;
    }
    while ( v23 );
    v20 = Str1;
  }
  v33 = PiDevCfgQueryPolicyStringList(Handle, L"AllowInstanceIDs", &v59);
  v34 = v59;
  if ( v33 < 0 )
    v34 = 0LL;
  v35 = PiDevCfgQueryPolicyStringList(Handle, L"DenyInstanceIDs", &v60);
  v36 = v60;
  if ( v35 < 0 )
    v36 = 0LL;
  if ( v34 )
  {
    v37 = v34;
    if ( *v34 )
    {
      while ( wcsicmp(v37, *(const wchar_t **)(a2 + 8)) )
      {
        v38 = -1LL;
        do
          ++v38;
        while ( v37[v38] );
        v37 += v38 + 1;
        if ( !*v37 )
          goto LABEL_89;
      }
      v48 = 1;
      v44 = 1;
    }
  }
  else if ( !v36 )
  {
    goto LABEL_95;
  }
LABEL_89:
  if ( v36 )
  {
    v39 = v36;
    if ( *v36 )
    {
      while ( wcsicmp(v39, *(const wchar_t **)(a2 + 8)) )
      {
        v40 = -1LL;
        do
          ++v40;
        while ( v39[v40] );
        v39 += v40 + 1;
        if ( !*v39 )
          goto LABEL_95;
      }
      v42 = 1;
      goto LABEL_107;
    }
  }
LABEL_95:
  if ( v9 )
  {
    v42 = 0;
LABEL_107:
    if ( !v51 || !v44 )
    {
      v41 = P;
LABEL_120:
      v7 = -1073740959;
      goto LABEL_121;
    }
    if ( v42 )
    {
      v10 = 0;
    }
    else if ( !v46 )
    {
      v10 = 3 - (v47 != 0);
    }
    if ( v48 )
      v43 = 0;
    else
      v43 = 2 - (v45 != 0);
    v7 = v43 >= v10 ? 0xC0000361 : 0;
LABEL_118:
    v41 = P;
    goto LABEL_121;
  }
  if ( v44 || v51 || (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyUnspecified", &v64) < 0 || !v64 )
  {
    v7 = 0;
    goto LABEL_118;
  }
  v41 = P;
  if ( (a3 || !P) && (!PnpSetupInProgress || !PnpSetupUpgradeInProgress) )
    goto LABEL_120;
  v7 = 0;
LABEL_121:
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  if ( v61 )
    ExFreePoolWithTag(v61, 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
