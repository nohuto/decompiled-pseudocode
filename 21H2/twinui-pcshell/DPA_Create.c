/*
 * XREFs of DPA_Create @ 0x1804F7910
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x1804F6FC0 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}
