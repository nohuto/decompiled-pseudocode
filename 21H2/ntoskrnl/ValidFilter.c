/*
 * XREFs of ValidFilter @ 0x14062301C
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x140623F70 (PiDqQueryValidateQueryData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     FilterEval @ 0x14062880C (FilterEval.c)
 *     _PnpValidatePropertyData @ 0x14062F0CC (_PnpValidatePropertyData.c)
 */

__int64 __fastcall ValidFilter(unsigned int a1, __int64 a2)
{
  int v4; // edi
  __int64 i; // rbx
  int v7; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v8[2]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD *v9; // [rsp+40h] [rbp-48h]
  _OWORD v10[3]; // [rsp+48h] [rbp-40h] BYREF

  v8[1] = 0;
  v7 = 0;
  v8[0] = 1;
  v9 = v10;
  memset(v10, 0, sizeof(v10));
  if ( (unsigned int)FilterEval((unsigned int)GetPropertyFromPropArray, (unsigned int)v8, a1, a2, (__int64)&v7) != -1073741811 )
  {
    v4 = 0;
    if ( !a1 )
      return 1LL;
    for ( i = a2 + 40;
          !*(_QWORD *)(i - 8)
       && (unsigned int)PnpValidatePropertyData(*(PSECURITY_DESCRIPTOR *)(i + 8), *(_DWORD *)(i + 4)) != 1;
          i += 56LL )
    {
      if ( ++v4 >= a1 )
        return 1LL;
    }
  }
  return 0LL;
}
