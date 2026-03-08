/*
 * XREFs of ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1C02DE9F4
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02DE0D0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE *a2,
        struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *a3)
{
  unsigned int v5; // ebx
  void *v6; // rax

  v5 = -1073741811;
  v6 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 64LL))(
                 *((_QWORD *)this + 1),
                 *((unsigned int *)a2 + 3),
                 17LL);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    v5 = 0;
  }
  else
  {
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), -1073741811LL);
  }
  *((_DWORD *)a3 + 1) = v5;
  return v5;
}
