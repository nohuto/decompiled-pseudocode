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
