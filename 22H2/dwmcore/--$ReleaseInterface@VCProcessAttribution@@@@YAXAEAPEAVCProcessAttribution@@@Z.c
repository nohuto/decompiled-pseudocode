/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800358E8
 * Callers:
 *     ??1CChannelContext@@UEAA@XZ @ 0x180033CA4 (--1CChannelContext@@UEAA@XZ.c)
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x180033DC0 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x180034B28 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180034C18 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180035494 (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x180043DAC (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18005ED8C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CF700 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180154BF0 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CProcessAttribution>(CDrawListEntry **a1)
{
  CDrawListEntry *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CDrawListEntry::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
