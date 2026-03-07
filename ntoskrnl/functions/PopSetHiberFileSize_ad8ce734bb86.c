__int64 __fastcall PopSetHiberFileSize(unsigned int a1, _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( a1 > 0x64 )
    return 3221225485LL;
  v3 = PopHiberFileSizePercent;
  PopHiberFileSizePercent = a1;
  PopCalculateHiberFileSize(&v6, 0LL);
  v4 = v6;
  result = PopValidateHiberFileSize(v6, 0LL);
  if ( (int)result < 0
    || (unsigned int)PopHiberFileSizePercent >= 0x28 && (result = PopSetHiberFileType(2LL, 0LL), (int)result < 0)
    || (result = PopSetHiberPersistedRegValue(1LL), (int)result < 0) )
  {
    PopHiberFileSizePercent = v3;
  }
  else if ( a2 )
  {
    *a2 = v4;
  }
  return result;
}
