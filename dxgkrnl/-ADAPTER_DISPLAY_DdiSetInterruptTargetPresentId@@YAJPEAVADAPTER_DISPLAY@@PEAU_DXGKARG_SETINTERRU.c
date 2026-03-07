__int64 __fastcall ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_SETINTERRUPTTARGETPRESENTID *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiSetInterruptTargetPresentId(a1, a2, a3);
}
