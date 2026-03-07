__int64 __fastcall DXGGLOBAL::CsExitInitiatedWnfSubscription(DXGGLOBAL *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = WNF_PO_MODERN_STANDBY_EXIT_INITIATED;
  v1 = ExSubscribeWnfStateChange((char *)this + 1920, &v4, 1LL);
  v2 = v1;
  if ( v1 < 0 )
    WdLogSingleEntry1(3LL, v1);
  return v2;
}
