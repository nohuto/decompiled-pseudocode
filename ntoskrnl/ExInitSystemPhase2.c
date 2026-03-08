/*
 * XREFs of ExInitSystemPhase2 @ 0x140B64A84
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExpGetOriginalImageVersionRegistryValue @ 0x14084AC20 (ExpGetOriginalImageVersionRegistryValue.c)
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  ExpWatchProductTypeInitialization();
  *(_DWORD *)(MmWriteableSharedUserData + 736) = -1;
  BootApplicationPersistentDataProcess(0);
  ExpMicrocodeInitialization(2LL);
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  v1 = 0;
  ExpOriginalImageVersion = 0;
  result = ExpGetOriginalImageVersionRegistryValue(&v1);
  if ( (int)result >= 0 )
  {
    result = v1;
    ExpOriginalImageVersion = v1;
  }
  return result;
}
