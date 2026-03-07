void __stdcall EngDebugPrint(PCHAR StandardPrefix, PCHAR DebugMessage, va_list ap)
{
  char DstBuf[256]; // [rsp+20h] [rbp-118h] BYREF

  DbgPrintEx(0x70u, 0, StandardPrefix);
  vsprintf_s(DstBuf, 0x100uLL, DebugMessage, ap);
  DbgPrintEx(0x70u, 0, DstBuf);
}
