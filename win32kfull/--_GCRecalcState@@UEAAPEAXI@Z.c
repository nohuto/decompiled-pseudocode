CRecalcState *__fastcall CRecalcState::`scalar deleting destructor'(CRecalcState *this, char a2)
{
  CRecalcState::~CRecalcState(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
