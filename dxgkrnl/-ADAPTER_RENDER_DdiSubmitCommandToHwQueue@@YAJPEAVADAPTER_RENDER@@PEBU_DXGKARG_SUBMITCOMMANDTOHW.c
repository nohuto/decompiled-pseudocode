__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommandToHwQueue(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiSubmitCommandToHwQueue(a1, a2, a3);
}
