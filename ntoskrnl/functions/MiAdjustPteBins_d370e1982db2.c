char __fastcall MiAdjustPteBins(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 4LL;
  v12[0] = &qword_140C695C0;
  v4 = v12;
  v5 = 4LL;
  v12[1] = &unk_140C68088;
  v12[2] = &unk_140C680E0;
  v12[3] = &unk_140C68030;
  do
  {
    v6 = *v4;
    MiEmptyPteBins(*v4, 0LL, a3);
    if ( (unsigned int)MiPteBinsNeedTrimming(v6) )
      MiEmptyPteBins(v6, 1LL, a3);
    ++v4;
    --v5;
  }
  while ( v5 );
  LOBYTE(v7) = byte_140C6813E + 1;
  byte_140C6813E = v7;
  if ( (v7 & 0xF) == 0 )
  {
    v8 = v12;
    do
    {
      v9 = (_QWORD *)*v8;
      v10 = *(_QWORD *)(*v8 + 80LL);
      if ( v10 > 0x40000 )
      {
        v7 = v9[6] >> 2;
        if ( v10 > v7 )
          LOBYTE(v7) = MiAttemptCoalesce((__int64)v9, v9[8], *v9 - v9[8]);
      }
      ++v8;
      --v3;
    }
    while ( v3 );
  }
  return v7;
}
