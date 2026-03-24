/*
 * XREFs of ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1C01EBEA8
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01ECD8C (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1C01ECFC0 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildSignatureFeatureReport(
        struct _HIDP_CAPS *a1,
        struct _HIDP_VALUE_CAPS *a2,
        struct _DEVICE_OBJECT *a3,
        struct _FILE_OBJECT *a4,
        char **a5,
        char **a6)
{
  __int64 FeatureReportByteLength; // rcx
  unsigned int v11; // ebx
  char *OutputBuffer; // r15
  PIRP v13; // rax
  NTSTATUS Status; // edi
  char *v15; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  FeatureReportByteLength = a1->FeatureReportByteLength;
  IoStatusBlock = 0LL;
  v11 = -1073741811;
  OutputBuffer = (char *)Win32AllocPoolNonPaged(FeatureReportByteLength, 1768321877LL);
  *a5 = OutputBuffer;
  if ( OutputBuffer )
  {
    if ( a2 && a3 && a4 )
    {
      *OutputBuffer = a2->ReportID;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v13 = IoBuildDeviceIoControlRequest(
              0xB0192u,
              a3,
              0LL,
              0,
              OutputBuffer,
              a1->FeatureReportByteLength,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v13 )
        goto LABEL_6;
      v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
      Status = IofCallDriver(a3, v13);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
LABEL_6:
        v11 = -1073741668;
        goto LABEL_15;
      }
    }
    else
    {
      Status = 0;
    }
    v15 = (char *)Win32AllocPoolZInit(256LL, 1768321877LL);
    *a6 = v15;
    if ( !v15 )
      Status = -1073741668;
    v11 = Status;
  }
LABEL_15:
  if ( !*a6 && *a5 )
  {
    Win32FreePool(*a5);
    *a5 = 0LL;
  }
  return v11;
}
