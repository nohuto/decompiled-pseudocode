__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1);
  if ( !v2 && a1 )
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::~ReferencedGitCookie((__int64)a1);
    operator delete((void *)a1);
  }
  return v2;
}
