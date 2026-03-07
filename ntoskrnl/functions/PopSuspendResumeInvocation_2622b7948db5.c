__int64 PopSuspendResumeInvocation()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C6ABC8 )
    return ((__int64 (*)(void))qword_140C6ABC8)();
  return result;
}
