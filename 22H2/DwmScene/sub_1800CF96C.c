/*
 * XREFs of sub_1800CF96C @ 0x1800CF96C
 * Callers:
 *     sub_1800D0464 @ 0x1800D0464 (sub_1800D0464.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_1800CF698 @ 0x1800CF698 (sub_1800CF698.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800CF96C(__int64 **a1, __int64 a2, char a3, unsigned __int64 *a4, char a5)
{
  __int64 *v8; // r9
  __int64 *v9; // rdi
  __int64 v10; // rax
  char v11; // si
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 result; // rax
  __int64 *v15; // [rsp+30h] [rbp-18h] BYREF

  v8 = *a1;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *a4;
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = *(_QWORD *)(v10 + 32) >= v12;
      else
        v11 = v12 < *(_QWORD *)(v10 + 32);
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  try
  {
    v13 = v9;
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_1800CF698(a1, &v15, 1, v9, a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180022400(&v15);
      v13 = v15;
    }
    if ( v13[4] >= *a4 )
    {
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800CF698(a1, &v15, v11, v9, a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
