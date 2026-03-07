struct DMMVIDPNTARGET *__fastcall DMMVIDPNTARGETSET::GetNextTarget(
        DMMVIDPNTARGETSET *this,
        const struct DMMVIDPNTARGET *const a2)
{
  DMMVIDPNTARGETSET *v4; // rdx
  struct DMMVIDPNTARGET *result; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDPNTARGETSET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNTARGETSET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDPNTARGETSET *)((char *)this + 24) )
    return 0LL;
  return result;
}
