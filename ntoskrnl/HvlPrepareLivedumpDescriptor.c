/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x1405456B4
 * Callers:
 *     IopLiveDumpAllocateExtraBuffers @ 0x14094A230 (IopLiveDumpAllocateExtraBuffers.c)
 * Callees:
 *     HvlSetupLiveDumpBuffer @ 0x140548138 (HvlSetupLiveDumpBuffer.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14054A4B4 (VslSetupLiveDumpBufferInSk.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  int v10; // r8d

  v10 = BufferChunkSizeInPages;
  if ( VslVsmEnabled )
    return VslSetupLiveDumpBufferInSk(a1, a2, a3, BufferChunkSizeInPages, a5, a6, (__int64)a7, (__int64)a8, a9);
  *a7 = 0LL;
  *a8 = 0LL;
  return HvlSetupLiveDumpBuffer(a1, a2, v10, a5, a6, a9);
}
