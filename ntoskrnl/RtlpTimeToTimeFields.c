/*
 * XREFs of RtlpTimeToTimeFields @ 0x1402D14C8
 * Callers:
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 *     HalpSetVirtualRtc @ 0x1402D13F0 (HalpSetVirtualRtc.c)
 *     RtlTimeToTimeFields @ 0x1402D14B0 (RtlTimeToTimeFields.c)
 *     HalpQueryVirtualRtc @ 0x1405094B0 (HalpQueryVirtualRtc.c)
 *     HalEfiSetTime @ 0x14050AE70 (HalEfiSetTime.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140519F14 (HalpCheckWakeupTimeAndAdjust.c)
 *     WheapGetTimestamp @ 0x14060FFA4 (WheapGetTimestamp.c)
 *     GetBootSystemTime @ 0x140B70018 (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1402D15A4 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2, __int64 a3)
{
  char *v3; // r8
  unsigned int v5; // r11d
  __int64 v6; // rax
  int v7; // r9d
  unsigned int v8; // r10d
  int v9; // ebx
  __int64 v10; // rax
  __int16 result; // ax
  __int64 *v12; // r8
  __int64 v13; // rdx
  signed __int32 v14[8]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  v16 = a3;
  v3 = (char *)ExLeapSecondData;
  v15 = 0LL;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
    return ((__int64 (*)(void))RtlpTimeToTimeFieldsNoLeapSeconds)();
  v5 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v14, 0);
  v6 = *a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    v12 = (__int64 *)(v3 + 8);
    do
    {
      v13 = *v12;
      if ( *v12 < 0 )
      {
        if ( v6 < (v13 & 0x7FFFFFFFFFFFFFFFLL) )
          break;
        --v7;
      }
      else if ( v6 < v13 + 20000000 )
      {
        if ( v6 < v13 + 10000000 )
        {
          if ( v6 < v13 || v6 >= v13 + 10000000 )
            break;
          v9 |= 4u;
        }
        else
        {
          v9 |= 2u;
        }
      }
      else
      {
        ++v7;
      }
      ++v8;
      ++v12;
    }
    while ( v8 < v5 );
  }
  v10 = v6 - 10000000LL * v7;
  v16 = v10;
  if ( (v9 & 2) != 0 )
    v16 = v10 - 10000000;
  result = RtlpTimeToTimeFieldsNoLeapSeconds(&v16, &v15);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
      ++WORD5(v15);
  }
  else
  {
    if ( (v9 & 4) != 0 )
    {
      result = SWORD6(v15) / 2;
      SWORD6(v15) /= 2;
    }
    else
    {
      result = WORD6(v15);
    }
    if ( (v9 & 2) != 0 )
    {
      result = result / 2 + 500;
      WORD6(v15) = result;
    }
  }
  *a2 = v15;
  return result;
}
