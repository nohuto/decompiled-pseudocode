__int64 __fastcall EtwTraceBeginPointerMessageRetrieve(int a1, char a2, int a3)
{
  __int64 result; // rax
  char v4; // al
  void *v5; // rdx

  result = (unsigned int)(a3 - 577);
  if ( a3 == 577 || a3 == 581 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) == 0 )
      return result;
    v4 = a2;
    v5 = &BeginPointerUpdateMessageRetrieve;
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) == 0 )
      return result;
    v4 = a2;
    v5 = &BeginPointerMessageRetrieve;
  }
  return McTemplateK0pqq_EtwWriteTransfer(a1, (_DWORD)v5, a3, a1, v4, a3);
}
