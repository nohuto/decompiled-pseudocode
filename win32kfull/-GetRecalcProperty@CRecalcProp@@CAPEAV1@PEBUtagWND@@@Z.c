/*
 * XREFs of ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C00FCC9C
 * Callers:
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C0014FF8 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00FC8E0 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

struct CRecalcProp *__fastcall CRecalcProp::GetRecalcProperty(const struct tagWND *a1)
{
  if ( (*((_DWORD *)a1 + 80) & 0x80u) != 0 )
    return (struct CRecalcProp *)GetProp((__int64)a1, CRecalcProp::s_atom, 1u);
  else
    return 0LL;
}
