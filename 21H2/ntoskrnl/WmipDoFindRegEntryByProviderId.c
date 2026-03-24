/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x1402650B0
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x140265020 (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x14037E730 (IoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall WmipDoFindRegEntryByProviderId(int a1)
{
  _DWORD *result; // rax

  result = WmipInUseRegEntryHead;
  if ( WmipInUseRegEntryHead == (_UNKNOWN *)&WmipInUseRegEntryHead )
    return 0LL;
  while ( result[14] != a1 || (int)result[12] < 0 )
  {
    result = *(_DWORD **)result;
    if ( result == (_DWORD *)&WmipInUseRegEntryHead )
      return 0LL;
  }
  return result;
}
