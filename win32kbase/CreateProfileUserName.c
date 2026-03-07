struct _UNICODE_STRING *__fastcall CreateProfileUserName(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2)
{
  struct _UNICODE_STRING *result; // rax
  struct _UNICODE_STRING *v4; // rdi

  result = (struct _UNICODE_STRING *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                       a1,
                                       a2,
                                       0x210uLL,
                                       0x6E707355u);
  v4 = result;
  if ( result )
  {
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(result, a1, Win32FreePool);
    v4[32].Buffer = &v4->Length;
    v4[32].MaximumLength = 512;
    v4[32].Length = 0;
    InitPreviousUserString();
    RtlCopyUnicodeString(v4 + 32, &PreviousUserString);
    return v4 + 32;
  }
  return result;
}
