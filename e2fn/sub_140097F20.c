void __fastcall sub_140097F20(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // esi
  unsigned int i; // ebx
  unsigned __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 376);
  v3 = 0;
  for ( i = *(_DWORD *)(v1 + 52); i != *(_DWORD *)(v1 + 12); i = (i + 1) & *(_DWORD *)(v1 + 8) )
  {
    v5 = i * (unsigned __int64)*(unsigned __int16 *)(v1 + 2) + v1 + 64;
    if ( (*(_BYTE *)(v5 + 11) & 1) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 784));
    else
      v3 += sub_140097DC8(a1, (unsigned int *)v5, i);
    v1 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v1 + 52) = i;
  if ( v3 )
  {
    _mm_lfence();
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 64LL))(*(_QWORD *)(a1 + 456));
  }
}
