/*
 * XREFs of PiDevCfgResolveVariableConstant @ 0x14095D110
 * Callers:
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpValidateRegistryValue @ 0x14056004C (PnpValidateRegistryValue.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableConstant(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  size_t v7; // rbp
  int v8; // r15d
  void *Pool2; // rax
  void *v10; // rsi
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Value", 0, &P);
  v5 = P;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryValue(P) )
    {
      v6 = -1073741823;
      goto LABEL_10;
    }
    v7 = (unsigned int)v5[3];
    v8 = v5[1];
    if ( (_DWORD)v7 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v7, 1667526736LL);
      v10 = Pool2;
      if ( !Pool2 )
      {
        v6 = -1073741670;
        goto LABEL_10;
      }
      memmove(Pool2, (char *)v5 + (unsigned int)v5[2], v7);
    }
    else
    {
      v10 = 0LL;
    }
    *(_DWORD *)(a3 + 32) = v8;
    *(_DWORD *)(a3 + 36) = v7;
    *(_QWORD *)(a3 + 40) = v10;
  }
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
