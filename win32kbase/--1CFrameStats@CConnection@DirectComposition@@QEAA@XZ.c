void __fastcall DirectComposition::CConnection::CFrameStats::~CFrameStats(
        DirectComposition::CConnection::CFrameStats *this)
{
  DirectComposition::CConnection::CFrameStats::FreeTargetPool(this);
}
