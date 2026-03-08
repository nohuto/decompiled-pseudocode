/*
 * XREFs of VfIoDeleteDevice @ 0x140ACF214
 * Callers:
 *     IovDeleteDevice @ 0x140ABE694 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbPrintfA @ 0x140380B18 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     IovUtilMarkDeviceObject @ 0x1405CD8C0 (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140AC18EC (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x140AC1AD8 (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x140AC6C1C (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x140ACF4C0 (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140ACFA64 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140ACFB14 (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x140AD06D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140AD9750 (VfIrpLogDeleteDeviceLogs.c)
 */

LONG_PTR __fastcall VfIoDeleteDevice(struct _LIST_ENTRY *BugCheckParameter2, const void *a2)
{
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v6; // rax
  LONG_PTR result; // rax
  __int64 v8; // rcx
  void *v9; // rsi
  char pszDest[40]; // [rsp+20h] [rbp-68h] BYREF
  char v11[40]; // [rsp+48h] [rbp-40h] BYREF

  v3 = BugCheckParameter2;
  if ( ViVerifyDma )
  {
    Blink = BugCheckParameter2[19].Blink;
    if ( !Blink )
      goto LABEL_22;
    do
    {
      Flink = Blink[3].Flink;
      if ( !Flink )
        break;
      Blink = Flink[19].Blink;
      BugCheckParameter2 = Flink;
    }
    while ( Blink );
    if ( BugCheckParameter2 == v3 )
    {
LABEL_22:
      while ( 1 )
      {
        v6 = VF_FIND_DEVICE_INFORMATION_AND_REMOVE(v3);
        if ( !v6 )
          break;
        ViReleaseDmaAdapter((ULONG_PTR)v6);
      }
    }
    else
    {
      VF_MARK_FOR_DEFERRED_REMOVE(BugCheckParameter2);
    }
  }
  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    ViDevObjRemove((ULONG_PTR)v3);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(v3, 0LL) )
    {
      ViErrorDisplayDescription(576LL);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(576LL, a2, 0LL, 0LL);
    }
    IovUtilMarkDeviceObject((__int64)v3, 0LL);
    result = IovUtilGetLowerDeviceObjectWithTag(v8);
    v9 = (void *)result;
    if ( result )
    {
      ViErrorDisplayDescription(513LL);
      if ( RtlStringCbPrintfA(v11, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(v11);
      ViErrorFinishReport(513LL, a2, 0LL, 0LL);
      result = ObfDereferenceObjectWithTag(v9, 0x49667256u);
    }
    if ( (MmVerifierData & 0x400) != 0 )
      return VfIrpLogDeleteDeviceLogs(v3);
  }
  return result;
}
