__int64 __fastcall ADAPTER_RENDER_DdiSetSchedulingLogBuffer(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *a2)
{
  return ADAPTER_RENDER::DdiSetSchedulingLogBuffer(a1, a2);
}
