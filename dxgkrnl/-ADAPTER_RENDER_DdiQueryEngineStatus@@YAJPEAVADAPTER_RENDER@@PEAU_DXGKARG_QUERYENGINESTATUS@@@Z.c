__int64 __fastcall ADAPTER_RENDER_DdiQueryEngineStatus(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYENGINESTATUS *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryEngineStatus(a1, a2, a3);
}
