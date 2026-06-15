/*
 * XREFs of sub_18005262C @ 0x18005262C
 * Callers:
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 *     sub_180065760 @ 0x180065760 (sub_180065760.c)
 *     sub_1800658CC @ 0x1800658CC (sub_1800658CC.c)
 *     sub_1800B4860 @ 0x1800B4860 (sub_1800B4860.c)
 *     sub_1800B4908 @ 0x1800B4908 (sub_1800B4908.c)
 *     sub_1800B817C @ 0x1800B817C (sub_1800B817C.c)
 *     sub_1800D19BC @ 0x1800D19BC (sub_1800D19BC.c)
 *     sub_1800FA18C @ 0x1800FA18C (sub_1800FA18C.c)
 *     sub_1801059D0 @ 0x1801059D0 (sub_1801059D0.c)
 *     sub_180105B20 @ 0x180105B20 (sub_180105B20.c)
 * Callees:
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 */

BOOL __fastcall sub_18005262C(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_180051B0C(v1);
  return result;
}
