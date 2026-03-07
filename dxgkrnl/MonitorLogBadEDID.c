__int64 __fastcall MonitorLogBadEDID(int a1)
{
  __int64 result; // rax

  result = 3223126025LL;
  if ( a1 <= -1071841271 )
  {
    if ( a1 != -1071841271
      && a1 != -1071841278
      && a1 != -1071841277
      && a1 != -1071841276
      && a1 != -1071841275
      && a1 != -1071841274
      && a1 != -1071841273
      && a1 != -1071841272 )
    {
      return result;
    }
LABEL_17:
    if ( byte_1C013BBD0 )
      return WdLogSingleEntry1(2LL, a1);
    return result;
  }
  if ( a1 == -1071841270
    || a1 == -1071774966
    || a1 == -1071774965
    || a1 == -1071774942
    || a1 == -1071774889
    || a1 == -1071774888 )
  {
    goto LABEL_17;
  }
  return result;
}
