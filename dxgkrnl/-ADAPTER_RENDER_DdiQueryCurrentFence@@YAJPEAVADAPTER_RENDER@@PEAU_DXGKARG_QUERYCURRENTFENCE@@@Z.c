__int64 __fastcall ADAPTER_RENDER_DdiQueryCurrentFence(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYCURRENTFENCE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryCurrentFence(a1, a2, a3);
}
