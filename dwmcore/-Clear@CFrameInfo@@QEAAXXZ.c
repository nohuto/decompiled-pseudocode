void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  memset_0(this, 0, 0xB0uLL);
  CFrameInfo::ReleaseResponses(this);
}
