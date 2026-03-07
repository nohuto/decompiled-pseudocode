DXGALLOCATIONREFERENCE *__fastcall DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
        DXGALLOCATIONREFERENCE *this,
        struct _EX_RUNDOWN_REF *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 && !ExAcquireRundownProtection(a2 + 11) )
    WdLogSingleEntry5(0LL, 275LL, 38LL, a2, 0LL, 0LL);
  return this;
}
