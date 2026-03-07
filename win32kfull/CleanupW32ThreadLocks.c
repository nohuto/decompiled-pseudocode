__int64 __fastcall CleanupW32ThreadLocks(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( !v2 )
      break;
    result = PopAndFreeW32ThreadLock(v2);
  }
  return result;
}
