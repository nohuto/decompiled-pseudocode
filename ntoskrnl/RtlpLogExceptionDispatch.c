/*
 * XREFs of RtlpLogExceptionDispatch @ 0x1405A4938
 * Callers:
 *     RtlDispatchException @ 0x14027FA60 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpLogExceptionDispatch(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r11d
  bool i; // zf
  signed __int32 v6; // eax
  int v7; // ett
  signed __int32 v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1

  if ( RtlpExceptionLog2 )
  {
    v4 = RtlpExceptionLogCount;
    v7 = RtlpExceptionLogCount;
    v6 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (RtlpExceptionLogCount + 1) % 0x32u, RtlpExceptionLogCount);
    for ( i = v7 == v6; ; i = v6 == v8 )
    {
      v8 = v6;
      if ( i )
        break;
      v4 = v6;
      v6 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v6 + 1) % 0x32u, v6);
    }
    v9 = 1424LL * v4;
    i = RtlpExceptionLog2 + v9 == 0;
    v10 = RtlpExceptionLog2 + v9;
    *(_QWORD *)(v10 + 1400) = KeGetCurrentThread();
    if ( !i )
    {
      *(_DWORD *)(v10 + 1392) = 1;
      *(_OWORD *)v10 = *(_OWORD *)a1;
      v11 = 9LL;
      *(_OWORD *)(v10 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v10 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v10 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(v10 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(v10 + 112) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(v10 + 128) = *(_OWORD *)(a1 + 128);
      *(_QWORD *)(v10 + 144) = *(_QWORD *)(a1 + 144);
      v12 = (_OWORD *)(v10 + 160);
      do
      {
        *v12 = *a2;
        v12[1] = a2[1];
        v12[2] = a2[2];
        v12[3] = a2[3];
        v12[4] = a2[4];
        v12[5] = a2[5];
        v12[6] = a2[6];
        v12 += 8;
        v13 = a2[7];
        a2 += 8;
        *(v12 - 1) = v13;
        --v11;
      }
      while ( v11 );
      *v12 = *a2;
      v12[1] = a2[1];
      v12[2] = a2[2];
      v12[3] = a2[3];
      v12[4] = a2[4];
      *(_DWORD *)(v10 + 208) &= 0x10001Fu;
    }
  }
}
