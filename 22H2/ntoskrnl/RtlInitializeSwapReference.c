/*
 * XREFs of RtlInitializeSwapReference @ 0x140810B80
 * Callers:
 *     CmFcManagerInitialize @ 0x140B3BCA0 (CmFcManagerInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSwapReference(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
