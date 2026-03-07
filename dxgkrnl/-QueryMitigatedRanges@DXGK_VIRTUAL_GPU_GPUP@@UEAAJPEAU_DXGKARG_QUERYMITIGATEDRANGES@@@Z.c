__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryMitigatedRanges(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYMITIGATEDRANGES *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryMitigatedRanges(this[1], a2, a3);
}
