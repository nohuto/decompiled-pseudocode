__int64 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 1432);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  v4 = *(_QWORD *)(v1 + 112);
  if ( v4 )
  {
    if ( (unsigned int)IsIAMThread(*(_QWORD *)(v4 + 16)) )
      return 1LL;
  }
  if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 424)) )
    return 1LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 112LL);
  if ( !v5 )
    return 0LL;
  LOBYTE(v2) = (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL)) != 0;
  return v2;
}
