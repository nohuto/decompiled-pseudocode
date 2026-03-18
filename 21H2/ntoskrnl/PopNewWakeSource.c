/*
 * XREFs of PopNewWakeSource @ 0x14098F388
 * Callers:
 *     PopHandleWakeSources @ 0x140A51888 (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x140A6B1E0 (PopProcessWakeSourceWork.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopNewWakeSource(int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(64LL, 112LL, 544040269LL);
  if ( result )
    *(_DWORD *)(result + 16) = a1;
  return result;
}
