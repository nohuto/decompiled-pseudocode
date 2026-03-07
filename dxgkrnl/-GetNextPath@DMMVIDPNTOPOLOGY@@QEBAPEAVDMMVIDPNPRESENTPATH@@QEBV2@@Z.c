struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetNextPath(
        DMMVIDPNTOPOLOGY *this,
        const struct DMMVIDPNPRESENTPATH *const a2)
{
  DMMVIDPNTOPOLOGY *v2; // r8
  struct DMMVIDPNPRESENTPATH *result; // rax

  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNTOPOLOGY *)((char *)v2 - 8);
  if ( v2 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    return 0LL;
  return result;
}
