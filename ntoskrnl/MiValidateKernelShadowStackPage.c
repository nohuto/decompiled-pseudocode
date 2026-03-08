/*
 * XREFs of MiValidateKernelShadowStackPage @ 0x140642B48
 * Callers:
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140642840 (MiKernelShadowStackIdealForCaching.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x140642A9C (MiUpdateKernelShadowStackOwnerData.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiValidateKernelShadowStackPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 32);
  if ( (_DWORD)result != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3505uLL,
      BugCheckParameter2,
      0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
      *(unsigned __int16 *)(a2 + 32));
  return result;
}
