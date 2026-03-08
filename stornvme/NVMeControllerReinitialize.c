/*
 * XREFs of NVMeControllerReinitialize @ 0x1C001C9A0
 * Callers:
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C690 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C0010588 (NVMeQueuesReInit.c)
 */

char __fastcall NVMeControllerReinitialize(__int64 a1)
{
  char v2; // bl
  __int64 i; // rax
  __int64 v4; // rdx

  *(_DWORD *)(a1 + 32) &= ~0x10u;
  v2 = 1;
  NVMeQueuesReInit(a1);
  if ( (unsigned int)NVMeControllerInitPart1(a1, 0)
    || (unsigned int)NVMeControllerInitPart2(a1, 0, 1)
    || !NVMeControllerInitPart3(a1) )
  {
    return 0;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 232); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(a1 + 8 * i + 1952);
    if ( v4 )
      ++*(_DWORD *)(v4 + 44);
  }
  return v2;
}
