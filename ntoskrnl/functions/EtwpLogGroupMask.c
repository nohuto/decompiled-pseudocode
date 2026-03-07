void __fastcall EtwpLogGroupMask(__int64 a1, unsigned int a2, __int128 *a3, unsigned __int16 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _QWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  __m256i v7; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v4 = a3[1];
  *(_OWORD *)&v7.m256i_u64[1] = 0LL;
  v8 = 85;
  v5 = *a3;
  v6[0] = &v7;
  v6[1] = 36LL;
  *(_OWORD *)v7.m256i_i8 = v5;
  *(_OWORD *)&v7.m256i_u64[2] = v4;
  EtwpLogKernelEvent((__int64)v6, a1, a2, 1u, a4, 0x401802u);
}
