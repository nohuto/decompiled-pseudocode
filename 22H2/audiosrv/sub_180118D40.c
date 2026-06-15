/*
 * XREFs of sub_180118D40 @ 0x180118D40
 * Callers:
 *     sub_18007C204 @ 0x18007C204 (sub_18007C204.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_180118D40(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_18006A148(v1);
  return result;
}
