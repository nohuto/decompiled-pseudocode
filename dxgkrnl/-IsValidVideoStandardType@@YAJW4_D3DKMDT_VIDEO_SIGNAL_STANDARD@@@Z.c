/*
 * XREFs of ?IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z @ 0x1C006C0B4
 * Callers:
 *     _pReadDetailTimingFromReg @ 0x1C03C4434 (_pReadDetailTimingFromReg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidVideoStandardType(enum _D3DKMDT_VIDEO_SIGNAL_STANDARD a1)
{
  if ( (unsigned int)(a1 - 1) <= 0x19 || a1 == D3DKMDT_VSS_OTHER )
    return 0LL;
  else
    return a1 != D3DKMDT_VSS_EIA_861B ? 0xC01E0322 : 0;
}
