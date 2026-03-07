void __fastcall CTokenBase::Confirm(CTokenBase *this)
{
  *((_DWORD *)this + 6) = 4;
}
