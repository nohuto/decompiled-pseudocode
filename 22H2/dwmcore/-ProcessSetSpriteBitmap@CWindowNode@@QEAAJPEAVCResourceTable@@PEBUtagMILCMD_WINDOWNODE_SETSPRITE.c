/*
 * XREFs of ?ProcessSetSpriteBitmap@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEBITMAP@@@Z @ 0x1800AA5A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EFC0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800AA5F0 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteBitmap(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITEBITMAP *a3)
{
  struct CGdiSpriteBitmap *Resource; // rax
  unsigned int v5; // edx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CGdiSpriteBitmap *)CResourceTable::GetResource((__int64)a2, v5, 0x41u)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x175u, 0LL);
  }
  else
  {
    v8 = CWindowNode::SetSpriteBitmap(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x179u, 0LL);
  }
  return v10;
}
