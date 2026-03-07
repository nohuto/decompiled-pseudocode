BOOLEAN __fastcall I_MinAsn1AdjustFileTime(__int64 *a1, __int16 a2, char a3)
{
  __int16 v5; // ax
  __int16 v6; // r10
  BOOLEAN result; // al
  __int64 v8; // rcx
  LONGLONG v9; // rcx
  TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp+28h] BYREF

  Time.QuadPart = 0LL;
  if ( a3 || !a2 )
    return 1;
  v5 = abs16(a2);
  *(_DWORD *)&TimeFields.Year = 67137;
  TimeFields.Day = 1;
  v6 = v5 / 60;
  TimeFields.Hour = v5 / 60;
  *(_QWORD *)&TimeFields.Minute = (unsigned __int16)(v5 % 60);
  if ( v5 / 60 >= 24 )
  {
    TimeFields.Day = v6 / 24 + 1;
    TimeFields.Hour = v6 % 24;
  }
  result = RtlTimeFieldsToTime(&TimeFields, &Time);
  if ( result )
  {
    v8 = *a1;
    if ( a2 <= 0 )
      v9 = v8 - Time.QuadPart;
    else
      v9 = Time.QuadPart + v8;
    *a1 = v9;
  }
  return result;
}
