__int64 __fastcall PiDevCfgResolveVariableKeyCopy(__int64 a1, void *a2, __int64 a3)
{
  int v5; // edi
  int v6; // ebx
  NTSTATUS RegistryValue; // eax
  unsigned int *v8; // r9
  HANDLE v9; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  P[0] = 0LL;
  v5 = 0;
  v6 = PiDevCfgResolveVariableKeyHandle(a1, a2, &Handle);
  if ( v6 < 0 )
    goto LABEL_12;
  RegistryValue = IopGetRegistryValue(a2, L"Delete", 0, P);
  v8 = (unsigned int *)P[0];
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryValue((_DWORD *)P[0]) )
    {
      v6 = -1073741823;
      goto LABEL_10;
    }
    if ( *(unsigned int *)((char *)v8 + v8[2]) )
      v5 = 0x100000;
  }
  else
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_10;
    v6 = 0;
  }
  v9 = Handle;
  *(_DWORD *)(a3 + 36) = 0;
  Handle = 0LL;
  *(_DWORD *)(a3 + 32) = v5 | 0x8000;
  *(_QWORD *)(a3 + 40) = v9;
LABEL_10:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
