NTSTATUS __fastcall TraceDxgkBlockThread(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (_DWORD)a1 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    return McTemplateK0q_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"g", a3, a1);
  return result;
}
