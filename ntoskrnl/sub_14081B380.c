/*
 * XREFs of sub_14081B380 @ 0x14081B380
 * Callers:
 *     ClipInitHandles @ 0x140389270 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x14081B624 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140930904 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

__int64 sub_14081B380()
{
  NTSTATUS v0; // ebx

  dword_140C706CC = 0;
  dword_140C706DC = 0;
  qword_140C706F4 = 0LL;
  dword_140C706FC = 0;
  dword_140C706C4 = 0;
  dword_140C706C8 = 0;
  qword_140C706D0 = 0LL;
  qword_140C706E8 = 0LL;
  qword_140C706E0 = (__int64)sub_14076CF00;
  dword_140C706F0 = 54;
  dword_140C706C0 = 8;
  dword_140C706D8 = 10;
  v0 = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C706F4 + 4), L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister_EtwRegister_EtwSetInformation(&unk_140C068C0);
  return (unsigned int)v0;
}
