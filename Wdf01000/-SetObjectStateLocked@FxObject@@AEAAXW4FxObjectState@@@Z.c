void __fastcall FxObject::SetObjectStateLocked(FxObject *this, unsigned int NewState)
{
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v5; // r10

  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqdd(v5, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, NewState);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = NewState;
  }
  this->m_ObjectState = NewState;
}
