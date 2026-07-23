/*
 * XREFs of sub_1407ABFF4 @ 0x1407ABFF4
 * Callers:
 *     ClipInitHandles @ 0x1403B82F0 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x1407AC2A0 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140864A04 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

__int64 sub_1407ABFF4()
{
  NTSTATUS v0; // ebx

  dword_140C53DDC = 0;
  dword_140C53DEC = 0;
  qword_140C53E04 = 0LL;
  dword_140C53E0C = 0;
  dword_140C53DD4 = 0;
  dword_140C53DD8 = 0;
  qword_140C53DE0 = 0LL;
  qword_140C53DF8 = 0LL;
  qword_140C53DF0 = (__int64)sub_140604080;
  dword_140C53E00 = 54;
  dword_140C53DD0 = 8;
  dword_140C53DE8 = 10;
  v0 = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C53E04 + 4), L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister_EtwRegister_EtwSetInformation(&unk_140C04790);
  return (unsigned int)v0;
}
