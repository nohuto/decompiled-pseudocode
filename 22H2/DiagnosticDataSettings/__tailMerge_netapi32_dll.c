/*
 * XREFs of __tailMerge_netapi32_dll @ 0x10004BDC
 * Callers:
 *     __imp_load__NetGetAadJoinInformation@8 @ 0x10004BD2 (__imp_load__NetGetAadJoinInformation@8.c)
 *     __imp_load__NetFreeAadJoinInformation@4 @ 0x10004BED (__imp_load__NetFreeAadJoinInformation@4.c)
 * Callees:
 *     ___delayLoadHelper2@8 @ 0x10003E90 (___delayLoadHelper2@8.c)
 */

int __usercall _tailMerge_netapi32_dll@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int (__fastcall *Helper2)(int, int); // eax

  Helper2 = (int (__fastcall *)(int, int))__delayLoadHelper2((int)&_DELAY_IMPORT_DESCRIPTOR_NETAPI32_dll, a1);
  return Helper2(a3, a2);
}
