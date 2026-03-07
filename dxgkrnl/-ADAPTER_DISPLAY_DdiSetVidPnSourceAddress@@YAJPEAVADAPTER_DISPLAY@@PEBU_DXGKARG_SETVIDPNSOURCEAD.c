__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddress(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(a1, a2, a3);
}
