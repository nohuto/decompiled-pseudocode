__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryMitigatedRangeCount(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYMITIGATEDRANGECOUNT *a2,
        __int64 a3)
{
  ADAPTER_RENDER::DdiQueryMitigatedRangeCount(this[1], a2, a3);
  return 0LL;
}
