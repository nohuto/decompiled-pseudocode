__int64 __fastcall ADAPTER_RENDER_DdiSetAllocationBackingStore(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2)
{
  return ADAPTER_RENDER::DdiSetAllocationBackingStore(a1, a2);
}
