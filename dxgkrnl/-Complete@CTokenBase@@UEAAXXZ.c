void __fastcall CTokenBase::Complete(CTokenBase *this)
{
  *((_DWORD *)this + 6) = 2;
}
