/*
 * XREFs of IopGetSetSpecificExtension @ 0x14023EA58
 * Callers:
 *     IopSetLockOperationProcess @ 0x14023ED48 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x14035E260 (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x1405552DC (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14055606C (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140700A20 (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x140756C40 (IopRetrieveTransactionParameters.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IoCopyDeviceObjectHint @ 0x140944190 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x14023FE5C (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14024F600 (IopAllocateFileObjectExtension.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rdi
  void *v13; // r8
  __int64 Pool2; // r8
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v15);
    v12 = v15[0];
    v13 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      Pool2 = ExAllocatePool2(64LL, v7, 1162243913LL);
      if ( !Pool2 )
        return 3221225626LL;
      if ( (int)IopSetTypeSpecificFoExtension(v12, a2, Pool2) < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        v13 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v13;
    if ( a6 )
      *a6 = v12;
    return 0LL;
  }
  return result;
}
