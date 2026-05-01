/*
 * XREFs of DPA_Create @ 0x1804F7580
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x1804F6C30 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}
