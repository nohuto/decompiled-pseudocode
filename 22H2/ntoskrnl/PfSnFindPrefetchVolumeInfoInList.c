/*
 * XREFs of PfSnFindPrefetchVolumeInfoInList @ 0x14075CE24
 * Callers:
 *     PfSnPopulateReadList @ 0x14075C890 (PfSnPopulateReadList.c)
 *     PfSnPrefetchMetadata @ 0x14075EAF4 (PfSnPrefetchMetadata.c)
 * Callees:
 *     wcsncmp @ 0x1403DB3F0 (wcsncmp.c)
 */

_QWORD *__fastcall PfSnFindPrefetchVolumeInfoInList(wchar_t *Str1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v8; // rax

  v3 = (_QWORD *)*a2;
  v4 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      if ( !wcsncmp(Str1, (const wchar_t *)v3[2], *((unsigned int *)v3 + 6)) )
      {
        v8 = *((unsigned int *)v3 + 6);
        if ( a3 ? Str1[v8] == 0 : Str1[v8] == 92 )
          break;
      }
      v3 = (_QWORD *)*v3;
      if ( v3 == a2 )
        return (_QWORD *)v4;
    }
    return v3;
  }
  return (_QWORD *)v4;
}
