/*
 * XREFs of ?ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@PEBXI@Z @ 0x18020E328
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x18020D1BC (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x18020E408 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETSHAREDLIGHTS *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v5 = *((_DWORD *)a3 + 2);
  if ( a5 < v5 || (v5 & 3) != 0 )
  {
    v12 = -2003303421;
    v14 = -2003303421;
    v16 = 2935;
    goto LABEL_8;
  }
  v10 = CVisual::RemoveAllSharedLights(this, 0LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB7Au, 0LL);
  }
  else
  {
    v13 = CVisual::AddSharedLights((__int64)this, (_QWORD **)this + 35, 0, a2, a4, *((_DWORD *)a3 + 2) >> 2);
    v12 = v13;
    if ( v13 < 0 )
    {
      v14 = v13;
      v16 = 2943;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v14, v16, 0LL);
    }
  }
  return v12;
}
