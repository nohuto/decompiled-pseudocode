__int64 __fastcall FxPkgPnp::NotifyResourceObjectsDx(FxPkgPnp *this, unsigned int NotifyFlags)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_InterruptListHead; // rsi
  unsigned int v6; // ebp
  int _a2; // r14d
  const void *_a1; // rax

  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v6 = 0;
  while ( Blink != p_m_InterruptListHead )
  {
    _a2 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)&Blink[-28].Blink);
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x52u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
      v6 = _a2;
    }
    Blink = Blink->Blink;
  }
  return v6;
}
