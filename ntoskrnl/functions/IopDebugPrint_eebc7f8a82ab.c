__int64 IopDebugPrint(unsigned int a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, a1, a2, va, 1);
  return a1;
}
