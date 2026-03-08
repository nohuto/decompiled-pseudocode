/*
 * XREFs of ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C001BAA8
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C006E4DC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x1C001C218 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerUp(FxDmaEnabler *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int level; // edi
  unsigned __int64 ObjectHandleUnchecked; // rbp
  const void *_a1; // rax
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int v7; // eax
  int (__fastcall *v8)(WDFDMAENABLER__ *); // rax
  int v9; // eax
  int (__fastcall *v10)(WDFDMAENABLER__ *); // rax
  int v11; // eax
  const void *v12; // rax
  int globals; // edx
  unsigned int v14; // r8d

  m_Globals = this->m_Globals;
  level = 0;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x18u, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  }
  m_Method = this->m_EvtDmaEnablerFill.m_Method;
  if ( m_Method )
  {
    v7 = m_Method((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerFill.m_Status = v7;
    level = v7;
    if ( v7 < 0 )
    {
      this->m_DmaEnablerFillFailed = 1;
LABEL_12:
      v12 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qld(m_Globals, globals, v14, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, v12, globals, level);
      return level;
    }
  }
  v8 = this->m_EvtDmaEnablerEnable.m_Method;
  if ( v8 )
  {
    v9 = v8((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerEnable.m_Status = v9;
    level = v9;
    if ( v9 < 0 )
    {
      this->m_DmaEnablerEnableFailed = 1;
      goto LABEL_12;
    }
  }
  v10 = this->m_EvtDmaEnablerSelfManagedIoStart.m_Method;
  if ( v10 )
  {
    v11 = v10((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = v11;
    level = v11;
    if ( v11 < 0 )
    {
      this->m_DmaEnablerSelfManagedIoStartFailed = 1;
      goto LABEL_12;
    }
  }
  return level;
}
