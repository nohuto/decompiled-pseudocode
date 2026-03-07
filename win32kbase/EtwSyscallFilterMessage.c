__int64 __fastcall EtwSyscallFilterMessage(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000000LL) != 0 )
    return McTemplateK0szzq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
