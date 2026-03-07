void __fastcall DirectComposition::CSynchronizationInfo::MarkInvalid(DirectComposition::CSynchronizationInfo *this)
{
  *((_BYTE *)this + 8) = 0;
}
