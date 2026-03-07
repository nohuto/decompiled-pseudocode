void __fastcall FxDmaEnabler::~FxDmaEnabler(FxDmaEnabler *this, unsigned int a2)
{
  char v3; // al

  this->__vftable = (FxDmaEnabler_vtbl *)FxDmaEnabler::`vftable';
  v3 = *((_BYTE *)this + 380);
  if ( (v3 & 0x20) != 0 )
  {
    if ( (v3 & 8) != 0 )
    {
      ExDeleteNPagedLookasideList(&this->m_SGList.ScatterGatherProfile.Lookaside);
    }
    else if ( (v3 & 4) == 0 )
    {
      ExFreePoolWithTag(this->m_SGList.ScatterGatherProfile.Lookaside.L.SingleListHead.Next, 0);
    }
    *((_BYTE *)this + 380) &= ~0x20u;
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
