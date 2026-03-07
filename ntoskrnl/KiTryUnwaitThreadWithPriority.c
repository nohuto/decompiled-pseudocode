char __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  ULONG_PTR v4; // rbx
  char v5; // bp
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  int v14; // edx
  __int64 v15; // rcx
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) == 5 )
  {
    v9 = v17;
    v10 = (unsigned __int8)*(_DWORD *)(v4 + 540);
    if ( (_DWORD)v10 != v17 )
    {
      v14 = *(_DWORD *)(v4 + 540) & 0x100;
      if ( !v14 )
      {
        v15 = *(_QWORD *)(v4 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v15 + 4 * v10 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 4LL * v17 + 536));
        v9 = v17;
      }
      *(_DWORD *)(v4 + 540) = (unsigned __int8)v9 | v14;
    }
    v5 = KiSignalThread(a1, v4, a3, a2);
    if ( v5 )
    {
      *(_BYTE *)(v4 + 645) = 0;
      KiSetBasePriorityAndClearDecrement(v4, &v17, 0);
      KiAdjustRealtimePriorityFloor(v4, v9);
      if ( v9 != *(char *)(v4 + 195) )
      {
        v11 = *(_QWORD *)(v4 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
        if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
        v12 = v17;
        *(_QWORD *)(v4 + 32) = v11;
        KiSetPriorityThread(v4, 0LL, v12);
      }
    }
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return v5;
}
