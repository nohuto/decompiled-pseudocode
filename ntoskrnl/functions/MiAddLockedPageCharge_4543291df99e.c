__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  _WORD *v2; // rbx
  __int64 v3; // rcx
  unsigned int locked; // r9d
  char v5; // r10

  v2 = (_WORD *)(a1 + 32);
  if ( (a2 & 1) == 0 && *v2 >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(v3, v5);
    if ( !locked )
      return 0LL;
  }
  ++*v2;
  return locked;
}
