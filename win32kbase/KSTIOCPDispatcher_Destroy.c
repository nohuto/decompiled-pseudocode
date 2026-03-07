void *__fastcall KSTIOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    result = IOCPDispatcher::`scalar deleting destructor'((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, a2);
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  }
  return result;
}
