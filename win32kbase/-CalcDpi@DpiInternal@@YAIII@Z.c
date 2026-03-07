__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, int a2)
{
  if ( a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  WdLogSingleEntry0(1LL);
  return 0LL;
}
