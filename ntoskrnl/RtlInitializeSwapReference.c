/*
 * XREFs of RtlInitializeSwapReference @ 0x140818A70
 * Callers:
 *     CmFcManagerInitialize @ 0x140B536B4 (CmFcManagerInitialize.c)
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
