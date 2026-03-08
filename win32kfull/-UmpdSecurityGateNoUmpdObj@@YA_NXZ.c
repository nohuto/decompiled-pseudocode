/*
 * XREFs of ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1C0279028
 * Callers:
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0277D50 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278BE8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0279074 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C027AC90 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C027B830 (NtGdiStartPage.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiEngCreateBitmap @ 0x1C02CB8F0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C02CBBC0 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C028BA40 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

char __fastcall UmpdSecurityGateNoUmpdObj(Gre::Base *a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _EPROCESS *CurrentProcess; // rax

  v1 = 0;
  v3 = *((unsigned int *)Gre::Base::Globals(a1) + 1628);
  if ( (_DWORD)v3 != 2 )
  {
    if ( !(_DWORD)v3 )
      return 1;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v3, v2, v4);
    if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
      return 1;
  }
  return v1;
}
