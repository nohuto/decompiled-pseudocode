__int64 __fastcall CcUpdateLazyWriterPerf(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v5 = a4;
  v6 = 1000000LL * (*a3 - *a2) / stru_140C5F4C8.QuadPart;
  if ( !v6 )
    v6 = 1LL;
  v7 = 0LL;
  v8 = 1000000 * a4 / v6;
  v9 = (_QWORD *)(a1 + 1280);
  v10 = 32LL;
  do
  {
    v7 += *v9++;
    --v10;
  }
  while ( v10 );
  v11 = *(_QWORD *)(a1 + 40);
  v12 = v7 >> 5;
  v13 = *(_QWORD *)(v11 + 416);
  if ( v13 + v6 )
  {
    v14 = (v8 * v6 + *(_QWORD *)(v11 + 432) * v13) / (v13 + v6);
  }
  else
  {
    v14 = v8;
    if ( v8 <= *(_QWORD *)(v11 + 432) )
      v14 = *(_QWORD *)(v11 + 432);
  }
  *(_QWORD *)(v11 + 432) = v14;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 40) + 408LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 416LL) += v6;
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 424LL) += v5;
  if ( !v8 )
    v8 = 512LL;
  *(_QWORD *)(a1 + 8LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1264), 1u) & 0x1F) + 1280) = v8;
  return _InterlockedExchange64((volatile __int64 *)(a1 + 1272), (v8 + 31 * v12) >> 5);
}
