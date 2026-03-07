void __stdcall RtlFreeUnicodeString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    ExFreePool(Buffer);
    *UnicodeString = 0LL;
  }
}
