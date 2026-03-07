__int64 __fastcall ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2)
{
  return ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(a1, a2);
}
