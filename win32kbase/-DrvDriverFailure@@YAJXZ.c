__int64 DrvDriverFailure(void)
{
  __int64 v0; // rcx
  int v1; // ebx
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[34]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v12, 0, 0x108uLL);
  LOBYTE(v12[0]) = 0;
  v12[1] = gpDispInfo;
  v12[2] = __PAIR64__(gbGDIOn, gbMDEVDisabled);
  LODWORD(v12[3]) = gnDCECount;
  v12[4] = ghrgnInvalidSum;
  v12[5] = ghrgnVisNew;
  v12[6] = ghrgnSWP1;
  v12[7] = ghrgnValid;
  v12[8] = ghrgnValidSum;
  v12[9] = ghrgnInvalid;
  v12[10] = ghrgnInv0;
  v12[11] = ghrgnInv1;
  v12[12] = ghrgnInv2;
  v12[13] = ghdcMem;
  v12[14] = ghdcMem2;
  v12[15] = ghrgnGDC;
  v12[16] = ghrgnSCR;
  v12[17] = ghrgnSPB1;
  v12[18] = ghrgnSPB2;
  v12[19] = ghrgnSW;
  v12[20] = ghrgnScrl1;
  v12[21] = ghrgnScrl2;
  v12[22] = ghrgnScrlVis;
  v12[23] = ghrgnScrlSrc;
  v12[24] = ghrgnScrlDst;
  v12[25] = ghrgnScrlValid;
  v12[26] = gpWin32kDriverObject;
  LODWORD(v12[27]) = gnRetryReadInput;
  if ( gbExitInProgress )
  {
    v1 = 1;
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) == -1073741431 )
    {
      v1 = 1;
      WdLogSingleEntry1(2LL, -1073741431LL);
    }
    else
    {
      v1 = 0;
      v0 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 24) + 1328LL);
      if ( v0 )
      {
        v3 = ExistsInGraphicsDeviceList();
        v0 = 2LL;
        if ( v3 )
          v1 = 2;
      }
    }
  }
  v4 = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v0) + 24) + 1228LL);
  if ( v4 )
    v1 = v4;
  if ( v1 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( gpDispInfo )
      tagKERNELDISPLAYINFO::operator=((__int64)&v12[28]);
    CollectDriverFailureData(&BugCheckParameter1, v12);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v1);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
