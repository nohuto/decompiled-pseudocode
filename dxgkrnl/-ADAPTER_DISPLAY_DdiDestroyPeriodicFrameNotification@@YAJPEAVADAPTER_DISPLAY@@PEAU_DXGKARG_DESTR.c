__int64 __fastcall ADAPTER_DISPLAY_DdiDestroyPeriodicFrameNotification(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_DESTROYPERIODICFRAMENOTIFICATION *a2)
{
  return ADAPTER_DISPLAY::DdiDestroyPeriodicFrameNotification(a1, a2);
}
