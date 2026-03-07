__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  struct DMMVIDEOPRESENTTARGET *v4; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (struct DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this, *((_DWORD *)a2 + 6));
  if ( v4 )
  {
    if ( v4 != a2 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 6), a2, this);
      return 3223192370LL;
    }
  }
  else if ( Set<DMMVIDEOPRESENTTARGET>::Add((__int64)this, (__int64)a2) )
  {
    _InterlockedIncrement((volatile signed __int32 *)a2 + 18);
    return 0LL;
  }
  WdLogSingleEntry2(2LL, a2, this);
  return 3223192344LL;
}
