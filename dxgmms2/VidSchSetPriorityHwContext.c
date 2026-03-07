__int64 __fastcall VidSchSetPriorityHwContext(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx

  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v7 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v7, -1071775232LL);
      return 3223192064LL;
    }
    else
    {
      *(_DWORD *)(a1 + 68) = a2;
      *(_DWORD *)(a1 + 76) = a4;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
}
