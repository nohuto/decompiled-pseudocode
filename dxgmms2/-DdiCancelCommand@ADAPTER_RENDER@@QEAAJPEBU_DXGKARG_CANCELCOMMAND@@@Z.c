__int64 __fastcall ADAPTER_RENDER::DdiCancelCommand(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[41](this, a2);
}
