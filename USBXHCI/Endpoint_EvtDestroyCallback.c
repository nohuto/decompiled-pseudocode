void __fastcall Endpoint_EvtDestroyCallback(__int64 a1)
{
  __int64 v1; // rbx
  struct _IO_WORKITEM *v2; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00631A8);
  v2 = *(struct _IO_WORKITEM **)(v1 + 1280);
  if ( v2 )
  {
    IoFreeWorkItem(v2);
    *(_QWORD *)(v1 + 1280) = 0LL;
  }
}
