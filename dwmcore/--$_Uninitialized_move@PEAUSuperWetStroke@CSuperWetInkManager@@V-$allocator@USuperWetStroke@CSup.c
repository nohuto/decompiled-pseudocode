_QWORD *__fastcall std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *>(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_QWORD *)(v4 - 8);
      a3 += 13;
      v6 = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4] = v6;
      v7 = *(_OWORD *)(v4 + 8);
      v4 += 104LL;
      *(_OWORD *)&v5[v4 - 96] = v7;
      *(_OWORD *)&v5[v4 - 80] = *(_OWORD *)(v4 - 80);
      *(_OWORD *)&v5[v4 - 64] = *(_OWORD *)(v4 - 64);
      *(_QWORD *)&v5[v4 - 48] = *(_QWORD *)(v4 - 48);
      *(_OWORD *)&v5[v4 - 40] = *(_OWORD *)(v4 - 40);
      *(_QWORD *)&v5[v4 - 24] = *(_QWORD *)(v4 - 24);
      v5[v4 - 16] = *(_BYTE *)(v4 - 16);
    }
    while ( v4 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>((__int64)a3, (__int64)a3);
  return a3;
}
