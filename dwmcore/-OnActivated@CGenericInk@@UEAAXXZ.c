void __fastcall CGenericInk::OnActivated(CGenericInk *this)
{
  *((_BYTE *)this + 96) = 0;
}
