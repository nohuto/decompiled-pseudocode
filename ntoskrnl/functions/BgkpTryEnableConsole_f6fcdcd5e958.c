__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140C6A80A )
  {
    if ( qword_140C6A7E8 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C0BC48, 0LL);
  }
  return result;
}
