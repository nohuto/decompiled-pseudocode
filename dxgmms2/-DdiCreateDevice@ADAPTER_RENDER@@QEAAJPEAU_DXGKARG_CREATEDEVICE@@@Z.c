__int64 __fastcall ADAPTER_RENDER::DdiCreateDevice(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[16](this, a2);
}
