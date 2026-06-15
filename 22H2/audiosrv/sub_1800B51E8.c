/*
 * XREFs of sub_1800B51E8 @ 0x1800B51E8
 * Callers:
 *     sub_1800B55D1 @ 0x1800B55D1 (sub_1800B55D1.c)
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B51E8(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  int v4; // eax
  int v5; // ecx
  __int64 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h]

  result = qword_18019F9C8();
  if ( (int)result >= 0 )
    goto LABEL_14;
  while ( a1 )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v8 )
    {
      v6 = &v7;
      v3 = v6;
      sub_1800B515C(v6[4], (char *)v6[8], v6[9]);
      v4 = *((_DWORD *)v3 + 20);
      v5 = -2147024322;
      if ( v4 >= 0 )
        v4 = v5;
      *((_DWORD *)v3 + 20) = v4;
      return v9;
    }
    catch ( ... )
    {
      return v9;
    }
  }
  return result;
}
