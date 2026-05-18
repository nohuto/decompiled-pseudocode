/*
 * XREFs of sub_180018458 @ 0x180018458
 * Callers:
 *     sub_18001CF70 @ 0x18001CF70 (sub_18001CF70.c)
 *     sub_1800B4334 @ 0x1800B4334 (sub_1800B4334.c)
 *     sub_1800B54CC @ 0x1800B54CC (sub_1800B54CC.c)
 *     sub_1800E66C0 @ 0x1800E66C0 (sub_1800E66C0.c)
 * Callees:
 *     sub_180019610 @ 0x180019610 (sub_180019610.c)
 */

__int64 **__fastcall sub_180018458(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
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
    if ( (unsigned __int8)sub_180019610(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
