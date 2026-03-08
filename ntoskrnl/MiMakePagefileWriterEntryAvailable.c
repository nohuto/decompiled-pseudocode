/*
 * XREFs of MiMakePagefileWriterEntryAvailable @ 0x140638C18
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiPageFileNoFreeSpace @ 0x140638D04 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiMakePagefileWriterEntryAvailable(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1[24] + 944LL);
  if ( _bittest16((const signed __int16 *)(a1[18] + 204LL), 0xBu) )
  {
    result = (_QWORD *)*v1;
    if ( *(_QWORD **)(*v1 + 8LL) == v1 )
    {
      *a1 = result;
      a1[1] = v1;
      result[1] = a1;
      *v1 = a1;
      return result;
    }
LABEL_5:
    __fastfail(3u);
  }
  result = *(_QWORD **)(a1[24] + 952LL);
  if ( (_QWORD *)*result != v1 )
    goto LABEL_5;
  *a1 = v1;
  a1[1] = result;
  *result = a1;
  v1[1] = a1;
  return result;
}
