void __fastcall CMouseSensor::ArmRawMouseThrottlingTimer(CMouseSensor *this, char a2, int a3)
{
  __int64 v4; // rsi
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0x11u, 1);
  if ( a2 )
  {
    DueTime.QuadPart = -10000 * v4;
    *((_BYTE *)this + 1880) = 1;
    ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
  }
  else
  {
    *((_BYTE *)this + 1880) = 0;
    ZwCancelTimer(DispatcherHandleByName, 0LL);
  }
}
