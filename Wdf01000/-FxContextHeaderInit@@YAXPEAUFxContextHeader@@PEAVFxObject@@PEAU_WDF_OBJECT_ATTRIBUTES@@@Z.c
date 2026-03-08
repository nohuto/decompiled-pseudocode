/*
 * XREFs of ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00029B8
 * Callers:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C00027F4 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0043354 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     VfAddContextToHandle @ 0x1C00B8284 (VfAddContextToHandle.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 */

void __fastcall FxContextHeaderInit(FxContextHeader *Header, FxObject *Object, _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8

  *(_OWORD *)&Header->Object = 0LL;
  *(_OWORD *)&Header->EvtCleanupCallback = 0LL;
  *(_OWORD *)&Header->ContextTypeInfo = 0LL;
  Header->Object = Object;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(Header->Context, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    Header->ContextTypeInfo = Attributes->ContextTypeInfo;
  }
}
