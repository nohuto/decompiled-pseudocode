/*
 * XREFs of PiDevCfgResolveVariableSwitchCase @ 0x14095F4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     PnpValidateRegistryString @ 0x1403C1BE8 (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x14095AA3C (PiDevCfgCopyVariableData.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableSwitchCase(__int64 a1, void *a2, __int64 a3)
{
  int RegistryValue; // ebx
  unsigned int *v7; // rdi
  int v8; // eax
  wchar_t *v9; // rdx
  NTSTATUS v10; // eax
  const WCHAR *v11; // rdx
  NTSTATUS v12; // eax
  PVOID P; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+38h] [rbp-28h] BYREF

  P = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Switch", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_19;
  v7 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_20;
  }
  v8 = PiDevCfgResolveVariable(a1, (const WCHAR *)((char *)v7 + v7[2]), &v15);
  RegistryValue = v8;
  if ( v8 < 0 )
    goto LABEL_5;
  ExFreePoolWithTag(v7, 0);
  P = 0LL;
  if ( *(_DWORD *)(v15 + 32) == 1 || *(_DWORD *)(v15 + 32) == 2 )
  {
LABEL_11:
    v9 = *(wchar_t **)(v15 + 40);
    if ( !v9 )
      goto LABEL_16;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v15 + 32) != 4 )
  {
    if ( *(_DWORD *)(v15 + 32) != 7 )
      goto LABEL_16;
    goto LABEL_11;
  }
  if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v15 + 40)) < 0 )
    goto LABEL_16;
  v9 = pszDest;
LABEL_12:
  v10 = IopGetRegistryValue(a2, v9, 0, &P);
  RegistryValue = v10;
  if ( v10 != -1073741772 )
  {
    if ( v10 >= 0 )
    {
      v7 = (unsigned int *)P;
      if ( !PnpValidateRegistryString(P) )
        goto LABEL_3;
      v11 = (const WCHAR *)((char *)v7 + v7[2]);
      if ( v11 )
        goto LABEL_27;
      goto LABEL_16;
    }
LABEL_19:
    v7 = (unsigned int *)P;
    goto LABEL_20;
  }
LABEL_16:
  v12 = IopGetRegistryValue(a2, L"Default", 0, &P);
  RegistryValue = v12;
  if ( v12 < 0 )
  {
    if ( v12 == -1073741772 )
      RegistryValue = -1073741823;
    goto LABEL_19;
  }
  v7 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_3;
  v11 = (const WCHAR *)((char *)v7 + v7[2]);
LABEL_27:
  v8 = PiDevCfgResolveVariable(a1, v11, &v16);
  RegistryValue = v8;
  if ( v8 >= 0 )
  {
    RegistryValue = PiDevCfgCopyVariableData(a3, v16);
    goto LABEL_20;
  }
LABEL_5:
  if ( v8 == -1073741772 )
    goto LABEL_3;
LABEL_20:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
