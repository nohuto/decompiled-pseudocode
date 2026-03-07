__int64 __fastcall PspSiloInitializeSystemRootBuffer(__int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING *v3; // rax
  wchar_t *Buffer; // rdx
  const UNICODE_STRING *v5; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  SourceString = 0LL;
  result = PsRemoveSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, &SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(UNICODE_STRING **)(a1 + 1488);
    Buffer = v3[82].Buffer;
    v3[79] = 0LL;
    v3[79].Buffer = Buffer + 15;
    v5 = SourceString;
    v3[79].MaximumLength = 520;
    RtlCopyUnicodeString(v3 + 79, v5);
    PsDereferenceSiloContext((void *)SourceString);
    return 0LL;
  }
  return result;
}
