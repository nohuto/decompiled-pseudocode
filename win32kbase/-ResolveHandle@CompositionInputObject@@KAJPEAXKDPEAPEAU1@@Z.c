/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70
 * Callers:
 *     NtQueryCompositionInputSinkViewId @ 0x1C000AE70 (NtQueryCompositionInputSinkViewId.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C000E224 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C006AB50 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C00A206C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtCompositionSetDropTarget @ 0x1C00AB160 (NtCompositionSetDropTarget.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00B1118 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtQueryCompositionInputSink @ 0x1C00B8EF0 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C00BC9E0 (NtQueryCompositionInputIsImplicit.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01581B8 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1C016D320 (NtUserAddVisualIdentifier.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x1C02148B0 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C0214F18 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1C0225E38 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C00A7DF8 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionInputObject **a4)
{
  __int64 result; // rax
  struct CompositionInputObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 2LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
