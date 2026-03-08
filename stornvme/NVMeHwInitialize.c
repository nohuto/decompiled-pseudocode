/*
 * XREFs of NVMeHwInitialize @ 0x1C00083B0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  char v1; // bl
  __int64 v3; // rdx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    if ( !(unsigned int)NVMeControllerInitPart2(a1) )
    {
      LOBYTE(v3) = 1;
      return NVMeControllerInitPart3(a1, v3);
    }
  }
  else
  {
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
    return 0;
  }
  return v1;
}
