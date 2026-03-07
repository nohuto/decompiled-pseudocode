__int64 __fastcall ADAPTER_RENDER_DdiCreateContext(
        struct ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_CREATECONTEXT *a3)
{
  return ADAPTER_RENDER::DdiCreateContext(a1, a2, a3);
}
