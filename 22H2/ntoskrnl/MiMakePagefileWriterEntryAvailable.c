/*
 * XREFs of MiMakePagefileWriterEntryAvailable @ 0x1403295A4
 * Callers:
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x140543B74 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiMakePagefileWriterEntryAvailable(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1[24] + 904LL);
  if ( (*(_WORD *)(a1[18] + 204LL) & 0x800) == 0 )
  {
    result = *(_QWORD **)(a1[24] + 912LL);
    if ( (_QWORD *)*result == v1 )
    {
      *a1 = v1;
      a1[1] = result;
      *result = a1;
      v1[1] = a1;
      return result;
    }
FatalListEntryError_29:
    __fastfail(3u);
  }
  result = (_QWORD *)*v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 )
    goto FatalListEntryError_29;
  *a1 = result;
  a1[1] = v1;
  result[1] = a1;
  *v1 = a1;
  return result;
}
