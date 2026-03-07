unsigned __int64 __fastcall ADAPTER_RENDER_DdiGetRootPageTableSize(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_GETROOTPAGETABLESIZE *a2)
{
  return ADAPTER_RENDER::DdiGetRootPageTableSize(a1, a2);
}
