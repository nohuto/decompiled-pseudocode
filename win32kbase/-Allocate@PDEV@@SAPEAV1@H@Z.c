struct PDEV *__fastcall PDEV::Allocate(__int64 a1)
{
  int v1; // esi
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v1 = a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL) + 48LL) )
    return 0LL;
  v2 = (_QWORD *)NSInstrumentation::CTypeIsolation<913408,3568>::Allocate();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = v2;
  if ( !v1 && !AcquireReferenceCountedObjectHandle(1LL, v2, v2 + 440) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(v3);
    return 0LL;
  }
  return (struct PDEV *)v4;
}
