/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x1C015D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C015D86C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288960 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, __int64 a3)
{
  int v4; // edi
  struct _EPROCESS *CurrentProcess; // rax

  v4 = a3;
  if ( gUMPDSecurityLevel == 2
    || gUMPDSecurityLevel
    && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(dhsurf, gUMPDSecurityLevel, a3),
        (unsigned int)bIsProcessLocalSystem(CurrentProcess))
    || (unsigned int)ValidUmpdSizl(a2, 0) )
  {
    if ( (unsigned int)(v4 - 1) <= 7 )
      return EngCreateDeviceSurface(dhsurf, a2, v4 | 0x8000u);
  }
  else if ( gfUMPDDebug )
  {
    DbgPrint(
      "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateDeviceSurface:Invalid sizl.\n",
      4046);
  }
  return 0LL;
}
