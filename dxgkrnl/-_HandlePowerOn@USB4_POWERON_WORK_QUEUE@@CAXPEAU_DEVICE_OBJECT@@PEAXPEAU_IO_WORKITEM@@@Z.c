/*
 * XREFs of ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C03C64B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x1C006BE2C (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 */

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
