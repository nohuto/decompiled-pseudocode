/*
 * XREFs of EngFntCacheFault @ 0x1C028CD90
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C0308F48 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00B9774 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  v3 = *(_QWORD *)(SGDGetSessionState(ulFastCheckSum) + 32);
  if ( (*(_DWORD *)(v3 + 19384) & 3) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 19392);
    if ( v4 )
    {
      if ( iFaultMode - 1 <= 1 && (*(_DWORD *)(v4 + 16) & 1) == 0 )
      {
        *(_DWORD *)(v4 + 16) |= 1u;
        bSetFntCacheReg(1u, *(_DWORD *)(*(_QWORD *)(v3 + 19392) + 16LL));
      }
    }
  }
}
