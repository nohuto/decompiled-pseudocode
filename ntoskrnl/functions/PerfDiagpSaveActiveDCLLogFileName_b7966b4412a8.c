void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *Pool2; // rbx
  unsigned __int16 v1; // cx
  PVOID ValueData; // [rsp+20h] [rbp-18h]
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 522LL, 1682330192LL);
  if ( Pool2 )
  {
    memset(dword_140C32350, 0, 0xB0uLL);
    wcscpy(&xmmword_140C3232C, L"WdiContextLog");
    dword_140C3237C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C3232C);
    qword_140C323D8 = (__int64)Pool2;
    word_140C323D2 = 520;
    LODWORD(dword_140C32350[0]) = 176;
    LODWORD(ValueData) = 176;
    if ( (int)NtTraceControl(
                3u,
                (unsigned int *)dword_140C32350,
                0xB0u,
                (volatile signed __int64 *)dword_140C32350,
                (SIZE_T)ValueData,
                (unsigned __int64)&v3) < 0
      || (unsigned __int16)word_140C323D0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C323D0 >> 1;
      Pool2[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        Pool2,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
