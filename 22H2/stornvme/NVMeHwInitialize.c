/*
 * XREFs of NVMeHwInitialize @ 0x1C000AD80
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  int v1; // ebx
  char result; // al

  v1 = a1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    result = NVMeControllerInitPart2(a1);
    if ( result )
      return NVMeControllerInitPart3(v1);
  }
  else
  {
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
    return 0;
  }
  return result;
}
