/*
 * XREFs of ?AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01CFCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0011344 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01CFD80 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendFriendlyName(
        DxgMonitor::EdidMonitorDescriptor *this,
        PUNICODE_STRING Destination)
{
  const unsigned __int8 *EdidBaseBlockPtr; // rax
  int v5; // eax
  __int64 v6; // rbx
  NTSTATUS appended; // eax
  WCHAR Source[48]; // [rsp+20h] [rbp-78h] BYREF

  memset(Source, 0, 0x52uLL);
  EdidBaseBlockPtr = DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  v5 = EDIDV1_ObtainDisplayConfigFriendlyName(EdidBaseBlockPtr, Source);
  v6 = v5;
  if ( v5 >= 0 )
  {
    appended = RtlAppendUnicodeToString(Destination, Source);
    v6 = appended;
    if ( appended >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v6);
  return (unsigned int)v6;
}
