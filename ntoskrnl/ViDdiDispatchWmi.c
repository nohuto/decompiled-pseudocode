/*
 * XREFs of ViDdiDispatchWmi @ 0x140AC0BA0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140AC0C04 (ViDdiDispatchWmiQueryAllData.c)
 *     ViDdiDispatchWmiRegInfoEx @ 0x140AC0DA0 (ViDdiDispatchWmiRegInfoEx.c)
 */

__int64 __fastcall ViDdiDispatchWmi(__int64 a1, IRP *a2)
{
  UCHAR MinorFunction; // dl
  NTSTATUS AllData; // eax
  unsigned int Status; // ebx

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( MinorFunction )
  {
    if ( MinorFunction != 11 )
      goto LABEL_6;
    AllData = ViDdiDispatchWmiRegInfoEx(a1, a2);
  }
  else
  {
    AllData = ViDdiDispatchWmiQueryAllData(a1, a2);
  }
  Status = AllData;
  if ( AllData != -1073741637 )
  {
    a2->IoStatus.Status = AllData;
    goto LABEL_8;
  }
LABEL_6:
  Status = a2->IoStatus.Status;
LABEL_8:
  IofCompleteRequest(a2, 0);
  return Status;
}
