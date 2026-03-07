void __fastcall __noreturn FxIoQueue::FatalError(FxIoQueue *this, int Status)
{
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  __int64 v3; // r10
  _FX_DRIVER_GLOBALS *v4; // rcx
  int v5; // edx
  _WDF_QUEUE_FATAL_ERROR_DATA data; // [rsp+20h] [rbp-28h] BYREF

  *(&data.Status + 1) = 0;
  ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
  data.Request = 0LL;
  v4 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
  data.Status = v5;
  data.Queue = ObjectHandleUnchecked;
  FxVerifierBugCheckWorker(v4, WDF_QUEUE_FATAL_ERROR, (ULONG_PTR)&data, 0LL);
}
