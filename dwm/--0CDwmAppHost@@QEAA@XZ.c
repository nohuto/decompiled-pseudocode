CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  NTSTATUS InformationProcess; // eax
  int v3; // ecx
  bool v4; // sf
  CDwmAppHost *result; // rax
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]

  dword_140016AE8 = 1;
  qword_140016B00 = 0LL;
  *(_OWORD *)&hInstance = 0LL;
  g_dwmAppHost = (__int64)&CDwmAppHost::`vftable';
  qword_140016B18[0] = (__int64)&CSettingsManager::`vftable';
  dword_140016B08 = 0;
  hwnd = 0LL;
  byte_140016B38 = 1;
  qword_140016B48 = 0LL;
  dword_140016B50 = 0;
  *(_QWORD *)&uExitCode = 0LL;
  byte_140016B68 = 0;
  qword_140016B70 = 0LL;
  byte_140016B78 = 0;
  dword_140016B7C = 3000;
  qword_140016B80 = 0LL;
  word_140016B88 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v7 = 0LL;
  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(
                         CurrentProcess,
                         ProcessBasicInformation,
                         ProcessInformation,
                         0x30u,
                         0LL);
  v3 = qword_140016B00;
  v4 = InformationProcess < 0;
  result = (CDwmAppHost *)&g_dwmAppHost;
  if ( !v4 )
    v3 = DWORD2(v7);
  LODWORD(qword_140016B00) = v3;
  return result;
}
