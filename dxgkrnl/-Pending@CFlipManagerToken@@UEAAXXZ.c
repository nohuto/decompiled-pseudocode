void __fastcall CFlipManagerToken::Pending(CFlipManagerToken *this)
{
  *((_DWORD *)this + 6) = 1;
  (***((void (__fastcall ****)(_QWORD))this + 6))(*((_QWORD *)this + 6));
}
