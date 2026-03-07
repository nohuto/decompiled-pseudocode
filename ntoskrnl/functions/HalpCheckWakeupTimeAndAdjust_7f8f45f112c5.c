char HalpCheckWakeupTimeAndAdjust()
{
  signed __int64 v0; // rax
  char *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  char *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-50h] BYREF
  signed __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  __int16 v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF
  signed __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v0) = HalpPlatformFlags;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (HalpPlatformFlags & 4) != 0 )
  {
    if ( HIBYTE(HalpWakeupState) )
    {
      LOBYTE(v0) = HalQueryRealTimeClock((__int64)&v18);
      if ( (_BYTE)v0 )
      {
        v1 = (char *)ExLeapSecondData;
        v21 = 0LL;
        if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
        {
          RtlpTimeFieldsToTimeNoLeapSeconds((__int16 *)&v18, &v20);
          goto LABEL_21;
        }
        v2 = *((_DWORD *)ExLeapSecondData + 1);
        _InterlockedOr(v16, 0);
        if ( RtlpTimeFieldsToTimeNoLeapSeconds((__int16 *)&v18, &v21) )
        {
          v3 = v21;
          v4 = 0;
          if ( !v2 )
            goto LABEL_19;
          v5 = (__int64 *)(v1 + 8);
          while ( 1 )
          {
            v6 = *v5;
            if ( *v5 < 0 )
            {
              v7 = v6 & 0x7FFFFFFFFFFFFFFFLL;
              if ( v3 < v7 + 10000000 )
              {
                if ( v3 < v7 )
LABEL_19:
                  v20 = v3;
                break;
              }
              v3 -= 10000000LL;
            }
            else if ( v3 < v6 + 10000000 )
            {
              if ( v3 < v6 )
                goto LABEL_19;
              v3 = 2 * v3 - v6;
            }
            else
            {
              v3 += 10000000LL;
            }
            ++v4;
            v21 = v3;
            ++v5;
            if ( v4 >= v2 )
              goto LABEL_19;
          }
        }
LABEL_21:
        v8 = (char *)ExLeapSecondData;
        v22 = 0LL;
        if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
        {
          RtlpTimeFieldsToTimeNoLeapSeconds((__int16 *)&xmmword_140C60462, &v17);
          goto LABEL_38;
        }
        v9 = *((_DWORD *)ExLeapSecondData + 1);
        _InterlockedOr(v16, 0);
        if ( !RtlpTimeFieldsToTimeNoLeapSeconds((__int16 *)&xmmword_140C60462, &v22) )
          goto LABEL_38;
        v0 = v22;
        v10 = 0LL;
        if ( v9 )
        {
          v11 = (__int64 *)(v8 + 8);
          do
          {
            v12 = *v11;
            if ( *v11 < 0 )
            {
              v13 = v12 & 0x7FFFFFFFFFFFFFFFLL;
              if ( v0 < v13 + 10000000 )
              {
                if ( v0 < v13 )
                  break;
LABEL_38:
                v0 = v17;
                break;
              }
              v0 -= 10000000LL;
            }
            else if ( v0 < v12 + 10000000 )
            {
              if ( v0 < v12 )
                break;
              v0 = 2 * v0 - v12;
            }
            else
            {
              v0 += 10000000LL;
            }
            v10 = (unsigned int)(v10 + 1);
            ++v11;
          }
          while ( (unsigned int)v10 < v9 );
        }
        if ( v0 <= (unsigned __int64)(v20 + 300000000) )
        {
          v20 += 300000000LL;
          RtlpTimeToTimeFields(&v20, &v18, v10);
          xmmword_140C60462 = v18;
          HalpSetWakeAlarm(v14, (unsigned __int8 *)&v18);
          LOBYTE(v0) = 0;
          v19 = 1024;
          if ( PmRegisters[0] )
            LOBYTE(v0) = HalpAcpiPmRegisterWrite(0, 0, (__int64)&v19, 2u, 0LL);
          if ( byte_140C60190 )
            LOBYTE(v0) = HalpAcpiPmRegisterWrite(3, 0, (__int64)&v19, 2u, 0LL);
        }
      }
    }
  }
  return v0;
}
