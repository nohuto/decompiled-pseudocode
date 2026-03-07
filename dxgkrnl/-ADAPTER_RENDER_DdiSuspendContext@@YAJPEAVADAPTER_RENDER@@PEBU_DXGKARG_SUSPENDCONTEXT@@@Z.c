__int64 __fastcall ADAPTER_RENDER_DdiSuspendContext(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SUSPENDCONTEXT *a2)
{
  return ADAPTER_RENDER::DdiSuspendContext(a1, a2);
}
