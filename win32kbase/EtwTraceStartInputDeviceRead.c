/*
 * XREFs of EtwTraceStartInputDeviceRead @ 0x1C0089590
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00EE444 (McTemplateK0dq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceStartInputDeviceRead(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0dq_EtwWriteTransfer(a1, &StartInputDeviceRead, a3, (unsigned __int8)a1, a2);
  return result;
}
