void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  CFrameInfo::ReleaseResponses(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
}
