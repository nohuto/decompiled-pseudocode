void __fastcall FxVerifierLock::AllocateThreadTable(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // bp
  bool v4; // zf
  ULONG Tag; // ecx
  __int64 v6; // rsi
  void *v7; // rax
  FX_POOL **v8; // rax
  _LIST_ENTRY *v9; // rcx
  __m128i v10; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  p_m_Lock = &FxDriverGlobals->ThreadTableLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&FxDriverGlobals->ThreadTableLock.m_Lock);
  if ( !FxDriverGlobals->ThreadTable )
  {
    v4 = FxDriverGlobals->FxPoolTrackingOn == 0;
    Tag = FxDriverGlobals->Tag;
    v6 = 64LL;
    v10.m128i_i64[0] = 0LL;
    v10.m128i_i64[1] = 64LL;
    if ( v4 )
      v7 = 0LL;
    else
      v7 = retaddr;
    v8 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v10, 0x400uLL, Tag, v7);
    v9 = (_LIST_ENTRY *)v8;
    if ( !v8 )
    {
      KeReleaseSpinLock(p_m_Lock, v3);
      WPP_IFR_SF_(FxDriverGlobals, 2u, 0x12u, 0x19u, WPP_FxVerifierLock_cpp_Traceguids);
      return;
    }
    do
    {
      v8[1] = (FX_POOL *)v8;
      *v8 = (FX_POOL *)v8;
      v8 += 2;
      --v6;
    }
    while ( v6 );
    FxDriverGlobals->ThreadTable = v9;
  }
  KeReleaseSpinLock(p_m_Lock, v3);
}
