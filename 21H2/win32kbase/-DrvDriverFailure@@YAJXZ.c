/*
 * XREFs of ?DrvDriverFailure@@YAJXZ @ 0x1C0152348
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1C01521EC (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 *     CollectDriverFailureData @ 0x1C01732A4 (CollectDriverFailureData.c)
 */

__int64 DrvDriverFailure(void)
{
  int v0; // ebx
  wchar_t *i; // rax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v9[34]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v9, 0, sizeof(v9));
  LOBYTE(v9[0]) = 0;
  v9[1] = gpDispInfo;
  v9[2] = __PAIR64__(gbGDIOn, gbMDEVDisabled);
  LODWORD(v9[3]) = gnDCECount;
  v9[4] = gpvwplHungRedraw;
  v9[5] = ghrgnInvalidSum;
  v9[6] = ghrgnVisNew;
  v9[7] = ghrgnSWP1;
  v9[8] = ghrgnValid;
  v9[9] = ghrgnValidSum;
  v9[10] = ghrgnInvalid;
  v9[11] = ghrgnInv0;
  v9[12] = ghrgnInv1;
  v9[13] = ghrgnInv2;
  v9[14] = ghdcMem;
  v9[15] = ghdcMem2;
  v9[16] = ghrgnGDC;
  v9[17] = ghrgnSCR;
  v9[18] = ghrgnSPB1;
  v9[19] = ghrgnSPB2;
  v9[20] = ghrgnSW;
  v9[21] = ghrgnScrl1;
  v9[22] = ghrgnScrl2;
  v9[23] = ghrgnScrlVis;
  v9[24] = ghrgnScrlSrc;
  v9[25] = ghrgnScrlDst;
  v9[26] = ghrgnScrlValid;
  v9[27] = gpWin32kDriverObject;
  LODWORD(v9[28]) = gnRetryReadInput;
  if ( gbExitInProgress )
  {
    v0 = 1;
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
      v0 = 1;
      WdLogSingleEntry1(2LL, -1073741431LL);
    }
    else if ( gpLastFailedPhysDisp )
    {
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( (wchar_t *)gpLastFailedPhysDisp == i )
        {
          v0 = 2;
          break;
        }
      }
    }
  }
  if ( gulDriverFailureReason )
    v0 = gulDriverFailureReason;
  if ( v0 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( gpDispInfo )
      tagKERNELDISPLAYINFO::operator=((__int64)&v9[29]);
    CollectDriverFailureData(&BugCheckParameter1, v9);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
