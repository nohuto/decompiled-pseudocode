/*
 * XREFs of ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x18020D1BC
 * Callers:
 *     ?ProcessAppendExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x18020DEB0 (-ProcessAppendExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPEND.c)
 *     ?ProcessAppendSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDSHAREDLIGHTS@@PEBXI@Z @ 0x18020DF30 (-ProcessAppendSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDSHAREDLI.c)
 *     ?ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x18020E100 (-ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUD.c)
 *     ?ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@PEBXI@Z @ 0x18020E328 (-ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@.c)
 * Callees:
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x180011BBC (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddSharedLights(
        __int64 a1,
        _QWORD **a2,
        unsigned int a3,
        CResourceTable *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  struct CResource *ResourceWithoutType; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  _QWORD *i; // rax
  int v15; // eax
  __int64 v16; // rcx

  v6 = 0;
  v7 = 0LL;
  if ( a6 )
  {
    while ( 2 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a4, *(_DWORD *)(a5 + 4 * v7));
      v13 = (__int64)ResourceWithoutType;
      if ( ResourceWithoutType
        && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
             ResourceWithoutType,
             36LL) )
      {
        for ( i = *a2; i != a2[1]; i += 2 )
        {
          if ( *i == v13 )
            goto LABEL_9;
        }
        v15 = CCompositionLight::AddTarget(v13, a1, a3, 1);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xBF0u, 0LL);
          return v6;
        }
LABEL_9:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 < a6 )
          continue;
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0xBE0u, 0LL);
      }
      break;
    }
  }
  return v6;
}
