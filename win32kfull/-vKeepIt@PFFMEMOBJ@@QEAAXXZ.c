void __fastcall PFFMEMOBJ::vKeepIt(PFFMEMOBJ *this)
{
  __int64 v1; // rcx

  *((_WORD *)this + 8) |= 2u;
  v1 = *(_QWORD *)this;
  if ( v1 )
    PopThreadGuardedObject(v1 + 160);
}
