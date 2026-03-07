__int64 __fastcall ADAPTER_RENDER_DdiCreateHwQueue(
        struct ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_CREATEHWQUEUE *a3)
{
  return ADAPTER_RENDER::DdiCreateHwQueue(a1, a2, a3);
}
