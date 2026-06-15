/*
 * XREFs of sub_18010B080 @ 0x18010B080
 * Callers:
 *     sub_18010B9A0 @ 0x18010B9A0 (sub_18010B9A0.c)
 * Callees:
 *     sub_1800BC5E0 @ 0x1800BC5E0 (sub_1800BC5E0.c)
 */

char sub_18010B080(int a1, int a2, int a3, char a4, __int64 a5, ...)
{
  int v6; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( a4 )
  {
    sub_1800BC5E0(a1, a2, a3, retaddr, v6, retaddr, 3, -2147418113, a5, (__int64)va);
    __debugbreak();
  }
  return 0;
}
