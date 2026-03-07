__int64 __fastcall DxgkGetDeviceState(__int64 a1)
{
  __int64 v2; // rdx

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    v2 = 1LL;
  else
    LOBYTE(v2) = 0;
  return DxgkGetDeviceStateInternal(a1, v2);
}
