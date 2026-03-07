unsigned __int64 __fastcall imp_WdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *__formal, FxObject **ContextPointer)
{
  return FxObject::GetObjectHandleUnchecked(*(ContextPointer - 6));
}
