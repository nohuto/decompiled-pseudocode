/*
 * XREFs of EtwTraceUserDestroyHandle @ 0x1C0050604
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0150614 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserDestroyHandle(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&UserDestroyHandle, a3, a1, a2);
  return result;
}
