/*
 * XREFs of ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C015E364
 * Callers:
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C029165C (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02AA350 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::bSandboxedClient(UMPDOBJ *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_DWORD *)this + 106) )
    return *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
  return v1;
}
