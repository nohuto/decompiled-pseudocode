__int64 __fastcall VidSchSetPriorityClassProcess(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rcx

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
  if ( a2 > 5 )
  {
    WdLogSingleEntry2(3LL, (int)a2, -1073741811LL);
    return 3221225485LL;
  }
  if ( a3 )
    *(_BYTE *)(a1 + 2633) = 1;
  *(_DWORD *)(a1 + 24) = a2;
  return 0LL;
}
