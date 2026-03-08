/*
 * XREFs of IrqArbpGetRangeData @ 0x1C009E418
 * Callers:
 *     IrqArbPackResource @ 0x1C009D6F0 (IrqArbPackResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbpGetRangeData(__int64 a1, PVOID *a2)
{
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+60h] [rbp+18h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(qword_1C006E6F0, &Iterator, &Range);
  while ( 1 )
  {
    if ( !Range )
      return 3221226021LL;
    if ( Range->Start == a1 )
      break;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  *a2 = Range->UserData;
  return 0LL;
}
