ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}
