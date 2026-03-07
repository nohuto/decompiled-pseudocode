__int64 __fastcall FxPkgPnp::NotifyResourceObjectsD0(FxPkgPnp *this, unsigned int NotifyFlags)
{
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY *i; // rbx
  int _a2; // esi
  const void *_a1; // rax

  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_InterruptListHead )
      return 0LL;
    _a2 = FxInterrupt::Connect((FxInterrupt *)&i[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
      break;
  }
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)&i[-28].Blink);
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x51u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  return (unsigned int)_a2;
}
