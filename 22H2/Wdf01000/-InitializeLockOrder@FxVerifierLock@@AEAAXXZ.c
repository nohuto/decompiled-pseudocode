/*
 * XREFs of ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C005A8FC
 * Callers:
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C003167C (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C004D3D4 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x1C0039220 (WPP_IFR_SF_D.c)
 */

void __fastcall FxVerifierLock::InitializeLockOrder(FxVerifierLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxVerifierOrderMapping *v2; // rdx
  unsigned int m_Type; // ecx
  unsigned __int16 ObjectLockOrder; // ax

  m_Globals = this->m_Globals;
  v2 = FxVerifierCallbackOrderTable;
  m_Type = this->m_ParentObject->m_Type;
  if ( !this->m_CallbackLock )
    v2 = FxVerifierOrderTable;
  while ( 1 )
  {
    if ( !v2->ObjectType )
    {
      WPP_IFR_SF_D(m_Globals, (unsigned __int8)v2, 0x12u, 0x13u, WPP_FxVerifierLock_cpp_Traceguids, m_Type);
      ObjectLockOrder = -1;
      goto LABEL_8;
    }
    if ( v2->ObjectType == (_WORD)m_Type )
      break;
    ++v2;
  }
  ObjectLockOrder = v2->ObjectLockOrder;
LABEL_8:
  this->m_Order = ObjectLockOrder;
}
