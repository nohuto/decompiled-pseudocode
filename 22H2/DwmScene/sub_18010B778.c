/*
 * XREFs of sub_18010B778 @ 0x18010B778
 * Callers:
 *     sub_180109E10 @ 0x180109E10 (sub_180109E10.c)
 * Callees:
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18010B778(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  size_t v4; // r15
  _QWORD *v5; // rdx
  const void **v6; // rdi
  size_t v8; // rcx
  __int64 i; // r8
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // r13
  _QWORD *j; // rbx
  _QWORD *v16; // rax
  const void *v17; // rdx
  unsigned __int64 v18; // r14
  const void *v19; // rcx
  size_t v20; // r8
  _QWORD *v21; // rdx

  v4 = a3[2];
  v5 = a3;
  v6 = (const void **)a3;
  if ( a3[3] >= 0x10uLL )
    v5 = (_QWORD *)*a3;
  v8 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v8 < v4; i = 0x100000001B3LL * (v10 ^ i) )
    v10 = *((unsigned __int8 *)v5 + v8++);
  v11 = a1[3];
  v12 = i & a1[6];
  v13 = (_QWORD *)a1[1];
  v14 = 2 * v12;
  for ( j = *(_QWORD **)(v11 + 16 * v12); ; j = (_QWORD *)*j )
  {
    if ( *(_QWORD **)(v11 + 8 * v14) == v13 )
      v16 = v13;
    else
      v16 = **(_QWORD ***)(v11 + 8 * v14 + 8);
    if ( j == v16 )
    {
      *a2 = v13;
      return a2;
    }
    v17 = v6;
    if ( (unsigned __int64)v6[3] >= 0x10 )
      v17 = *v6;
    v18 = j[5];
    v19 = j + 2;
    if ( v18 >= 0x10 )
      v19 = (const void *)j[2];
    v20 = j[4];
    if ( v20 == v4 && !memcmp(v19, v17, v20) )
      break;
  }
  v21 = j + 2;
  if ( v18 >= 0x10 )
    v21 = (_QWORD *)*v21;
  if ( (unsigned __int64)v6[3] >= 0x10 )
    v6 = (const void **)*v6;
  if ( memcmp(v6, v21, v4) )
    j = v13;
  *a2 = j;
  return a2;
}
