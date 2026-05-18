/*
 * XREFs of sub_18000B420 @ 0x18000B420
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010B8B4 @ 0x18010B8B4 (sub_18010B8B4.c)
 */

int sub_18000B420()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  sub_18010B8B4(&unk_18021A550, &v2, &v1);
  return atexit(sub_180133760);
}
