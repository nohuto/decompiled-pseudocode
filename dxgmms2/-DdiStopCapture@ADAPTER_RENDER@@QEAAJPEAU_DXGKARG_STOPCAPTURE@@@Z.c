__int64 __fastcall ADAPTER_RENDER::DdiStopCapture(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[48](this, a2);
}
