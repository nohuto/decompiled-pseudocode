void __fastcall FxDmaEnabler::ReleaseResources(FxDmaEnabler *this)
{
  FxDmaEnabler *v2; // rcx

  FxDmaEnabler::FreeResources(this, &this->m_SimplexAdapterInfo);
  FxDmaEnabler::FreeResources(
    v2,
    (_FxDmaDescription *)((char *)this + ((*((_BYTE *)this + 380) & 0x10) != 0 ? 280LL : 184LL)));
  *((_BYTE *)this + 380) &= ~2u;
}
