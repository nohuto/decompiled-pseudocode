bool __fastcall _AddMemoryBlockToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, void *a2)
{
  return (*((int (__fastcall **)(_QWORD, void *))a1 + 3))(*((_QWORD *)a1 + 5), a2) >= 0;
}
