/*
 * XREFs of ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1801B1D0C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1801B1614 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801B1904 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180214C8C (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetMagnifier(
        CVisualGroup **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETMAGNIFIER *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax
  __int64 v8; // rcx
  CVisualGroup *v9; // rcx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0xC4u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket((__int64)this, 629443961, 0LL);
  if ( *((_BYTE *)a4 + 8) )
  {
    v7 = CComposition::AddToMagnifierList((CComposition *)this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x535u, 0LL);
  }
  else
  {
    v9 = this[125];
    if ( v9 )
      CVisualGroup::RemoveVisual(v9, Resource);
  }
  return 0LL;
}
