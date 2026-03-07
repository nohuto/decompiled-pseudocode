__int64 __fastcall PopFxCompleteComponentPerfState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v4; // si
  signed __int32 v8; // ebx
  __int64 v9; // r15
  int v10; // ebx
  __int64 i; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx

  v4 = a4;
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a3 + 40), 0xFFFFFFFF);
  v9 = *(_QWORD *)(a3 + 80);
  v10 = v8 - 1;
  for ( i = 0LL;
        (unsigned int)i < *(_DWORD *)(a3 + 56);
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v12 + 8) )
  {
    v12 = (unsigned int)i;
    i = (unsigned int)(i + 1);
    v12 *= 2LL;
    v13 = *(_QWORD *)(a3 + 152) + 32LL * *(unsigned int *)(*(_QWORD *)(a3 + 48) + 8 * v12);
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(a3 + 64);
    *(_BYTE *)(v13 + 24) = 0;
  }
  PopDiagTraceFxPerfRequestProgress(a3, v10 & 7, i, a4);
  if ( v10 >= 0 )
  {
    v10 = _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
    if ( (v10 & 0x8000000) == 0 )
      PopFxAddLogEntry(*(_QWORD *)(a1 + 48), a2, 15, 1LL);
  }
  LOBYTE(v14) = v4;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(a3 + 32))(*(_QWORD *)(a1 + 192), a2, v14, v9);
  if ( v10 < 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
    KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  }
  LOBYTE(v15) = v4;
  return PopDiagTraceFxPerfRequestComplete(a3, v15);
}
