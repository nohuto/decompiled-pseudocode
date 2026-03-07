NTSTATUS __fastcall EtwTraceCursorSize(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &CursorSize, a3, a1, a2, a3);
  return result;
}
