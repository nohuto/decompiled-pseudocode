__int64 __fastcall ADAPTER_RENDER_DdiResetHwEngine(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_RESETHWENGINE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiResetHwEngine(a1, a2, a3);
}
