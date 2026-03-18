/*
 * XREFs of NVMeHwInitialize @ 0x1C000E6D0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  char v1; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    if ( !(unsigned int)NVMeControllerInitPart2(a1, 1, 1) )
      return NVMeControllerInitPart3(a1);
  }
  else
  {
    v4 = 0;
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize, &v4);
    return v4;
  }
  return v1;
}
