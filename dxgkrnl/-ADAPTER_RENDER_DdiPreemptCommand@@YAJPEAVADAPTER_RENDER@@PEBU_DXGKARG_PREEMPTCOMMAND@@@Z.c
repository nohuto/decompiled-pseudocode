__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_PREEMPTCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiPreemptCommand(a1, a2);
}
