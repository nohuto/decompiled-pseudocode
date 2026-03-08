/*
 * XREFs of PiUEventDispatch @ 0x14068DED0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     PiUEventHandleIoctl @ 0x14068DF6C (PiUEventHandleIoctl.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14078DA7C (PiUEventFreeClientRegistrationContext.c)
 */

__int64 __fastcall PiUEventDispatch(__int64 a1, IRP *a2)
{
  int Status; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UCHAR MajorFunction; // al
  IRP *v6; // rcx
  PVOID FsContext2; // rcx

  Status = a2->IoStatus.Status;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( Status >= 0 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction )
    {
      if ( MajorFunction == 2 )
      {
        FsContext2 = CurrentStackLocation->FileObject->FsContext2;
        if ( FsContext2 )
        {
          PiUEventFreeClientRegistrationContext(FsContext2);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
        Status = 0;
        v6 = a2;
        a2->IoStatus.Status = 0;
        goto LABEL_9;
      }
      v6 = a2;
      if ( MajorFunction == 14 )
        return (unsigned int)PiUEventHandleIoctl(a2);
      if ( MajorFunction != 18 )
      {
        Status = -1073741637;
        a2->IoStatus.Status = -1073741637;
        goto LABEL_9;
      }
    }
    else
    {
      v6 = a2;
      CurrentStackLocation->FileObject->FsContext2 = 0LL;
    }
    a2->IoStatus.Status = 0;
LABEL_9:
    IofCompleteRequest(v6, 0);
  }
  return (unsigned int)Status;
}
