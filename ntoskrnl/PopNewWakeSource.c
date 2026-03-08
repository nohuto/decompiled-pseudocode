/*
 * XREFs of PopNewWakeSource @ 0x140984544
 * Callers:
 *     PopHandleWakeSources @ 0x140A9DD6C (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x140A9E248 (PopProcessWakeSourceWork.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopNewWakeSource(int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(64LL, 112LL, 544040269LL);
  if ( result )
    *(_DWORD *)(result + 16) = a1;
  return result;
}
