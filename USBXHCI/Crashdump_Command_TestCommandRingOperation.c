__int64 __fastcall Crashdump_Command_TestCommandRingOperation(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_TestCommandRingOperation: begin\n");
  v3 = 0LL;
  HIDWORD(v3) = 23552;
  LODWORD(a1) = Crashdump_Command_SendCommand(a1, (__int64)&v3, 0LL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_TestCommandRingOperation: end 0x%X\n", a1);
  return (unsigned int)a1;
}
