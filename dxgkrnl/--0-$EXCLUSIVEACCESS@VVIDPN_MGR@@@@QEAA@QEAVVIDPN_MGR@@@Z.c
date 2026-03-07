__int64 __fastcall EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*(_QWORD *)a1 + 40LL));
  return a1;
}
