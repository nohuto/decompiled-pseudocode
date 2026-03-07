void DwmDbg::Print(DwmDbg *this, const char *a2, ...)
{
  SIZE_T v2; // rdi
  char *v3; // rbx
  char *Buffer; // [rsp+20h] [rbp-28h] BYREF
  const char *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v2 = vscprintf((const char *const)this, (va_list)&v6) + 1;
  std::make_unique<char [0],0>(&Buffer, v2);
  v3 = Buffer;
  if ( Buffer )
  {
    vsprintf_s(Buffer, v2, (const char *const)this, (va_list)&v6);
    puts(v3);
  }
  DbgPrintEx(0x65u, 0, "%s", v3);
  if ( v3 )
    operator delete(v3);
}
