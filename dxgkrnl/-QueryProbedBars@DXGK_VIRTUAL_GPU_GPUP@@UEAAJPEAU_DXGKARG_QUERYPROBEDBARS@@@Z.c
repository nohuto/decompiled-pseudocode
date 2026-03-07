__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryProbedBars(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYPROBEDBARS *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryProbedBars(this[1], a2, a3);
}
