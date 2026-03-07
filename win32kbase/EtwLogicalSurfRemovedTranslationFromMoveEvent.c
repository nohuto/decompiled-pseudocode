NTSTATUS __fastcall EtwLogicalSurfRemovedTranslationFromMoveEvent(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  NTSTATUS result; // eax
  int v7; // [rsp+28h] [rbp-20h]

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    v7 = a3;
    return McTemplateK0pqqqq_EtwWriteTransfer(a1, &LogicalSurfRemovedTranslationFromMoveEvent, a3, a1, a2, v7, a4, a5);
  }
  return result;
}
