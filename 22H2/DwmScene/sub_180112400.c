/*
 * XREFs of sub_180112400 @ 0x180112400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000154C @ 0x18000154C (sub_18000154C.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_180112400(__int64 *a1, __int64 a2)
{
  void *v2; // rbx
  __int64 result; // rax
  volatile signed __int64 *v6; // rcx
  __int64 v7; // [rsp+50h] [rbp-59h] BYREF
  __int64 v8; // [rsp+58h] [rbp-51h] BYREF
  char v9; // [rsp+60h] [rbp-49h] BYREF
  __int64 v10; // [rsp+110h] [rbp+67h] BYREF
  __int64 v11; // [rsp+120h] [rbp+77h] BYREF
  __int64 v12; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (void *)a1[14];
  sub_1801136A0(v2);
  result = sub_1801147FC(v2);
  if ( (unsigned int)dword_18020DB10 > 5 && (qword_18020DB20 & 0x400000000000LL) != 0 )
  {
    result = qword_18020DB28 & 0x400000000000LL;
    if ( (qword_18020DB28 & 0x400000000000LL) == qword_18020DB28 )
    {
      v6 = (volatile signed __int64 *)a1[14];
      v12 = a1[3];
      v7 = a1[1];
      v11 = a2;
      LODWORD(v10) = 1;
      if ( v6 )
      {
        _InterlockedExchangeAdd64(v6 + 18, 0LL);
        sub_1801147FC((void *)v6);
      }
      else
      {
        v9 = 0;
      }
      v8 = (__int64)&v9;
      return sub_18000154C(
               (int)&dword_18020DB10,
               (int)&dword_1801E7AD0,
               0,
               0,
               (void **)&v8,
               (__int64)&v10,
               &v7,
               &v12,
               (void **)&v11);
    }
  }
  return result;
}
