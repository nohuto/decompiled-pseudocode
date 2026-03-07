__int64 __fastcall ADAPTER_DISPLAY_DdiCancelQueuedFlips(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CANCELQUEUEDFLIPS *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiCancelQueuedFlips(a1, a2, a3);
}
