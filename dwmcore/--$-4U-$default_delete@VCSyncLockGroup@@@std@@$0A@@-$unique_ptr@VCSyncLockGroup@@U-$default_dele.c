CParallelModeGroup **__fastcall std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(
        CParallelModeGroup **a1,
        CParallelModeGroup **a2)
{
  CParallelModeGroup *v3; // rax
  CParallelModeGroup *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      CParallelModeGroup::`scalar deleting destructor'(v4, (unsigned int)a2);
  }
  return a1;
}
