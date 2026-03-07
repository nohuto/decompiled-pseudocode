__int64 __fastcall NtListenPort(HANDLE Handle, __int64 a2)
{
  __int64 result; // rax

  do
    result = NtReplyWaitReceivePortEx(Handle, 0LL, 0LL, a2, 0LL);
  while ( !(_DWORD)result && (*(_WORD *)(a2 + 4) & 0x7FFF) != 0xA );
  return result;
}
