/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x1402B1DD4
 * Callers:
 *     IoSetDiskIoAttributionFromThread @ 0x14027F900 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x140554CF0 (IoSetIoAttributionIrp.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x140216ED8 (IopReferenceIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionFromProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = IopReferenceIoAttributionFromProcess(a2, 1, &v4);
  if ( (int)result >= 0 )
  {
    result = IopSetDiskIoAttributionExtension(a1, v4, KeGetCurrentThread(), 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
