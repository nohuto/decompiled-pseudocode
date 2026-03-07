void __fastcall FreeTmpBuffer(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( a1 == *(_QWORD *)(v2 + 2368) )
  {
    **(_QWORD **)(v2 + 2360) = a1;
  }
  else
  {
    v3 = (_QWORD *)(a1 - 32);
    if ( v3 )
    {
      KeEnterCriticalRegion();
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      v3[1] = v3;
      *v3 = v3;
      KeLeaveCriticalRegion();
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    }
  }
}
