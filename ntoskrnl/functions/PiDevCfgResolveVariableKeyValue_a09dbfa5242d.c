__int64 __fastcall PiDevCfgResolveVariableKeyValue(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 v3; // r13
  int v6; // ebx
  NTSTATUS RegistryValue; // eax
  unsigned int *v8; // rsi
  const WCHAR *v9; // rdi
  int v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  _DWORD *v13; // rdi
  size_t v14; // r15
  int v15; // r12d
  void *Pool2; // rax
  void *v17; // r14
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID v20; // [rsp+28h] [rbp-8h] BYREF
  PVOID P; // [rsp+88h] [rbp+58h] BYREF

  v20 = 0LL;
  v3 = a3;
  P = 0LL;
  Handle = 0LL;
  v6 = PiDevCfgResolveVariableKeyHandle(a1, a2, &Handle);
  if ( v6 < 0 )
    goto LABEL_31;
  RegistryValue = IopGetRegistryValue(a2, L"ValueName", 0, &v20);
  v8 = (unsigned int *)v20;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryString(v20) )
    {
      v6 = -1073741823;
      goto LABEL_29;
    }
    v9 = (const WCHAR *)((char *)v8 + v8[2]);
    if ( *v9 != 36 )
    {
LABEL_12:
      v11 = IopGetRegistryValue(Handle, v9, 0, &P);
      v6 = v11;
      if ( v11 < 0 )
      {
        if ( v11 != -1073741772 )
          goto LABEL_17;
        v12 = IopGetRegistryValue(a2, L"DefaultValue", 0, &P);
        v6 = v12;
        if ( v12 < 0 )
        {
          if ( v12 == -1073741772 )
          {
            v6 = 0;
            v13 = 0LL;
            goto LABEL_19;
          }
LABEL_17:
          v13 = P;
          goto LABEL_27;
        }
      }
      v13 = P;
LABEL_19:
      if ( v13 )
      {
        if ( !PnpValidateRegistryValue(v13) )
        {
          v6 = -1073741823;
          goto LABEL_27;
        }
        v14 = (unsigned int)v13[3];
        v15 = v13[1];
        Pool2 = (void *)ExAllocatePool2(256LL, v14, 1667526736LL);
        v17 = Pool2;
        if ( !Pool2 )
        {
          v6 = -1073741670;
          goto LABEL_27;
        }
        memmove(Pool2, (char *)v13 + (unsigned int)v13[2], v14);
        v3 = a3;
      }
      else
      {
        v15 = 0;
        LODWORD(v14) = 0;
        v17 = 0LL;
      }
      *(_DWORD *)(v3 + 32) = v15;
      *(_DWORD *)(v3 + 36) = v14;
      *(_QWORD *)(v3 + 40) = v17;
LABEL_27:
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      goto LABEL_29;
    }
    v20 = 0LL;
    v10 = PiDevCfgResolveVariable((__int64)a1, v9 + 1, (__int64 *)&v20);
    v6 = v10;
    if ( v10 >= 0 )
    {
      if ( *((_DWORD *)v20 + 8) == 1 || *((_DWORD *)v20 + 8) == 2 || *((_DWORD *)v20 + 8) == 7 )
        v9 = (const WCHAR *)*((_QWORD *)v20 + 5);
      goto LABEL_12;
    }
    if ( v10 == -1073741772 )
      goto LABEL_12;
  }
LABEL_29:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
