__int64 __fastcall PopFxTransitionCriticalResource(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v5; // r11d
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ecx

  v5 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * a2);
  v7 = v6 + 88;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 92), 0, 0);
  if ( (_BYTE)v5 )
  {
    if ( (v8 & 1) == 0 )
      PopFxBugCheck(0x606uLL, v6, *(int *)(v6 + 92), v5);
    v9 = v8 & 0xFFFFFFFE;
  }
  else
  {
    if ( (v8 & 1) != 0 )
      PopFxBugCheck(0x606uLL, v6, *(int *)(v6 + 92), 0LL);
    v9 = v8 | 1;
  }
  if ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 92), v9, v8) )
    PopFxBugCheck(0x606uLL, v6, v7, v9);
  LOBYTE(v7) = v5;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR))(a1 + 160))(*(_QWORD *)(a1 + 192), a2, v7);
}
