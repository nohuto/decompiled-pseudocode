NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
