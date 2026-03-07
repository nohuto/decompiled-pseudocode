void __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 1) >= 2 )
          __fastfail(5u);
      }
      else
      {
        PnpRecordBlackboxDelayedRemoveWorkerInformation();
      }
    }
    else
    {
      PnpRecordBlackboxDeviceCompletionQueueInformation(a1);
    }
  }
  else
  {
    PnpRecordBlackboxPnpEventWorkerInformation();
  }
}
