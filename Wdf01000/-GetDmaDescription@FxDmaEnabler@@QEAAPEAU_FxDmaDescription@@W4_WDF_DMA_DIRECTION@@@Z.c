$2CC3FC5F0458F7DBA3F7D6DD9579F542 *__fastcall FxDmaEnabler::GetDmaDescription(
        FxDmaEnabler *this,
        _WDF_DMA_DIRECTION Direction)
{
  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
    return ($2CC3FC5F0458F7DBA3F7D6DD9579F542 *)((char *)&this->184 + 96 * Direction);
  else
    return &this->184;
}
