__int64 __fastcall SshpAlpcSendMessage(__int64 a1, __int64 a2, unsigned int a3, const void *a4, char a5)
{
  HANDLE v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  _OWORD v8[11]; // [rsp+70h] [rbp-90h] BYREF

  v5 = qword_140C38150;
  if ( qword_140C38150 )
  {
    v8[0] = 0LL;
    memmove((char *)v8 + 12, a4, a3);
    if ( a5 )
    {
      memset(&v8[1], 0, 0xA0uLL);
      v6 = 0x20000LL;
    }
    else
    {
      v6 = 0x10000LL;
    }
    return ZwAlpcSendWaitReceivePort((__int64)v5, v6);
  }
  return result;
}
