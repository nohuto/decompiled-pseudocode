void __fastcall USB4_POWERON_WORK_QUEUE::_HandlePowerOn(
        USB4_POWERON_WORK_QUEUE *IoObject,
        struct USB4_POWERON_WORK_CONTEXT *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  DXGFASTMUTEX *v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)Context;
  USB4_POWERON_WORK_QUEUE::_HandlePowerOnInternal(IoObject, Context);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v6, (struct DXGFASTMUTEX *)(v3 + 8));
  if ( !*(_DWORD *)v3 )
    WdLogSingleEntry0(1LL);
  if ( !--*(_DWORD *)v3 )
    KeSetEvent((PRKEVENT)(v3 + 56), 0, 0);
  MUTEX_LOCK::~MUTEX_LOCK(&v6);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'(Context);
}
