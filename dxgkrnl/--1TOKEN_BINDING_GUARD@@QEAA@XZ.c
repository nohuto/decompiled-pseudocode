void __fastcall TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD(TOKEN_BINDING_GUARD *this)
{
  char *v2; // rdx

  if ( *(int *)this < 0 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release(*((DXGADAPTERSTOPRESETLOCKSHARED **)this + 2));
    COREDEVICEACCESS::Release(*((COREDEVICEACCESS **)this + 3));
    DxgkCancelSwapChainBinding(*((struct _D3DKMT_PRESENTHISTORYTOKEN **)this + 1));
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(*((DXGADAPTERSTOPRESETLOCKSHARED **)this + 2));
    COREDEVICEACCESS::AcquireSharedUncheck(*((COREDEVICEACCESS **)this + 3), v2);
  }
}
