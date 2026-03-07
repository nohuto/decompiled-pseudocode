__int64 __fastcall HalEfiGetTime(PLARGE_INTEGER SystemTime)
{
  __int64 v3; // r8
  int v4; // r14d
  char *v5; // rbx
  unsigned int v6; // esi
  LARGE_INTEGER v7; // rax
  unsigned int v8; // r8d
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-60h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-40h] BYREF
  __int16 v14[8]; // [rsp+28h] [rbp-38h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF

  LocalTime.QuadPart = 0LL;
  v16 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable )
    return 3221225474LL;
  if ( !SystemTime )
    return 3221225485LL;
  HalpEfiIncrementEfiCall(&HalpEfiTimeCalls);
  HalpEfiStartRuntimeCode(1u);
  ((void (__fastcall *)(__int128 *, _QWORD))*HalEfiRuntimeServicesTable)(&v16, 0LL);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  HalpEfiDecrementEfiCall(&HalpEfiTimeCalls);
  v4 = HalpConvertEfiToNtStatus(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v15.QuadPart = 0LL;
  v5 = (char *)ExLeapSecondData;
  v14[0] = v16;
  v14[1] = BYTE2(v16);
  v14[2] = BYTE3(v16);
  v14[3] = BYTE4(v16);
  v14[4] = BYTE5(v16);
  v14[5] = BYTE6(v16);
  v14[6] = DWORD2(v16) / 0xF4240;
  v14[7] = 7;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    if ( RtlpTimeFieldsToTimeNoLeapSeconds(v14, &LocalTime) )
    {
      v7 = LocalTime;
      goto LABEL_25;
    }
    return (unsigned int)-1073741823;
  }
  v6 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v12, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v14, &v15) )
    return (unsigned int)-1073741823;
  v7 = v15;
  v8 = 0;
  if ( !v6 )
    goto LABEL_21;
  v9 = (__int64 *)(v5 + 8);
  do
  {
    v10 = *v9;
    if ( *v9 >= 0 )
    {
      if ( v7.QuadPart < v10 + 10000000 )
      {
        if ( v7.QuadPart < v10 )
          goto LABEL_21;
        v7.QuadPart = 2 * v7.QuadPart - v10;
      }
      else
      {
        v7.QuadPart += 10000000LL;
      }
      goto LABEL_18;
    }
    v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v7.QuadPart < v11 + 10000000 )
      break;
    v7.QuadPart -= 10000000LL;
LABEL_18:
    ++v8;
    ++v9;
  }
  while ( v8 < v6 );
  if ( v7.QuadPart >= v11 )
    return (unsigned int)-1073741823;
LABEL_21:
  LocalTime = v7;
LABEL_25:
  if ( (unsigned int)(SWORD6(v16) + 1440) > 0xB40 )
    ExLocalTimeToSystemTime(&LocalTime, SystemTime);
  else
    SystemTime->QuadPart = v7.QuadPart + 600000000LL * SWORD6(v16);
  return (unsigned int)v4;
}
