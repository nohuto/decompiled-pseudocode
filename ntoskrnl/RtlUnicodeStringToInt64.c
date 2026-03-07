NTSTATUS __stdcall RtlUnicodeStringToInt64(PCUNICODE_STRING String, ULONG Base, PLONG64 Number, PWSTR *EndPointer)
{
  __int64 Length; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 MaximumLength; // rcx
  wint_t *v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  int v15; // [rsp+30h] [rbp-E8h] BYREF
  wint_t *v16; // [rsp+38h] [rbp-E0h] BYREF
  _WORD v17[72]; // [rsp+40h] [rbp-D8h] BYREF

  Length = String->Length;
  Buffer = String->Buffer;
  MaximumLength = String->MaximumLength;
  v16 = 0LL;
  v11 = Buffer;
  if ( MaximumLength < Length + 2 || Buffer[((unsigned __int64)(unsigned int)MaximumLength >> 1) - 1] )
  {
    v11 = v17;
    v12 = (unsigned int)Length >> 1;
    if ( (unsigned int)Length >> 1 >= 0x40 )
      v12 = 64;
    v13 = v12;
    memmove(v17, Buffer, v13 * 2);
    if ( v13 >= 65 )
      _report_rangecheckfailure();
    v17[v13] = 0;
  }
  v15 = 0;
  *Number = wcstoxq(0LL, v11, &v16, Base, 0, &v15);
  if ( EndPointer )
    *EndPointer = &String->Buffer[v16 - v11];
  return v15 != 0 ? 0xC0000095 : 0;
}
