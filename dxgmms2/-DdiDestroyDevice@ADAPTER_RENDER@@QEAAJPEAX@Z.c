__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[17](this, a2);
}
