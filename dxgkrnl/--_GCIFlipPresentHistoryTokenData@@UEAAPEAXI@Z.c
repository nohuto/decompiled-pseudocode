CIFlipPresentHistoryTokenData *__fastcall CIFlipPresentHistoryTokenData::`scalar deleting destructor'(
        CIFlipPresentHistoryTokenData *this,
        char a2)
{
  *(_QWORD *)this = &CIFlipPresentHistoryTokenData::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
