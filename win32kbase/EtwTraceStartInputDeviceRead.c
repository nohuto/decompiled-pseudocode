__int64 __fastcall EtwTraceStartInputDeviceRead(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0dq_EtwWriteTransfer(a1, &StartInputDeviceRead, a3, (unsigned __int8)a1, a2);
  return result;
}
