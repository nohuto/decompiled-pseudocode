/*
 * XREFs of ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C0082264
 * Callers:
 *     ?HasPendingWork@CRecalcProp@@SA_NPEBUtagWND@@@Z @ 0x1C0082238 (-HasPendingWork@CRecalcProp@@SA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00B0D2C (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B310 (-s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

struct CRecalcProp *__fastcall CRecalcProp::GetRecalcProperty(const struct tagWND *a1)
{
  if ( (*((_DWORD *)a1 + 80) & 0x80u) != 0 )
    return (struct CRecalcProp *)GetProp((__int64)a1, CRecalcProp::s_atom, 1u);
  else
    return 0LL;
}
