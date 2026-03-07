void *__fastcall imp_VfWdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  return WdfVersion.Functions.pfnWdfObjectGetTypedContextWorker(DriverGlobals, Handle, TypeInfo);
}
