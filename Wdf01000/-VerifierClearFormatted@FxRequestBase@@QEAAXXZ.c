/*
 * XREFs of ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C003FBA8
 * Callers:
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0002238 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0006D6C (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C003A8B8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::VerifierClearFormatted(FxRequestBase *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::ClearVerifierFlags(this, 128, a3);
  }
}
