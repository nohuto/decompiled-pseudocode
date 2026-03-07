__int64 __fastcall ADAPTER_DISPLAY_DdiCancelFlips(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CANCELFLIPS *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiCancelFlips(a1, a2, a3);
}
