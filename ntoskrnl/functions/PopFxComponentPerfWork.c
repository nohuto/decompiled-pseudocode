LONG __fastcall PopFxComponentPerfWork(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbp
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rcx
  LONG result; // eax

  v4 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  do
  {
    _m_prefetchw((const void *)(a1 + 10));
    v8 = *((_DWORD *)a1 + 10);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange(a1 + 10, v8, v8);
    }
    while ( v9 != v8 );
    LOBYTE(a4) = (v8 & 0x40000000) != 0;
    PopFxCompleteComponentPerfState(v7, v6, (__int64)a1, a4);
  }
  while ( _InterlockedExchangeAdd(a1 + 30, 0xFFFFFFFF) != 1 );
  v10 = *(_QWORD *)(v4 + 80);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v10 + 248), 0, 0);
  return result;
}
