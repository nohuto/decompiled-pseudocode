/*
 * XREFs of IoReservedQueuesInitialize @ 0x1C0018434
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 */

char __fastcall IoReservedQueuesInitialize(__int64 a1)
{
  int v1; // eax
  void **v3; // rbx
  void **v4; // rsi
  __int64 v5; // r9
  void *v6; // r8

  v1 = *(unsigned __int16 *)(a1 + 838);
  if ( (_WORD)v1 )
  {
    v3 = (void **)(a1 + 824);
    StorPortExtendedFunction(0LL, a1, (unsigned int)(48 * v1), 1701672526LL);
    v4 = (void **)(a1 + 816);
    StorPortExtendedFunction(0LL, a1, 48 * (unsigned int)*(unsigned __int16 *)(a1 + 838), 1701672526LL);
    v6 = *v3;
    if ( *v3 )
    {
      if ( *v4 )
      {
        NVMeZeroMemory(*v3, 48 * *(unsigned __int16 *)(a1 + 838));
        NVMeZeroMemory(*v4, 48 * *(unsigned __int16 *)(a1 + 838));
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
