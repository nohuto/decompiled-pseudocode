char __fastcall HalpTscCompatibilitySynchronization(__int64 a1)
{
  __int16 v1; // r11
  int v2; // r11d
  int v3; // eax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  signed __int32 v8; // [rsp+0h] [rbp-8h] BYREF

  v1 = v8;
  _disable();
  v2 = v1 & 0x200;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = v3;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = -1LL;
    _InterlockedDecrement((volatile signed __int32 *)a1);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)a1 != -1 );
    _InterlockedOr(&v8, 0);
  }
  v4 = __readcr2();
  __writecr2(v4);
  v5 = __rdtsc();
  while ( *(_DWORD *)(a1 + 4) != KeGetCurrentPrcb()->Number )
    _mm_pause();
  if ( !*(_BYTE *)(a1 + 34) || *(_DWORD *)(a1 + 36) != KeGetCurrentPrcb()->Number )
  {
    if ( v5 < *(_QWORD *)(a1 + 16) )
      *(_QWORD *)(a1 + 16) = v5;
    if ( v5 > *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = v5;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
  {
    *(_BYTE *)(a1 + 32) = *(_BYTE *)(a1 + 33) || *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16) <= 0xF4240uLL;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 8));
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 8) != -1 );
    _InterlockedOr(&v8, 0);
  }
  LOBYTE(v6) = *(_BYTE *)(a1 + 32);
  if ( (_BYTE)v6 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    __writemsr(0x10u, v6);
  }
  if ( v2 )
    _enable();
  return v6;
}
