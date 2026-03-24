/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C00DBF58
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C032FBFC & 1) || (dword_1C032FBFC & 1) != 0 && ((a1 ^ dword_1C032FBFC) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
