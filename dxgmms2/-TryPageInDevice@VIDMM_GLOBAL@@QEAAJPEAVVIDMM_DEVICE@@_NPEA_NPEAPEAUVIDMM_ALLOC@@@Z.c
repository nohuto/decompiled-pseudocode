__int64 __fastcall VIDMM_GLOBAL::TryPageInDevice(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  int v9; // ebx

  VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 116);
  v9 = VIDMM_GLOBAL::PageInDeviceInternal(this, a2, a3, a4, a5);
  VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( v9 >= 0 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
  return (unsigned int)v9;
}
