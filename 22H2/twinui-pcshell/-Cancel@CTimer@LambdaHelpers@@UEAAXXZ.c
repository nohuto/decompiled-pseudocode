/*
 * XREFs of ?Cancel@CTimer@LambdaHelpers@@UEAAXXZ @ 0x1802BD7D0
 * Callers:
 *     ??_GCTimer@LambdaHelpers@@EEAAPEAXI@Z @ 0x1802BD150 (--_GCTimer@LambdaHelpers@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LambdaHelpers::CTimer::Cancel(LambdaHelpers::CTimer *this)
{
  struct LambdaHelpers::CTimer *v2; // rax
  struct LambdaHelpers::CTimer **v3; // rcx

  if ( *((_QWORD *)this + 4) )
  {
    AcquireSRWLockExclusive(&LambdaHelpers::CTimer::s_rwLock);
    v2 = LambdaHelpers::CTimer::s_pTimerList;
    v3 = &LambdaHelpers::CTimer::s_pTimerList;
    while ( v2 != this )
    {
      v3 = (struct LambdaHelpers::CTimer **)((char *)v2 + 40);
      v2 = (struct LambdaHelpers::CTimer *)*((_QWORD *)v2 + 5);
    }
    *v3 = (struct LambdaHelpers::CTimer *)*((_QWORD *)this + 5);
    ReleaseSRWLockExclusive(&LambdaHelpers::CTimer::s_rwLock);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
}
