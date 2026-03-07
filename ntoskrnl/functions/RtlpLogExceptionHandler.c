__int64 __fastcall RtlpLogExceptionHandler(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // r8d
  bool i; // zf
  signed __int32 v11; // eax
  int v12; // ett
  signed __int32 v13; // r9d
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0

  if ( !RtlpExceptionLog2 )
    return 0LL;
  v9 = RtlpExceptionLogCount;
  v12 = RtlpExceptionLogCount;
  v11 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (RtlpExceptionLogCount + 1) % 0x32u, RtlpExceptionLogCount);
  for ( i = v12 == v11; ; i = v11 == v13 )
  {
    v13 = v11;
    if ( i )
      break;
    v9 = v11;
    v11 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v11 + 1) % 0x32u, v11);
  }
  v14 = 1424LL * v9;
  i = RtlpExceptionLog2 + v14 == 0;
  v8 = RtlpExceptionLog2 + v14;
  *(_QWORD *)(v8 + 1400) = KeGetCurrentThread();
  if ( !i )
  {
    *(_DWORD *)(v8 + 1396) = -1;
    v15 = (_OWORD *)(v8 + 160);
    *(_DWORD *)(v8 + 1392) = 2;
    *(_OWORD *)v8 = *(_OWORD *)a1;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v8 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v8 + 96) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v8 + 112) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v8 + 128) = *(_OWORD *)(a1 + 128);
    *(_QWORD *)(v8 + 144) = *(_QWORD *)(a1 + 144);
    v16 = 9LL;
    do
    {
      *v15 = *a2;
      v15[1] = a2[1];
      v15[2] = a2[2];
      v15[3] = a2[3];
      v15[4] = a2[4];
      v15[5] = a2[5];
      v15[6] = a2[6];
      v15 += 8;
      v17 = a2[7];
      a2 += 8;
      *(v15 - 1) = v17;
      --v16;
    }
    while ( v16 );
    *v15 = *a2;
    v15[1] = a2[1];
    v15[2] = a2[2];
    v15[3] = a2[3];
    v18 = a2[4];
    *(_QWORD *)(v8 + 1408) = a3;
    *(_QWORD *)(v8 + 1416) = a4;
    v15[4] = v18;
    *(_DWORD *)(v8 + 208) &= 0x10001Fu;
  }
  return v8;
}
