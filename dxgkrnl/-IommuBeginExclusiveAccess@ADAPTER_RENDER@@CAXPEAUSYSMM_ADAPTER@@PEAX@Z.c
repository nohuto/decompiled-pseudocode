void __fastcall ADAPTER_RENDER::IommuBeginExclusiveAccess(struct SYSMM_ADAPTER *a1, ADAPTER_RENDER *a2)
{
  DXGADAPTER::AcquireCoreResourceExclusive(*((_QWORD *)a2 + 2), 3u, 0);
  ADAPTER_RENDER::DdiBeginExclusiveAccess(a2);
}
