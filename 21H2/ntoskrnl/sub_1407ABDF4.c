/*
 * XREFs of sub_1407ABDF4 @ 0x1407ABDF4
 * Callers:
 *     ClipInitHandles @ 0x1403B8180 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x1407AC0A0 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x1408648A4 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

__int64 sub_1407ABDF4()
{
  NTSTATUS v0; // ebx

  dword_140C53D9C = 0;
  dword_140C53DAC = 0;
  qword_140C53DC4 = 0LL;
  dword_140C53DCC = 0;
  dword_140C53D94 = 0;
  dword_140C53D98 = 0;
  qword_140C53DA0 = 0LL;
  qword_140C53DB8 = 0LL;
  qword_140C53DB0 = (__int64)sub_1406A6450;
  dword_140C53DC0 = 54;
  dword_140C53D90 = 8;
  dword_140C53DA8 = 10;
  v0 = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C53DC4 + 4), L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister_EtwRegister_EtwSetInformation(&unk_140C04790);
  return (unsigned int)v0;
}
