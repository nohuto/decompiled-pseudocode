/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1800E6CB0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800E6CF8 (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800E6D4C (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  unsigned int v3; // ebx
  float v4; // xmm2_4
  CNineGridBrush *v5; // rcx
  __int64 v6; // r8

  v3 = 0;
  v4 = *((float *)a3 + 3);
  if ( CNineGridBrush::TryGetInsetFieldPointer(this, *((_DWORD *)a3 + 2)) && v4 >= 0.0 )
  {
    CNineGridBrush::SetInsetProperty(v5, *(_DWORD *)(v6 + 8), v4);
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, -2003303421, 0x145u, 0LL);
  }
  return v3;
}
