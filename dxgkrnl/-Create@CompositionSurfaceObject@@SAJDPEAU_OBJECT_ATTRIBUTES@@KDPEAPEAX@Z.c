/*
 * XREFs of ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x1C007B534
 * Callers:
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DCA84 (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0014210 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 */

__int64 __fastcall CompositionSurfaceObject::Create(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        ACCESS_MASK a3,
        __int64 a4,
        void **a5)
{
  return DxgkCompositionObject::Create(
           a1,
           (__int64)a2,
           a3,
           a4,
           1,
           160,
           (__int64 (__fastcall *)(PVOID, __int64, char *))CompositionSurfaceObject::ObjectInit,
           0LL,
           a5);
}
