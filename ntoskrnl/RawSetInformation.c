/*
 * XREFs of RawSetInformation @ 0x1409B57F8
 * Callers:
 *     RawDispatch @ 0x1406F2E80 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RawBeginOperation @ 0x14028DCD8 (RawBeginOperation.c)
 *     RawEndOperation @ 0x14028E08C (RawEndOperation.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 */

__int64 __fastcall RawSetInformation(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct _IRP *MasterIrp; // r14
  __int64 v8; // rbp

  v6 = 0;
  if ( RawBeginOperation(a1, *(_QWORD *)(a3 + 48)) )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v8 = *(_QWORD *)(a3 + 48);
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      if ( (IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(a3 + 48))->AlignmentRequirement & *(_DWORD *)&MasterIrp->Type) != 0 )
        v6 = -1073741811;
      else
        *(_QWORD *)(v8 + 104) = *(_QWORD *)&MasterIrp->Type;
    }
    else
    {
      v6 = -1073741808;
    }
    RawEndOperation(a1, *(_QWORD *)(a3 + 48));
  }
  else
  {
    v6 = -1073741202;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 1);
  return v6;
}
