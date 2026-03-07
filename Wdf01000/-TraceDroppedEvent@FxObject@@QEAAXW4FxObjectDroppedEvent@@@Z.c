void __fastcall FxObject::TraceDroppedEvent(FxObject *this, FxObjectDroppedEvent Event)
{
  const void *_a2; // rax
  __int64 _a1; // r10
  unsigned int _a4; // edx

  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqdd(
      *(_FX_DRIVER_GLOBALS **)(_a1 + 16),
      4u,
      0x14u,
      0xBu,
      WPP_FxObject_hpp_Traceguids,
      (const void *)_a1,
      _a2,
      *(unsigned __int16 *)(_a1 + 26),
      _a4);
  }
}
