__int64 __fastcall DirectComposition::CConnection::RegisterChannel(
        DirectComposition::CConnection *this,
        struct DirectComposition::CChannel *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  result = DirectComposition::CChannelGroup::InsertChannel(
             (DirectComposition::CConnection *)((char *)this + 16),
             a2,
             &v6);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)this + 37) )
      result = 3221225996LL;
    *a3 = v6;
  }
  return result;
}
