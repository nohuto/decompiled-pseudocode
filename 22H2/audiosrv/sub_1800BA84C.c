/*
 * XREFs of sub_1800BA84C @ 0x1800BA84C
 * Callers:
 *     sub_1800BA5C8 @ 0x1800BA5C8 (sub_1800BA5C8.c)
 * Callees:
 *     vsnprintf @ 0x18006AB98 (vsnprintf.c)
 */

__int64 __fastcall sub_1800BA84C(char *a1, __int64 a2, unsigned __int64 *a3, const char *a4, va_list ArgList)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v5 = a2 - 1;
  v8 = 0;
  v9 = vsnprintf(a1, a2 - 1, a4, ArgList);
  if ( v9 < 0 || v9 > v5 )
  {
    v8 = -2147024774;
  }
  else if ( v9 != v5 )
  {
    v5 = v9;
    goto LABEL_7;
  }
  *(_WORD *)&a1[2 * v5] = 0;
LABEL_7:
  if ( a3 )
    *a3 = v5;
  return v8;
}
