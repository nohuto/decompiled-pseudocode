__int64 __fastcall HalEfiSetTime(PLARGE_INTEGER SystemTime)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+28h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-18h] BYREF

  LocalTime.QuadPart = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[1] )
    return 3221225474LL;
  if ( !SystemTime )
    return 3221225485LL;
  HalpEfiIncrementEfiCall(&HalpEfiTimeCalls);
  HalpEfiStartRuntimeCode(1u);
  ((void (__fastcall *)(__int128 *, _QWORD))*HalEfiRuntimeServicesTable)(&v8, 0LL);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  HalpEfiDecrementEfiCall(&HalpEfiTimeCalls);
  result = HalpConvertEfiToNtStatus(v3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)(SWORD6(v8) + 1440LL) > 0xB40 )
    {
      if ( ExpRealTimeIsUniversal )
      {
        LocalTime = *SystemTime;
        WORD6(v8) = 0;
      }
      else
      {
        WORD6(v8) = MEMORY[0xFFFFF78000000020] / 0x23C34600uLL;
        ExSystemTimeToLocalTime(SystemTime, &LocalTime);
        if ( MEMORY[0xFFFFF78000000240] )
        {
          if ( MEMORY[0xFFFFF78000000240] == 1 )
          {
            BYTE14(v8) = 1;
          }
          else if ( MEMORY[0xFFFFF78000000240] == 2 )
          {
            BYTE14(v8) = 3;
          }
          goto LABEL_12;
        }
      }
      BYTE14(v8) = 0;
    }
    else
    {
      LocalTime.QuadPart = SystemTime->QuadPart - 600000000LL * SWORD6(v8);
    }
LABEL_12:
    RtlpTimeToTimeFields((__int64 *)&LocalTime, &v7, v4);
    LOWORD(v8) = v7;
    BYTE2(v8) = BYTE2(v7);
    BYTE3(v8) = BYTE4(v7);
    BYTE4(v8) = BYTE6(v7);
    BYTE5(v8) = BYTE8(v7);
    BYTE6(v8) = BYTE10(v7);
    DWORD2(v8) = 1000000 * SWORD6(v7);
    HalpEfiIncrementEfiCall(&HalpEfiTimeCalls);
    HalpEfiIncrementEfiCall(&HalpEfiTimeWrites);
    HalpEfiStartRuntimeCode(2u);
    ((void (__fastcall *)(__int128 *))HalEfiRuntimeServicesTable[1])(&v8);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFD);
    HalpEfiDecrementEfiCall(&HalpEfiTimeWrites);
    HalpEfiDecrementEfiCall(&HalpEfiTimeCalls);
    return HalpConvertEfiToNtStatus(v5);
  }
  return result;
}
