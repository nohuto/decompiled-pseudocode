__int64 __fastcall GetDPIServerInfoForDpi(int a1)
{
  int DpiCacheSlot; // eax
  int v3; // r10d
  __int64 v4; // r11
  int v5; // ecx
  struct tagDPISERVERINFO *v6; // rbx

  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( a1 == 96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot(a1);
  v5 = 0;
  if ( DpiCacheSlot != -1 )
    v5 = DpiCacheSlot;
  v6 = (struct tagDPISERVERINFO *)(v4 + 104 * (v5 + 49LL));
  EnsureServerInfoForDpi(v6, v3);
  return (__int64)v6;
}
