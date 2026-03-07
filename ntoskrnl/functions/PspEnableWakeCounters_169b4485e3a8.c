__int64 __fastcall PspEnableWakeCounters(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // r8
  __int64 v4; // r10

  v1 = *(_QWORD *)(a1 + 1288);
  if ( v1 )
  {
    if ( _bittest((const signed __int32 *)(v1 + 1536), 0xCu) )
      return 0LL;
    v3 = (_QWORD *)(v1 + 1104);
    v4 = 7LL;
    do
    {
      *v3 += *(_QWORD *)((char *)v3 + a1 - v1);
      ++v3;
      --v4;
    }
    while ( v4 );
    *(_QWORD *)(v1 + 1160) += *(_QWORD *)(a1 + 1160);
  }
  if ( !_bittest((const signed __int32 *)(a1 + 1536), 0xCu) )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1536), 0xCu);
  return 0LL;
}
