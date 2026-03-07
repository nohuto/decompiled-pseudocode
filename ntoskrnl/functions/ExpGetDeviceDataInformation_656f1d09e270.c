__int64 __fastcall ExpGetDeviceDataInformation(int a1, unsigned __int64 a2, int a3)
{
  void *Pool2; // rsi
  int v6; // ebx
  unsigned int v7; // ebx
  int DeviceData; // eax
  unsigned int v9; // ecx
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T Length[2]; // [rsp+60h] [rbp-28h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF
  PVOID v15; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)Length = 0LL;
  P = 0LL;
  v15 = 0LL;
  Pool2 = 0LL;
  if ( !a2 || a3 != 48 )
    return 3221225476LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 48 > 0x7FFFFFFF0000LL || a2 + 48 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v11 = *(_OWORD *)a2;
  v12 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)Length = *(_OWORD *)(a2 + 32);
  v6 = ExpStringCapture(&P, &v11);
  if ( v6 >= 0 )
  {
    if ( a1 != 136 || (v6 = ExpStringCapture(&v15, &v12), v6 >= 0) )
    {
      if ( HIDWORD(Length[0]) )
      {
        if ( !Length[1] )
        {
          v6 = -1073741811;
          goto LABEL_21;
        }
        v7 = HIDWORD(Length[0]);
        ProbeForWrite((volatile void *)Length[1], HIDWORD(Length[0]), 2u);
        Pool2 = (void *)ExAllocatePool2(257LL, v7, 1313424452LL);
        if ( !Pool2 )
        {
          v6 = -1073741801;
          goto LABEL_21;
        }
      }
      if ( a1 == 136 )
        DeviceData = KseQueryDeviceData((WCHAR *)P, (__int64)v15, Length, (unsigned int *)Length + 1, Pool2);
      else
        DeviceData = KseQueryDeviceDataList((wchar_t *)P, (__int64)Pool2, HIDWORD(Length[0]), (__int64)Length + 4);
      v6 = DeviceData;
      v9 = HIDWORD(Length[0]);
      *(_QWORD *)(a2 + 32) = Length[0];
      if ( DeviceData >= 0 )
        memmove((void *)Length[1], Pool2, v9);
    }
  }
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0x50535845u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x50535845u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4E494444u);
  return (unsigned int)v6;
}
