/*
 * XREFs of sub_1800648C8 @ 0x1800648C8
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 * Callees:
 *     sub_180007EE0 @ 0x180007EE0 (sub_180007EE0.c)
 */

unsigned __int16 *__fastcall sub_1800648C8(
        __int64 *a1,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  unsigned __int16 *v13; // r10
  unsigned __int16 *result; // rax
  unsigned __int16 *v15; // rcx
  int v16; // r9d
  int v17; // edx

  v9 = sub_180007EE0(a2);
  v10 = *a1;
  HIDWORD(v12) = 0;
  v11 = v9;
  *a4 = v9;
  LODWORD(v12) = v9 % *((_DWORD *)a1 + 4);
  *a3 = v12;
  if ( v10 )
  {
    v13 = 0LL;
    result = *(unsigned __int16 **)(v10 + 8 * v12);
    *a5 = 0LL;
    while ( result )
    {
      if ( *((_DWORD *)result + 6) == v11 )
      {
        v15 = *(unsigned __int16 **)result;
        do
        {
          v16 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v15 - *(_QWORD *)result);
          v17 = *v15 - v16;
          if ( v17 )
            break;
          ++v15;
        }
        while ( v16 );
        if ( !v17 )
        {
          *a5 = v13;
          return result;
        }
      }
      v13 = result;
      result = (unsigned __int16 *)*((_QWORD *)result + 2);
    }
  }
  return 0LL;
}
