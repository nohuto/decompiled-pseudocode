/*
 * XREFs of ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C009516C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00951F4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C0095298 (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C0211064 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0212800 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0212ECC (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

void __fastcall DirectComposition::CProcessData::~CProcessData(
        DirectComposition::CProcessData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DirectComposition::CCompClockInfo *v5; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  unsigned int v7; // edx
  DirectComposition::CConnection *v8; // rdi

  if ( *((_DWORD *)this + 12) || *((_DWORD *)this + 13) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)this, a2, a3, a4);
    v8 = DefaultConnection;
    if ( DefaultConnection )
    {
      if ( *((_DWORD *)this + 12) )
        DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      if ( *((_DWORD *)this + 13) )
        DirectComposition::CConnection::BoostCompositorClock(v8, 0);
      DirectComposition::CConnection::Release(v8, v7);
    }
  }
  v5 = (DirectComposition::CCompClockInfo *)*((_QWORD *)this + 5);
  if ( v5 )
    DirectComposition::CCompClockInfo::Release(v5);
  DirectComposition::CChannel::OnProcessDestruction(this);
  DirectComposition::CConnection::OnProcessDestruction(this);
}
