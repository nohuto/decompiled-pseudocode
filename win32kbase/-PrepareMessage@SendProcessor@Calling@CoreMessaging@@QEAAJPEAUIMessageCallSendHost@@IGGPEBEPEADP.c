__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareMessage(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        const unsigned __int8 *a6,
        char *a7,
        unsigned int *a8)
{
  __int64 result; // rax
  int v10; // r9d
  CoreMessaging::Calling::SendProcessor *v11; // rcx
  unsigned int v12; // r8d
  struct IMessageCallSendHost *v13; // rdx
  unsigned int v14; // [rsp+40h] [rbp-18h]
  unsigned int v15; // [rsp+48h] [rbp-10h]

  if ( !a2 || !a6 || !a8 )
    return 2147942487LL;
  *a8 = 0;
  result = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(this, a2, a4, a5, a6, a7, 0, 0, v14, v15);
  if ( (int)result >= 0 )
  {
    v10 = *((_DWORD *)this + 33);
    v11 = (CoreMessaging::Calling::SendProcessor *)(unsigned int)(v10 + *((_DWORD *)this + 32));
    v12 = *((_DWORD *)this + 36);
    if ( v12 >> (v10 + *((_BYTE *)this + 128)) )
    {
      v13 = (struct IMessageCallSendHost *)*((_QWORD *)this + 17);
      *((_DWORD *)this + 30) = 4;
      return CoreMessaging::Calling::SendProcessor::NotifyInvalidHelper(
               v11,
               v13,
               (CoreMessaging::Calling::SendProcessor *)((char *)this + 120));
    }
    else
    {
      *a8 = v12;
      *((_DWORD *)this + 36) = v12 >> v10;
      return 0LL;
    }
  }
  return result;
}
