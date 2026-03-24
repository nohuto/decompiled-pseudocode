/*
 * XREFs of MmGetSessionGlobalVA @ 0x140630F48
 * Callers:
 *     PfpLogApplicationEvent @ 0x14026E010 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x14062B8D4 (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionGlobalVA(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 1368);
}
