struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CBackTraceBucket::Insert(
        NSInstrumentation::CBackTraceBucket *this,
        __int64 a2,
        const struct NSInstrumentation::CBackTrace *const a3)
{
  struct NSInstrumentation::CBackTraceStorageUnit *v3; // rbp
  struct NSInstrumentation::CBackTraceStorageUnit *v7; // rbx
  struct NSInstrumentation::CBackTraceStorageUnit *result; // rax
  volatile signed __int32 *v9; // rdx

  v3 = *(struct NSInstrumentation::CBackTraceStorageUnit **)this;
  v7 = *(struct NSInstrumentation::CBackTraceStorageUnit **)this;
  if ( *(_QWORD *)this )
  {
    while ( *((_QWORD *)v7 + 1) != a2 || memcmp((char *)v7 + 16, a3, 0xA0uLL) )
    {
      v7 = *(struct NSInstrumentation::CBackTraceStorageUnit **)v7;
      if ( !v7 )
        goto LABEL_5;
    }
    _InterlockedIncrement((volatile signed __int32 *)v7 + 44);
    return v7;
  }
  else
  {
LABEL_5:
    result = NSInstrumentation::CBackTraceStorageUnit::Create(a2, a3, v3);
    if ( result )
    {
      v9 = (volatile signed __int32 *)*((_QWORD *)this + 1);
      *(_QWORD *)this = result;
      if ( v9 )
        *((_DWORD *)result + 45) = _InterlockedIncrement(v9);
    }
  }
  return result;
}
