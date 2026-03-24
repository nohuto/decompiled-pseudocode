/*
 * XREFs of NtGdiSetDeviceGammaRamp @ 0x1C02B6A80
 * Callers:
 *     <none>
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C00287C8 (GreSetDeviceGammaRamp.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288330 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiSetDeviceGammaRamp(HDC a1, void *a2, __int64 a3)
{
  int v5; // ebx
  unsigned int v6; // esi
  struct _EPROCESS *CurrentProcess; // rax

  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(MmUserProbeAddress, 0LL, a3);
    LOBYTE(v5) = (unsigned int)bIsProcessLocalSystem(CurrentProcess) == 0;
    return (unsigned int)GreSetDeviceGammaRamp(a1, a2, v5, 0);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v6;
}
