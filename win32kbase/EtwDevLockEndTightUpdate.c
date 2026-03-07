__int64 __fastcall EtwDevLockEndTightUpdate(int a1, char a2, int a3, char a4, char a5, char a6, char a7)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return McTemplateK0pqqqqqq_EtwWriteTransfer(
             a1,
             (unsigned int)&DevLockEndTightUpdate,
             a3,
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  return result;
}
