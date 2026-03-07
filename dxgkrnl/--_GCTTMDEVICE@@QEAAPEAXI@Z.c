CTTMDEVICE *__fastcall CTTMDEVICE::`scalar deleting destructor'(CTTMDEVICE *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0);
  return this;
}
