/*
 * XREFs of IopGetSetSpecificExtension @ 0x1402D7298
 * Callers:
 *     IopCheckInitiatorHint @ 0x14025FB40 (IopCheckInitiatorHint.c)
 *     IopSetLockOperationProcess @ 0x1402D7EBC (IopSetLockOperationProcess.c)
 *     IopGetSetStreamIdentifier @ 0x1405064A4 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140506FD8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x1406511B0 (IopRetrieveTransactionParameters.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140719B60 (IoCreateStreamFileObjectEx2.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071F81C (IopAllocateFoExtensionsOnCreate.c)
 *     IoCopyDeviceObjectHint @ 0x1408938C0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14022BB40 (IopAllocateFileObjectExtension.c)
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x1402D8B04 (IopVerifierExAllocatePool_0.c)
 *     IopSetTypeSpecificFoExtension @ 0x14030F6A4 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  size_t v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  void *Pool_0; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v16);
    v13 = v16[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      Pool_0 = (void *)IopVerifierExAllocatePool_0(v12, v7);
      v14 = Pool_0;
      if ( !Pool_0 )
        return 3221225626LL;
      memset(Pool_0, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v14;
    if ( a6 )
      *a6 = v13;
    return 0LL;
  }
  return result;
}
