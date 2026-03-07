DXGPROCESSVIDMMLOCK *__fastcall DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
        DXGPROCESSVIDMMLOCK *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( a2[24] == KeGetCurrentThread() )
      *(_QWORD *)this = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 23));
  }
  return this;
}
