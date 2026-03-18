/*
 * XREFs of ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C0299B54
 * Callers:
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0298DC4 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0298EE8 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0299658 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02BC7F0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::bSandboxedClient(UMPDOBJ *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_DWORD *)this + 110) )
    return *((_DWORD *)this + 106) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
  return v1;
}
