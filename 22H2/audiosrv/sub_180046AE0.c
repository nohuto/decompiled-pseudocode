/*
 * XREFs of sub_180046AE0 @ 0x180046AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B654C @ 0x1800B654C (sub_1800B654C.c)
 *     sub_1800B6E6C @ 0x1800B6E6C (sub_1800B6E6C.c)
 */

__int64 __fastcall sub_180046AE0(__int64 a1, char a2, int *a3, int a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+A0h] [rbp-9h] BYREF
  int v7; // [rsp+A4h] [rbp-5h] BYREF
  int v8; // [rsp+A8h] [rbp-1h] BYREF
  int v9; // [rsp+ACh] [rbp+3h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v17; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v18; // [rsp+F0h] [rbp+47h] BYREF
  int v19; // [rsp+118h] [rbp+6Fh] BYREF
  int v20; // [rsp+128h] [rbp+7Fh] BYREF

  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)v4 > 2u && (*(_QWORD *)(v4 + 16) & 0x200000000000LL) != 0 )
      {
        result = *(_QWORD *)(v4 + 24) & 0x200000000000LL;
        if ( result == *(_QWORD *)(v4 + 24) )
        {
          v10 = *((_QWORD *)a3 + 14);
          v11 = *((_QWORD *)a3 + 13);
          v19 = a3[24];
          v12 = *((_QWORD *)a3 + 11);
          v13 = *((_QWORD *)a3 + 10);
          v20 = a3[18];
          v14 = *((_QWORD *)a3 + 8);
          v6 = a3[6];
          v15 = *((_QWORD *)a3 + 2);
          v7 = *a3;
          v16 = *((_QWORD *)a3 + 15);
          v8 = a3[14];
          v17 = *((_QWORD *)a3 + 6);
          v9 = a3[1];
          v18 = 0x1000000LL;
          return sub_1800B654C(
                   v4,
                   (unsigned int)&unk_180165E07,
                   (_DWORD)a3,
                   a4,
                   (__int64)&v18,
                   (__int64)&v9,
                   (__int64)&v17,
                   (__int64)&v8,
                   (__int64)&v16,
                   (__int64)&v7,
                   (__int64)&v15,
                   (__int64)&v6,
                   (__int64)&v14,
                   (__int64)&v20,
                   (__int64)&v13,
                   (__int64)&v12,
                   (__int64)&v19,
                   (__int64)&v11,
                   (__int64)&v10);
        }
      }
    }
    else if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      return sub_1800B6E6C(a1, a3);
    }
  }
  return result;
}
