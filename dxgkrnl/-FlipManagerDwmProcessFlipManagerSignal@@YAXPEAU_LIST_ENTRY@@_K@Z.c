void __fastcall FlipManagerDwmProcessFlipManagerSignal(struct _LIST_ENTRY *a1, unsigned __int64 a2)
{
  struct CFlipManagerSignal *v4; // rsi
  __int64 v5; // rdi

  while ( a1->Flink != a1 )
  {
    v4 = (struct CFlipManagerSignal *)((__int64)&a1->Flink[-1].Blink & -(__int64)(a1->Flink != 0LL));
    v5 = *((_QWORD *)v4 + 5);
    *((_QWORD *)v4 + 5) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v5 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v5 + 32), v4, a2);
      CPushLock::ReleaseLock((CPushLock *)(v5 + 40));
    }
    ObfDereferenceObject((PVOID)v5);
  }
}
