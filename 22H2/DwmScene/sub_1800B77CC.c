/*
 * XREFs of sub_1800B77CC @ 0x1800B77CC
 * Callers:
 *     sub_1800B3EB8 @ 0x1800B3EB8 (sub_1800B3EB8.c)
 *     sub_1800B4B00 @ 0x1800B4B00 (sub_1800B4B00.c)
 * Callees:
 *     sub_1800B8EE4 @ 0x1800B8EE4 (sub_1800B8EE4.c)
 */

__int64 **__fastcall sub_1800B77CC(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 **result; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  for ( i = a2; i != a3; i += 2 )
  {
    v7 = i[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = i[1];
    }
    v8 = *i;
    v10[1] = v7;
    v10[0] = v8;
    if ( (unsigned __int8)sub_1800B8EE4(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
