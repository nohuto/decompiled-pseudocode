unsigned __int64 __fastcall PspInheritMitigationOptions(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // xmm1_8
  int v4; // r10d
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  unsigned __int64 v7; // r9
  char v8; // cl
  unsigned __int8 v9; // al
  unsigned __int64 result; // rax
  __int64 v11; // xmm1_8
  __int128 v12; // [rsp+0h] [rbp-68h]
  __int64 v13; // [rsp+10h] [rbp-58h]
  __int128 v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 2);
  v16 = 0LL;
  v4 = 0;
  v12 = *a1;
  v5 = *a2;
  v13 = v3;
  v6 = *((_QWORD *)a2 + 2);
  v14 = v5;
  v17 = 0LL;
  v15 = v6;
  do
  {
    v7 = (unsigned __int64)(unsigned int)(4 * v4) >> 6;
    v8 = (4 * v4) & 0x3F;
    v9 = (*((_QWORD *)&v14 + v7) >> v8) & 0xF;
    if ( ((*((_QWORD *)&v12 + v7) >> v8) & 4) != 0 || ((*((_QWORD *)&v14 + v7) >> v8) & 3) == 0 )
      v9 = (*((_QWORD *)&v12 + v7) >> v8) & 0xF;
    ++v4;
    result = (unsigned __int64)v9 << v8;
    *((_QWORD *)&v16 + v7) = result | *((_QWORD *)&v16 + v7) & ~(15LL << v8);
  }
  while ( v4 < 40 );
  v11 = v17;
  *(_OWORD *)a3 = v16;
  *(_QWORD *)(a3 + 16) = v11;
  return result;
}
