struct DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGETSET::GetTargetById(
        DMMVIDEOPRESENTTARGETSET *this,
        int a2)
{
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  return (struct DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this, a2);
}
