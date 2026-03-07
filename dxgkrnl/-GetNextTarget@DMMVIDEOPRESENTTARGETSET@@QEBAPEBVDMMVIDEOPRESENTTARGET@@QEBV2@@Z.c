const struct DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGETSET::GetNextTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        const struct DMMVIDEOPRESENTTARGET *const a2)
{
  DMMVIDEOPRESENTTARGETSET *v4; // rdx
  const struct DMMVIDEOPRESENTTARGET *result; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDEOPRESENTTARGETSET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
    return 0LL;
  return result;
}
