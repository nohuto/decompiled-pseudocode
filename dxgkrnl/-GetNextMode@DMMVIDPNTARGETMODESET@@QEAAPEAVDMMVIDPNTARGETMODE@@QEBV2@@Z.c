struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetNextMode(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODE *const a2)
{
  DMMVIDPNTARGETMODESET *v4; // rdx
  struct DMMVIDPNTARGETMODE *result; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNTARGETMODESET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    return 0LL;
  return result;
}
