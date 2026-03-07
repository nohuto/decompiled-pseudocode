__int64 __fastcall CProjectedShadowReceiver::ProcessSetDrawOrder(
        CProjectedShadowReceiver *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 24) != v3 )
  {
    *((_DWORD *)this + 24) = v3;
    CProjectedShadowReceiver::RequestRedraw(this);
  }
  return 0LL;
}
