/*
 * XREFs of NVMeHwResetBus @ 0x1C00085C0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  result = NVMeControllerReset(a1);
  if ( result )
    ++*(_DWORD *)(a1 + 4456);
  else
    ++*(_DWORD *)(a1 + 4460);
  return result;
}
