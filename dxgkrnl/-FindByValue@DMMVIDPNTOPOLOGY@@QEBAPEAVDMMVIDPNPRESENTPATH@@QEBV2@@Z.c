/*
 * XREFs of ?FindByValue@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0013BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::FindByValue(
        DMMVIDPNTOPOLOGY *this,
        const struct DMMVIDPNPRESENTPATH *const a2)
{
  char *v2; // r10
  DMMVIDPNTOPOLOGY *v3; // r8
  char *v4; // r8
  char *v6; // rcx

  v2 = (char *)this + 24;
  v3 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v3 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    return 0LL;
  v4 = (char *)v3 - 8;
  while ( v4 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL) == *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL)
      && *(_DWORD *)(*((_QWORD *)v4 + 12) + 24LL) == *(_DWORD *)(*((_QWORD *)a2 + 12) + 24LL) )
    {
      break;
    }
    v6 = (char *)*((_QWORD *)v4 + 1);
    v4 = v6 - 8;
    if ( v6 == v2 )
      v4 = 0LL;
  }
  return (struct DMMVIDPNPRESENTPATH *)v4;
}
