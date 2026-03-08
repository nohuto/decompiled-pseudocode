/*
 * XREFs of _lambda_2b831a354495e24a997c7e563732c286_::operator() @ 0x1C02EEE24
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286__&DxgkSampleDisplayState_ @ 0x1C0049100 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286__-D.c)
 * Callees:
 *     _lambda_d553670f9cadd4da475e2936e6caa2f6_::operator() @ 0x1C02EF87C (_lambda_d553670f9cadd4da475e2936e6caa2f6_--operator().c)
 */

__int64 __fastcall lambda_2b831a354495e24a997c7e563732c286_::operator()(unsigned int ***a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned int v5; // esi
  unsigned int *v6; // rdx
  unsigned int *v7; // r10
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int i; // r11d
  __int64 v16; // r10
  __int64 v17; // rcx

  v3 = 0;
  v5 = 0;
  v6 = **a1;
  *(_DWORD *)(a2 + 64) = *v6;
  *(_QWORD *)(a2 + 68) = 672LL;
  *(_DWORD *)(a2 + 76) = 0;
  if ( *v6 )
  {
    LODWORD(v7) = (_DWORD)v6;
    do
    {
      v8 = 0;
      v9 = 33LL * v5;
      do
      {
        v10 = 33LL * v8;
        if ( v6[v9 + 5] == v6[v10 + 5] && v6[v9 + 6] == v6[v10 + 6] )
          break;
        ++v8;
      }
      while ( v8 <= v5 );
      lambda_d553670f9cadd4da475e2936e6caa2f6_::operator()(
        v8 | 0xFE5C0000,
        v5,
        216 * v5 + a2 + 80,
        (_DWORD)v7 + 4 + v9 * 4,
        v8 | 0xFE5C0000);
      ++v5;
      v7 = **a1;
      v6 = v7;
    }
    while ( v5 < *v7 );
  }
  v11 = *v6;
  if ( *v6 )
  {
    do
    {
      v12 = 216LL * v3;
      v13 = *(_QWORD *)(v12 + a2 + 80);
      if ( (v13 & 0x4000000000000LL) == 0 )
      {
        v14 = v13 | 0x4000000000000LL;
        *(_DWORD *)(v12 + a2 + 236) = v3;
        *(_QWORD *)(v12 + a2 + 80) = v14;
        for ( i = v3 + 1; ; ++i )
        {
          v11 = *v6;
          if ( i >= *v6 )
            break;
          v16 = v14;
          v17 = 216LL * i;
          if ( (v14 & 0x4000000000000LL) == 0
            && *(_DWORD *)(v17 + a2 + 196) == *(_DWORD *)(v12 + a2 + 196)
            && *(_DWORD *)(v17 + a2 + 200) == *(_DWORD *)(v12 + a2 + 200) )
          {
            *(_QWORD *)(v17 + a2 + 80) |= 0x4000000000000uLL;
            *(_DWORD *)(v17 + a2 + 236) = *(_DWORD *)(v12 + a2 + 236);
            v16 = *(_QWORD *)(v12 + a2 + 80);
          }
          v14 = v16;
        }
      }
      ++v3;
    }
    while ( v3 < v11 );
  }
  return 0LL;
}
