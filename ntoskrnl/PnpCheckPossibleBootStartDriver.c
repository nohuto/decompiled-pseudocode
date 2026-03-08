/*
 * XREFs of PnpCheckPossibleBootStartDriver @ 0x14084A740
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool __fastcall PnpCheckPossibleBootStartDriver(void *a1)
{
  bool v1; // bl
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  P = 0LL;
  if ( IopGetRegistryValue(a1, L"BootFlags", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  return v1;
}
