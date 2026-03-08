/*
 * XREFs of ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00888D0
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x1C0088D28 (FxRegisterBugCheckCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WdmlibProcgrpInitialize @ 0x1C00B24D4 (WdmlibProcgrpInitialize.c)
 */

__int64 __fastcall _FX_DRIVER_TRACKER_CACHE_AWARE::Register(
        _FX_DRIVER_TRACKER_CACHE_AWARE *this,
        _FX_DRIVER_GLOBALS *__formal)
{
  unsigned int v2; // ebx
  unsigned int MaximumProcessorCount; // eax
  ULONG RecommendedSharedDataAlignment; // ebp
  __int64 Pool2; // rax
  void *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx

  v2 = 0;
  if ( !this->m_PoolToFree )
  {
    WdmlibProcgrpInitialize();
    MaximumProcessorCount = PfnKeQueryMaximumProcessorCountEx(0xFFFFu);
    this->m_Number = MaximumProcessorCount;
    if ( MaximumProcessorCount > 0x100 )
      return (unsigned int)-1073741637;
    if ( MaximumProcessorCount <= 1 )
      RecommendedSharedDataAlignment = 8;
    else
      RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
    this->m_EntrySize = RecommendedSharedDataAlignment;
    Pool2 = ExAllocatePool2(64LL, this->m_Number * RecommendedSharedDataAlignment, 1917089862LL);
    v7 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( this->m_Number > 1 )
    {
      v8 = RecommendedSharedDataAlignment - 1;
      if ( (v8 & Pool2) != 0 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        v9 = ExAllocatePool2(64LL, RecommendedSharedDataAlignment * (this->m_Number + 1), 1917089862LL);
        v7 = (void *)v9;
        if ( !v9 )
          return (unsigned int)-1073741670;
        Pool2 = ~v8 & (v8 + v9);
      }
    }
    this->m_DriverUsage = (_FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY *)Pool2;
    v10 = 0;
    for ( this->m_PoolToFree = v7;
          v10 < this->m_Number;
          *(_FX_DRIVER_GLOBALS *volatile *)((char *)&this->m_DriverUsage->FxDriverGlobals + v11) = 0LL )
    {
      v11 = this->m_EntrySize * v10++;
    }
  }
  return v2;
}
