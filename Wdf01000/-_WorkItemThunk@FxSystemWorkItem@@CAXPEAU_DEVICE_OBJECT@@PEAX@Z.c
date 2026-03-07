void __fastcall FxSystemWorkItem::_WorkItemThunk(_DEVICE_OBJECT *DeviceObject, FxSystemWorkItem *Context)
{
  FxSystemWorkItem::WorkItemHandler(Context);
  FxSystemWorkItem::DecrementWorkItemQueued(Context);
}
