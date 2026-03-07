char __fastcall PipUpdateSetupInProgress(HANDLE KeyHandle)
{
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  char result; // al
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( IopGetRegistryValue(KeyHandle, L"SystemSetupInProgress", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  if ( IopGetRegistryValue(KeyHandle, L"OOBEInProgress", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  if ( v2 )
    goto LABEL_15;
  if ( !v3 || IopGetRegistryValue(KeyHandle, L"PnpSetupInProgress", 0, &P) < 0 )
    goto LABEL_13;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  ExFreePoolWithTag(P, 0);
  if ( v4 )
LABEL_15:
    result = 1;
  else
LABEL_13:
    result = 0;
  PnpSetupOOBEInProgress = v3 != 0;
  PnpSetupInProgress = result;
  return result;
}
