/*
 * XREFs of ValidateHwndMinuser @ 0x1C0115390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C011509C (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 */

struct _HEAD *__fastcall ValidateHwndMinuser(void *a1, int a2)
{
  return GetObjectFromMinUser(a1, a2 != 0);
}
