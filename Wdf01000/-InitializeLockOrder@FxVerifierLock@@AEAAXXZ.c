/*
 * XREFs of ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C0046C04
 * Callers:
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001AABC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0038B94 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

void __fastcall FxVerifierLock::InitializeLockOrder(FxVerifierLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int16 ObjectType; // r8
  unsigned int _a1; // r9d
  FxVerifierOrderMapping *v5; // rax
  unsigned __int16 v6; // cx
  unsigned __int16 ObjectLockOrder; // cx

  m_Globals = this->m_Globals;
  ObjectType = FxVerifierOrderTable[0].ObjectType;
  _a1 = this->m_ParentObject->m_Type;
  v5 = FxVerifierCallbackOrderTable;
  if ( this->m_CallbackLock )
    ObjectType = FxVerifierCallbackOrderTable[0].ObjectType;
  else
    v5 = FxVerifierOrderTable;
  if ( ObjectType )
  {
    v6 = v5->ObjectType;
    while ( v6 != (_WORD)_a1 )
    {
      ++v5;
      v6 = v5->ObjectType;
      if ( !v5->ObjectType )
        goto LABEL_8;
    }
    ObjectLockOrder = v5->ObjectLockOrder;
  }
  else
  {
LABEL_8:
    WPP_IFR_SF_D(m_Globals, 4u, 0x12u, 0x13u, WPP_FxVerifierLock_cpp_Traceguids, _a1);
    ObjectLockOrder = -1;
  }
  this->m_Order = ObjectLockOrder;
}
