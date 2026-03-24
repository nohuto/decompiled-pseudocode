/*
 * XREFs of ACPIMatchHardwareId @ 0x1C00A141C
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DDA4 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_SqLL @ 0x1C002BAA8 (WPP_RECORDER_SF_SqLL.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009E0DC (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  const WCHAR *v10; // rbx
  int v12; // [rsp+20h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v14[20]; // [rsp+60h] [rbp-19h] BYREF
  PCWSTR SourceString; // [rsp+F0h] [rbp+77h] BYREF

  *a3 = 0;
  SourceString = 0LL;
  memset(v14, 0, 0x48uLL);
  LOWORD(v14[0]) = 4891;
  v14[2] = 1;
  DestinationString = 0LL;
  v7 = ACPIInternalSendSynchronousIrp(DeviceObject, (__int64)v14, (unsigned __int64 *)&SourceString);
  if ( v7 >= 0 )
  {
    v10 = SourceString;
    while ( v10 && *v10 )
    {
      RtlInitUnicodeString(&DestinationString, v10);
      v10 += (unsigned __int64)DestinationString.MaximumLength >> 1;
      if ( RtlEqualUnicodeString(&DestinationString, String2, 1u) )
      {
        *a3 = 1;
        break;
      }
    }
    ExFreePoolWithTag((PVOID)SourceString, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9, v12, String2->Buffer);
  return (unsigned int)v7;
}
