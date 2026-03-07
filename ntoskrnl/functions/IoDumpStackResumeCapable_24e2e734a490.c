__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C6A8E8 )
      return ((__int64 (*)(void))qword_140C6A8E8)();
  }
  return result;
}
