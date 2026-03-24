/*
 * XREFs of IoReservedQueuesInitialize @ 0x1C000CE38
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 */

char __fastcall IoReservedQueuesInitialize(__int64 a1)
{
  int v1; // eax
  void **v3; // rbx
  void **v4; // rsi
  __int64 v5; // r9
  void *v6; // r8

  v1 = *(unsigned __int16 *)(a1 + 822);
  if ( (_WORD)v1 )
  {
    v3 = (void **)(a1 + 808);
    StorPortExtendedFunction(0LL, a1, (unsigned int)(32 * v1), 1701672526LL);
    v4 = (void **)(a1 + 800);
    StorPortExtendedFunction(0LL, a1, 32 * (unsigned int)*(unsigned __int16 *)(a1 + 822), 1701672526LL);
    v6 = *v3;
    if ( *v3 )
    {
      if ( *v4 )
      {
        NVMeZeroMemory(*v3, 32 * *(unsigned __int16 *)(a1 + 822));
        NVMeZeroMemory(*v4, 32 * *(unsigned __int16 *)(a1 + 822));
        return 1;
      }
      if ( v6 )
        StorPortExtendedFunction(1LL, a1, v6, v5);
    }
    if ( *v4 )
      StorPortExtendedFunction(1LL, a1, *v4, v5);
  }
  return 0;
}
