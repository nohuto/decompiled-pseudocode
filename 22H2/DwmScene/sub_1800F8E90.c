/*
 * XREFs of sub_1800F8E90 @ 0x1800F8E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F8E90(__int64 a1, __int64 a2, double (__fastcall ***a3)(_QWORD))
{
  double v4; // xmm0_8

  v4 = (**a3)(a3);
  return sub_1800F8354((_QWORD *)a1, (float)(*(float *)(a1 + 44) - *(float *)(a1 + 40)) * v4 + *(float *)(a1 + 40));
}
