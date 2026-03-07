__int64 __fastcall VidSchSetQueuedPresentLimit(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(a1 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, a1, -1071775232LL);
      return 3223192064LL;
    }
    else
    {
      if ( !a2 )
        a2 = *(_DWORD *)(v2 + 2560);
      *(_DWORD *)(a1 + 244) = a2;
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
}
