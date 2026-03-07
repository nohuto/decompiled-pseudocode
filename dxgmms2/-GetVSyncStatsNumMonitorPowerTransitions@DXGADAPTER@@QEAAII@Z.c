__int64 __fastcall DXGADAPTER::GetVSyncStatsNumMonitorPowerTransitions(DXGADAPTER *this, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v7; // rdx

  v2 = *((_DWORD *)this + 418);
  v4 = a2;
  if ( a2 >= v2 )
  {
    v5 = a2;
    WdLogSingleEntry2(2LL, a2, v2);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId:%u. Should be less than :%u",
      v5,
      *((unsigned int *)this + 418),
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  v7 = *((_QWORD *)this + 527);
  if ( !v7 )
    return 0LL;
  if ( (*((_DWORD *)this + 698) & 0x10) != 0 )
    return *(unsigned int *)(112 * v4 + v7 + 8);
  else
    return *(unsigned int *)(v7 + 8);
}
