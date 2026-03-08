/*
 * XREFs of sub_140B31828 @ 0x140B31828
 * Callers:
 *     KeCheckedKernelInitialize @ 0x140B14B50 (KeCheckedKernelInitialize.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

__int64 sub_140B31828()
{
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  __int16 v2; // [rsp+8h] [rbp-10h]

  v1 = 0LL;
  v2 = 0;
  __lidt(&v1);
  return 0LL;
}
