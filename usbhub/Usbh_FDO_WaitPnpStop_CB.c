__int64 __fastcall Usbh_FDO_WaitPnpStop_CB(_QWORD *Tag, int a2)
{
  unsigned int started; // edi
  int v5; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx

  Log(Tag[1], 2, 2001945410, (__int64)Tag, a2);
  if ( a2 == 2 )
  {
    UsbhAsyncStop((__int64)Tag, 2);
    UsbhModuleDispatch(0LL, v8, (_LIST_ENTRY *)Tag[1], 6, 0LL, (__int64)Tag);
    return Usbh_PnpRemove(Tag, 2LL);
  }
  else
  {
    switch ( a2 )
    {
      case 3:
        UsbhAsyncStop((__int64)Tag, 3);
        UsbhModuleDispatch(0LL, v7, (_LIST_ENTRY *)Tag[1], 6, 0LL, (__int64)Tag);
        v5 = 4;
        break;
      case 5:
        UsbhAsyncStop((__int64)Tag, 5);
        v5 = 7;
        break;
      case 8:
        started = UsbhAsyncStartComplete(Tag);
        v5 = 5;
        if ( (started & 0xC0000000) == 0xC0000000 )
        {
          UsbhSetFdoPnpState(Tag[1], 5, 8);
          UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag);
          UsbhNotifyPnpOfFailure_Action(Tag[1]);
          return started;
        }
        break;
      default:
        UsbhTrapFatal_Dbg(Tag[1], (ULONG_PTR)Tag);
    }
    UsbhSetFdoPnpState(Tag[1], v5, a2);
    UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag);
    return 0LL;
  }
}
