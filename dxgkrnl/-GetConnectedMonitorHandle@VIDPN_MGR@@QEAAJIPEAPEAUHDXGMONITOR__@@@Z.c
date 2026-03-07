__int64 __fastcall VIDPN_MGR::GetConnectedMonitorHandle(VIDPN_MGR *this, unsigned int a2, struct HDXGMONITOR__ **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // r10
  unsigned int MonitorHandle; // edi

  v3 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 15) + 72LL));
  v6 = *((_QWORD *)this + 15);
  if ( IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v6, v3) )
  {
    if ( !v7 )
      WdLogSingleEntry0(1LL);
    MonitorHandle = MonitorGetMonitorHandle(
                      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
                      (unsigned int)v3,
                      0LL,
                      1313891414LL,
                      a3);
  }
  else
  {
    if ( !v7 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, v3, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
    MonitorHandle = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return MonitorHandle;
}
