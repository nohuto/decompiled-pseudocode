__int64 __fastcall FxTagTracker::CreateAndInitialize(
        FxTagTracker **TagTracker,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTagTrackerType Type,
        unsigned __int8 CaptureStack,
        FxObject *Owner)
{
  unsigned int v5; // ebx
  ULONG Tag; // ecx
  void *v11; // rax
  FX_POOL **v12; // rcx
  FxTagTracker *v13; // rax
  __m128i v15; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0;
  Tag = FxDriverGlobals->Tag;
  v15.m128i_i64[0] = 0LL;
  v15.m128i_i64[1] = 64LL;
  v11 = retaddr;
  if ( !FxDriverGlobals->FxPoolTrackingOn )
    v11 = 0LL;
  v12 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v15, 0x500uLL, Tag, v11);
  if ( v12 && (FxTagTracker::FxTagTracker((FxTagTracker *)v12, FxDriverGlobals, Type, CaptureStack, Owner), v13) )
  {
    *TagTracker = v13;
  }
  else
  {
    v5 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxTagTracker_hpp_Traceguids, 0xC000009A);
  }
  return v5;
}
