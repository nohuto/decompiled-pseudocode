__int64 __fastcall CLegacyRenderTarget::ProcessUpdateSDRToHDRMultiplier(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER *a3)
{
  CLegacyRenderTarget::SetSDRBoost(this, *((float *)a3 + 2));
  return 0LL;
}
