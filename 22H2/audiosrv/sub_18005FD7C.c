/*
 * XREFs of sub_18005FD7C @ 0x18005FD7C
 * Callers:
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_18005F8F8 @ 0x18005F8F8 (sub_18005F8F8.c)
 *     sub_18006E450 @ 0x18006E450 (sub_18006E450.c)
 *     sub_1800D7D70 @ 0x1800D7D70 (sub_1800D7D70.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FFAD8 @ 0x1800FFAD8 (sub_1800FFAD8.c)
 *     sub_180134E68 @ 0x180134E68 (sub_180134E68.c)
 *     sub_180136310 @ 0x180136310 (sub_180136310.c)
 *     sub_18013698C @ 0x18013698C (sub_18013698C.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 */

_QWORD *__fastcall sub_18005FD7C(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rdi
  size_t v11; // rbx
  _QWORD *result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  if ( !a2 && a3 == -1LL )
  {
    sub_1800D8E60(retaddr, 3244LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h");
    __debugbreak();
  }
  v6 = a3;
  if ( a2 )
  {
    v7 = a3;
    v8 = a2;
    if ( a3 >= 0x7FFFFFFF )
      v7 = 0x7FFFFFFFLL;
    for ( ; v7; --v7 )
    {
      if ( !*(_WORD *)v8 )
        break;
      v8 += 2;
    }
    v6 = (v8 - a2) >> 1;
  }
  if ( a3 == -1LL )
    v3 = v6;
  v9 = CoTaskMemAlloc(2 * v3 + 2);
  v10 = v9;
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = 2 * v6;
      if ( v11 )
      {
        if ( 2 * v3 + 2 < v11 )
        {
          memset(v9, 0, 2 * v3 + 2);
          *(_DWORD *)o__errno(v13) = 34;
          o__invalid_parameter_noinfo(v14);
        }
        else
        {
          memcpy(v9, a2, v11);
        }
      }
      v10[v11 / 2] = 0;
    }
    else
    {
      *v9 = 0;
    }
    v10[v3] = 0;
  }
  result = a1;
  *a1 = v10;
  return result;
}
