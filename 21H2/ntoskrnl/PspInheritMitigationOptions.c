/*
 * XREFs of PspInheritMitigationOptions @ 0x1406B0834
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PspInheritMitigationOptions(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // xmm1_8
  int v4; // r11d
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  char v7; // r9
  unsigned __int64 v8; // r10
  char v9; // cl
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // xmm1_8
  __int128 v13; // [rsp+0h] [rbp-68h]
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int128 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 2);
  v17 = 0LL;
  v4 = 0;
  v13 = *a1;
  v5 = *a2;
  v14 = v3;
  v6 = *((_QWORD *)a2 + 2);
  v15 = v5;
  v18 = 0LL;
  v16 = v6;
  do
  {
    v7 = 0;
    v8 = (unsigned __int64)(unsigned int)(4 * v4) >> 6;
    v9 = (4 * v4) & 0x3F;
    v10 = *((_QWORD *)&v13 + v8) >> v9;
    if ( (v10 & 4) != 0 || ((*((_QWORD *)&v15 + v8) >> v9) & 3) == 0 )
      v7 = 1;
    if ( !v7 )
      LOBYTE(v10) = *((_QWORD *)&v15 + v8) >> v9;
    result = *((_QWORD *)&v17 + v8) & ~(15LL << v9);
    ++v4;
    *((_QWORD *)&v17 + v8) = result | ((unsigned __int64)(v10 & 0xF) << v9);
  }
  while ( v4 < 39 );
  v12 = v18;
  *(_OWORD *)a3 = v17;
  *(_QWORD *)(a3 + 16) = v12;
  return result;
}
