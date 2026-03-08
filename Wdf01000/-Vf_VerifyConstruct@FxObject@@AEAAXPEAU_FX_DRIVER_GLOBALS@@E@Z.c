/*
 * XREFs of ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BAD54
 * Callers:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0001E58 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C00460E8 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 */

void __fastcall FxObject::Vf_VerifyConstruct(
        FxObject *this,
        _FX_DRIVER_GLOBALS *Embedded,
        unsigned __int8 FxDriverGlobals)
{
  if ( this->m_Globals->FxVerifierHandle )
  {
    if ( !FxDriverGlobals )
    {
      this->m_ObjectFlags |= 0x80u;
      this[-1].m_ChildEntry.Flink = 0LL;
      LODWORD(this[-1].m_ChildEntry.Blink) = 0;
      LOBYTE(this[-1].m_ChildEntry.Flink) = 1;
      FxObject::AllocateTagTracker(this, this->m_Type);
    }
  }
}
