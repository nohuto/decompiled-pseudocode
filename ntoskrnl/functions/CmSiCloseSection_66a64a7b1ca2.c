NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
