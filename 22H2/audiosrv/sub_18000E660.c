/*
 * XREFs of sub_18000E660 @ 0x18000E660
 * Callers:
 *     sub_18000E110 @ 0x18000E110 (sub_18000E110.c)
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 *     sub_180065CE0 @ 0x180065CE0 (sub_180065CE0.c)
 *     sub_1800B515C @ 0x1800B515C (sub_1800B515C.c)
 *     sub_1800BC5EC @ 0x1800BC5EC (sub_1800BC5EC.c)
 *     sub_180113DA4 @ 0x180113DA4 (sub_180113DA4.c)
 *     sub_180114510 @ 0x180114510 (sub_180114510.c)
 *     sub_180132B98 @ 0x180132B98 (sub_180132B98.c)
 *     sub_180134E68 @ 0x180134E68 (sub_180134E68.c)
 * Callees:
 *     vsnprintf @ 0x18006AB98 (vsnprintf.c)
 */

__int64 sub_18000E660(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned int v3; // edi
  int v5; // r9d
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 result; // rax
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v3 = 0;
  v5 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    result = (unsigned int)v5;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v6 = a2 - 1;
    v7 = vsnprintf(a1, a2 - 1, a3, ArgList);
    if ( v7 < 0 || v7 > v6 )
    {
      *(_WORD *)&a1[2 * v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      *(_WORD *)&a1[2 * v6] = 0;
    }
    return v3;
  }
  return result;
}
