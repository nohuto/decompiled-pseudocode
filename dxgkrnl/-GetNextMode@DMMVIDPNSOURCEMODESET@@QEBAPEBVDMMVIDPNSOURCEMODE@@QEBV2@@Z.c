const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::GetNextMode(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODE *const a2)
{
  DMMVIDPNSOURCEMODESET *v4; // rdx
  const struct DMMVIDPNSOURCEMODE *result; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNSOURCEMODESET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return 0LL;
  return result;
}
