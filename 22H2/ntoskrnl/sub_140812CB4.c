/*
 * XREFs of sub_140812CB4 @ 0x140812CB4
 * Callers:
 *     ClipInitHandles @ 0x1403750E0 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140812F54 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140933834 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

__int64 sub_140812CB4()
{
  NTSTATUS v0; // ebx

  dword_140C70B0C = 0;
  dword_140C70B1C = 0;
  qword_140C70B34 = 0LL;
  dword_140C70B3C = 0;
  dword_140C70B04 = 0;
  dword_140C70B08 = 0;
  qword_140C70B10 = 0LL;
  qword_140C70B28 = 0LL;
  qword_140C70B20 = (__int64)sub_1407BF330;
  dword_140C70B30 = 54;
  dword_140C70B00 = 8;
  dword_140C70B18 = 10;
  v0 = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C70B34 + 4), L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister_EtwRegister_EtwSetInformation(&unk_140C068B0);
  return (unsigned int)v0;
}
