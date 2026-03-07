int __fastcall FxPkgPnp::CreatePowerThread(FxPkgPnp *this)
{
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  _DEVICE_OBJECT *v3; // r9
  int result; // eax
  FxSystemThread *v5; // rbx
  FxSystemThread *pThread; // [rsp+30h] [rbp+8h] BYREF

  pThread = 0LL;
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  result = FxSystemThread::_CreateAndInit(&pThread, this->m_Globals, ObjectHandleUnchecked, v3);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PowerThread, (signed __int64)pThread, 0LL) )
    {
      v5 = pThread;
      FxSystemThread::ExitThread(pThread);
      v5->DeleteObject(v5);
    }
    this->m_HasPowerThread = 1;
    return 0;
  }
  return result;
}
