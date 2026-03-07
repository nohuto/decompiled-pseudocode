NTSTATUS DpiKsrSetBootGraphicsInformation()
{
  __int64 SystemInformation; // [rsp+20h] [rbp-30h] BYREF
  int v2; // [rsp+28h] [rbp-28h]
  __int64 v3; // [rsp+2Ch] [rbp-24h]
  __int64 v4; // [rsp+34h] [rbp-1Ch]
  int v5; // [rsp+3Ch] [rbp-14h]

  v4 = 0LL;
  v5 = 0;
  v2 = xmmword_1C013B750;
  v3 = DWORD1(xmmword_1C013B750);
  SystemInformation = xmmword_1C013B760;
  if ( HIDWORD(xmmword_1C013B750) == 20 )
  {
    HIDWORD(v4) = 3;
    HIDWORD(v3) = DWORD2(xmmword_1C013B750) / 3;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  if ( HIDWORD(xmmword_1C013B750) == 21 || HIDWORD(xmmword_1C013B750) == 22 )
  {
    HIDWORD(v4) = 4;
    goto LABEL_8;
  }
  if ( (unsigned int)(HIDWORD(xmmword_1C013B750) - 32) < 2 )
  {
    HIDWORD(v4) = 2;
LABEL_8:
    HIDWORD(v3) = DWORD2(xmmword_1C013B750) >> 2;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  HIDWORD(v4) = 0;
  return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
}
