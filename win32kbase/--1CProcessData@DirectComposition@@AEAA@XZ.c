void __fastcall DirectComposition::CProcessData::~CProcessData(DirectComposition::CProcessData *this, unsigned int a2)
{
  DirectComposition::CCompClockInfo *v3; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v5; // rdi

  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)this);
    v5 = DefaultConnection;
    if ( DefaultConnection )
    {
      if ( *((_DWORD *)this + 16) )
        DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      if ( *((_DWORD *)this + 17) )
        DirectComposition::CConnection::BoostCompositorClock(v5, 0);
      DirectComposition::CConnection::Release(v5, a2);
    }
  }
  v3 = (DirectComposition::CCompClockInfo *)*((_QWORD *)this + 7);
  if ( v3 )
    DirectComposition::CCompClockInfo::Release(v3, a2);
  DirectComposition::CChannel::OnProcessDestruction(this);
  DirectComposition::CConnection::OnProcessDestruction(this);
}
