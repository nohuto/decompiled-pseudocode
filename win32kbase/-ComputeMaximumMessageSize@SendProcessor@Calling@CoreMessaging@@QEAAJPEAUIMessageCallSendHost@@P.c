__int64 __fastcall CoreMessaging::Calling::SendProcessor::ComputeMaximumMessageSize(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        const unsigned __int8 **a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v8; // edi
  const unsigned __int8 **v9; // rsi
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // [rsp+40h] [rbp-18h]
  unsigned int v15; // [rsp+48h] [rbp-10h]

  v8 = a4;
  v9 = a3;
  if ( !a2 || !a3 || !a8 )
    return 2147942487LL;
  *a8 = 0;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    result = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(this, a2, 0, 0, *v9, 0LL, 1, 0x200u, v14, v15);
    if ( (int)result < 0 )
      break;
    v13 = *((_DWORD *)this + 36);
    if ( v13 > *a8 )
      *a8 = v13;
    ++v9;
    if ( !--v8 )
      return 0LL;
  }
  return result;
}
