LARGE_INTEGER __fastcall GetBootSystemTime(__int64 a1, LARGE_INTEGER *a2)
{
  bool v4; // zf
  LARGE_INTEGER v5; // rbx
  __int64 v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  ULONGLONG v10; // r9
  char *v11; // rbx
  unsigned int v12; // edi
  LARGE_INTEGER v13; // rax
  unsigned int v14; // r8d
  LARGE_INTEGER result; // rax
  __int64 *v16; // rbx
  LARGE_INTEGER *p_SystemTime; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER v22; // [rsp+28h] [rbp-20h] BYREF
  __int16 v23[12]; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+70h] [rbp+28h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+78h] [rbp+30h] BYREF
  LARGE_INTEGER v26; // [rsp+80h] [rbp+38h] BYREF
  ULONGLONG pullResult; // [rsp+88h] [rbp+40h] BYREF

  v21 = 0LL;
  v22.QuadPart = 0LL;
  pullResult = 0LL;
  v4 = (*(_BYTE *)(a1 + 2656) & 1) == 0;
  v5 = *(LARGE_INTEGER *)(a1 + 2632);
  *(_OWORD *)v23 = 0LL;
  LocalTime = v5;
  if ( v4 && !ExpRealTimeIsUniversal )
  {
    ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
    v5 = LocalTime;
  }
  v6 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C01C00)(&v21);
  v7 = RtlULongLongMult(v6 - *(_QWORD *)(a1 + 2640), 0x989680uLL, &pullResult);
  v10 = pullResult / v21;
  if ( v7 < 0 )
  {
    v8 = v9 / v21;
    v10 = 10000000 * (v9 / v21) + 10000000 * (v9 % v21) / v21;
  }
  v4 = (*(_BYTE *)(a1 + 2656) & 2) == 0;
  SystemTime.QuadPart = v10 + v5.QuadPart;
  if ( v4 )
  {
    p_SystemTime = &SystemTime;
    if ( !ExpRealTimeIsUniversal )
    {
      ExSystemTimeToLocalTime(&SystemTime, &v22);
      p_SystemTime = &v22;
    }
    RtlpTimeToTimeFields((__int64 *)p_SystemTime, v23, v8);
    HalSetRealTimeClock(v23);
    goto LABEL_16;
  }
  if ( (qword_140C316F8 & 4) != 0 || !HalQueryRealTimeClock((__int64)v23) )
    goto LABEL_16;
  v26.QuadPart = 0LL;
  v11 = (char *)ExLeapSecondData;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    if ( RtlpTimeFieldsToTimeNoLeapSeconds(v23, &SystemTime) )
      goto LABEL_14;
    goto LABEL_16;
  }
  v12 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v20, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v23, &v26) )
    goto LABEL_16;
  v13 = v26;
  v14 = 0;
  if ( !v12 )
    goto LABEL_13;
  v16 = (__int64 *)(v11 + 8);
  while ( 1 )
  {
    v18 = *v16;
    if ( *v16 >= 0 )
    {
      if ( v13.QuadPart < v18 + 10000000 )
      {
        if ( v13.QuadPart < v18 )
          goto LABEL_13;
        v13.QuadPart = 2 * v13.QuadPart - v18;
      }
      else
      {
        v13.QuadPart += 10000000LL;
      }
      goto LABEL_28;
    }
    v19 = v18 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v13.QuadPart < v19 + 10000000 )
      break;
    v13.QuadPart -= 10000000LL;
LABEL_28:
    ++v14;
    ++v16;
    if ( v14 >= v12 )
      goto LABEL_13;
  }
  if ( v13.QuadPart < v19 )
  {
LABEL_13:
    SystemTime = v13;
LABEL_14:
    if ( !ExpRealTimeIsUniversal )
      ExLocalTimeToSystemTime(&SystemTime, &SystemTime);
  }
LABEL_16:
  result = SystemTime;
  *a2 = SystemTime;
  return result;
}
