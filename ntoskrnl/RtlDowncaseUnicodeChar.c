WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v2; // edx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return NLS_DOWNCASE((__int64)CurrentServerSiloGlobals[77].Blink, v2);
}
