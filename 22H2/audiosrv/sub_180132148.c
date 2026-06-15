/*
 * XREFs of sub_180132148 @ 0x180132148
 * Callers:
 *     sub_18012F620 @ 0x18012F620 (sub_18012F620.c)
 *     sub_18012FC64 @ 0x18012FC64 (sub_18012FC64.c)
 * Callees:
 *     <none>
 */

unsigned __int64 sub_180132148()
{
  BOOL inited; // eax
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF

  inited = InitOnceExecuteOnce(&stru_18019F918, (PINIT_ONCE_FN)sub_180053A00, 0LL, &Context);
  return (unsigned __int64)Context & -(__int64)inited;
}
