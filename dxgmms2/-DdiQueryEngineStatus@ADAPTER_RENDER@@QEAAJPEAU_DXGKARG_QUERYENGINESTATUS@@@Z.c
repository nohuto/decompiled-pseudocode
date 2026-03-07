__int64 __fastcall ADAPTER_RENDER::DdiQueryEngineStatus(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[37](this, a2);
}
