unsigned __int8 __fastcall ProtectableFromChange::IsModifyingActionAllowed(
        ProtectableFromChange *this,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = a2;
  if ( a2 >= *((_BYTE *)this + 20) )
    WdLogSingleEntry0(1LL);
  v4 = *((unsigned __int16 *)this + 11);
  return _bittest(&v4, v2);
}
