CIFlipPresentHistoryToken *__fastcall CIFlipPresentHistoryToken::CIFlipPresentHistoryToken(
        CIFlipPresentHistoryToken *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  *(_OWORD *)this = 0LL;
  if ( a2->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    if ( this )
    {
      *(_QWORD *)this = &CIFlipPresentHistoryTokenRedirectedFlip::`vftable';
      *((_QWORD *)this + 1) = &a2->Token;
    }
  }
  else if ( a2->Model == D3DKMT_PM_FLIPMANAGER && this )
  {
    *(_QWORD *)this = &CIFlipPresentHistoryTokenFlipManager::`vftable';
    FlipManagerTokenObject::LockForWrite((char *)a2->Token.Flip.FenceValue, (struct CFlipManagerToken **)this + 1);
  }
  return this;
}
