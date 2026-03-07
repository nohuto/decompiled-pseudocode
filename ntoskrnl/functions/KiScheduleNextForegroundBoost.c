void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_140C42198);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C42190;
      v2 = qword_140C42188 == (_QWORD)&qword_140C42188;
      if ( *(__int64 **)qword_140C42190 != &qword_140C42188 )
        __fastfail(3u);
      *v1 = &qword_140C42188;
      v1[1] = v3;
      *v3 = v1;
      qword_140C42190 = (__int64)v1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C42198);
    if ( v2 )
      KiInsertQueueDpc((ULONG_PTR)&stru_140C42148, 0LL, 0LL, 0LL, 0);
  }
}
