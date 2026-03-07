__int64 __fastcall DXGTRACKEDWORKLOAD::Release(DXGTRACKEDWORKLOAD *this)
{
  signed __int64 v1; // rbx

  v1 = _InterlockedDecrement64((volatile signed __int64 *)this + 9);
  if ( !v1 && this )
    DXGTRACKEDWORKLOAD::`scalar deleting destructor'(this);
  return v1;
}
