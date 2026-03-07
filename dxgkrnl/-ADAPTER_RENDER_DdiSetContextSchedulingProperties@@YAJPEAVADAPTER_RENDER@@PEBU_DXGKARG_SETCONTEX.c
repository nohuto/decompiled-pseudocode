__int64 __fastcall ADAPTER_RENDER_DdiSetContextSchedulingProperties(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ADAPTER_RENDER::DdiSetContextSchedulingProperties(a1, a2);
}
