__int64 __fastcall ADAPTER_RENDER_DdiResumeHwEngine(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_RESUMEHWENGINE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiResumeHwEngine(a1, a2, a3);
}
