__int64 __fastcall XWinRT::SecureVersionTag::TagManager::ChangeVersion(XWinRT::SecureVersionTag::Tag **this)
{
  XWinRT::SecureVersionTag::Tag *v3; // rax
  XWinRT::SecureVersionTag::Tag *v4; // rbx

  if ( *(int *)*this <= 1 )
    return 0LL;
  v3 = (XWinRT::SecureVersionTag::Tag *)DefaultHeap::Alloc(4uLL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 1;
    XWinRT::SecureVersionTag::Tag::Release(*this);
    *this = v4;
    return 0LL;
  }
  return 2147942414LL;
}
