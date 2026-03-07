__int64 __fastcall EtwTraceAuditApiSetWinEventHook(int a1, int a2, int a3, char a4, char a5, __int64 a6)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
    return McTemplateK0qqqqqp_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
