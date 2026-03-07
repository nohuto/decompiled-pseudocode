struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CBackTraceBucket::Lookup(
        volatile signed __int32 **this,
        const struct NSInstrumentation::CBackTrace *const a2,
        __int64 a3)
{
  volatile signed __int32 *i; // rbx

  for ( i = *this; ; i = *(volatile signed __int32 **)i )
  {
    if ( !i )
      return 0LL;
    if ( *((_QWORD *)i + 1) == a3 && !memcmp((const void *)(i + 4), a2, 0xA0uLL) )
      break;
  }
  _InterlockedIncrement(i + 44);
  return (struct NSInstrumentation::CBackTraceStorageUnit *)i;
}
