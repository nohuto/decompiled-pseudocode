__int64 __fastcall ADAPTER_RENDER::DdiPatch(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[31](this, a2);
}
