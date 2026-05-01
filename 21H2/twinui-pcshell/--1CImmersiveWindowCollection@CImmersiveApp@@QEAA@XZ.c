/*
 * XREFs of ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x1801E99FC
 * Callers:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x1801E9868 (--1CImmersiveApp@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EE690 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::~CImmersiveWindowCollection(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 33) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 32) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 33) );
      v2 = (void *)*((_QWORD *)this + 32);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 32) = 0LL;
  }
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((char *)this + 248);
  v4 = (void *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 21) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 22) );
      v4 = (void *)*((_QWORD *)this + 21);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
}
