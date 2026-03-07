void __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  _DWORD *v3; // rbx
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax

  v3 = a1;
  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v4 = 0;
    v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
    if ( a2 )
    {
      v6 = 200LL;
    }
    else
    {
      v4 = v3[2];
      if ( v4 && qword_1C02D5C98 && (int)qword_1C02D5C98() >= 0 && qword_1C02D5CA0 )
        qword_1C02D5CA0(v3 + 4);
      v6 = 192LL;
    }
    if ( !*(_QWORD *)(v5 + v6) && v4 != 1 )
      v3 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(v5 + v6), (__int64)v3);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
}
