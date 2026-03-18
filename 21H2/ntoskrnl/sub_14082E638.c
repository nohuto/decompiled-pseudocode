/*
 * XREFs of sub_14082E638 @ 0x14082E638
 * Callers:
 *     ClipInitHandles @ 0x1403C54B0 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x14082E8D4 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140908C90 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

__int64 sub_14082E638()
{
  NTSTATUS v0; // ebx

  dword_140C5A6DC = 0;
  dword_140C5A6EC = 0;
  qword_140C5A704 = 0LL;
  dword_140C5A70C = 0;
  dword_140C5A6D4 = 0;
  dword_140C5A6D8 = 0;
  qword_140C5A6E0 = 0LL;
  qword_140C5A6F8 = 0LL;
  qword_140C5A6F0 = (__int64)sub_1406AFC80;
  dword_140C5A700 = 54;
  dword_140C5A6D0 = 8;
  dword_140C5A6E8 = 10;
  v0 = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C5A704 + 4), L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister_EtwRegister_EtwSetInformation(&unk_140C06858);
  return (unsigned int)v0;
}
