__int64 __fastcall ADAPTER_DISPLAY_DdiCheckMultiPlaneOverlaySupport(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT *a2)
{
  return ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(a1, a2);
}
