/*
 * XREFs of ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x180011BBC
 * Callers:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x180011B08 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x18020D1BC (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 * Callees:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180011C84 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x180011D8C (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionLight::AddTarget(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r11
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  if ( (unsigned __int8)DynArray<CVisual *,0>::Contains(a1 + 88 + (a3 != 0 ? 0x28 : 0), &v20) )
    return 0LL;
  v11 = *(_DWORD *)(v10 + 24);
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_10;
  }
  if ( v12 > *(_DWORD *)(v10 + 20) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet(v10, 8LL, 1LL, &v20);
    v13 = v15;
    if ( v15 >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
LABEL_10:
    v17 = 356LL;
    goto LABEL_12;
  }
  *(_QWORD *)(*(_QWORD *)v10 + 8LL * v11) = a2;
  *(_DWORD *)(v10 + 24) = v12;
LABEL_5:
  LOBYTE(v9) = a4;
  v13 = CVisual::AddLight(v20, a1, a3, v9);
  if ( v13 >= 0 )
    return 0LL;
  v17 = 357LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
    (const char *)(unsigned int)v13,
    v18);
  return (unsigned int)v13;
}
