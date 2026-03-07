__int64 __fastcall ADAPTER_RENDER_DdiResetEngine(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_RESETENGINE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiResetEngine(a1, a2, a3);
}
