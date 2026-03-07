void __fastcall DpiKsrCallback(_BYTE *CallbackContext, PVOID Argument1, int *Argument2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( (_DWORD)Argument1 )
  {
    v3 = (_DWORD)Argument1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 3;
        if ( v5 )
        {
          if ( v5 == 10 )
          {
            if ( CallbackContext[1305] )
            {
              Feature_KsrDisplay__private_ReportDeviceUsage();
              DxgkStopAdapters();
            }
          }
        }
        else
        {
          DpiKsrFinalize(Argument2);
        }
      }
      else
      {
        DpiKsrComplete(CallbackContext);
      }
    }
    else
    {
      DpiKsrCancel(CallbackContext);
    }
  }
  else
  {
    CallbackContext[1305] = 1;
    *((_DWORD *)CallbackContext + 331) = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      65537,
      -1,
      (__int64)L"KSR Prepare was called - will defer save until all VMs have quiesced",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
