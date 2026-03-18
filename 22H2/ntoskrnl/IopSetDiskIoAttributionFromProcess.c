/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x1402901D4
 * Callers:
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7B10 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x140557190 (IoSetIoAttributionIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x140290230 (IopSetDiskIoAttributionExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C0F78 (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IopSetDiskIoAttributionFromProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v5 = 0LL;
  LOBYTE(a2) = 1;
  result = IopReferenceIoAttributionFromProcess(v3, a2, &v5);
  if ( (int)result >= 0 )
  {
    result = IopSetDiskIoAttributionExtension(a1, v5, KeGetCurrentThread(), 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
