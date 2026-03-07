void __fastcall ADAPTER_RENDER::IommuOnDisable(struct SYSMM_ADAPTER *a1, _QWORD *a2)
{
  if ( a2[96] )
    (*(void (**)(void))(*(_QWORD *)(a2[95] + 8LL) + 1216LL))();
}
