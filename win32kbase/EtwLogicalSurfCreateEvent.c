__int64 __fastcall EtwLogicalSurfCreateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &LogicalSurfCreateEvent, a3, a1, a2);
  return result;
}
