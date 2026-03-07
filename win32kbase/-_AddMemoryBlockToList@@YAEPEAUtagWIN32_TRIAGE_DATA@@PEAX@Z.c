bool __fastcall _AddMemoryBlockToList(struct tagWIN32_TRIAGE_DATA *a1, void *a2)
{
  return a2 && (*((unsigned __int8 (__fastcall **)(_QWORD, void *, _QWORD))a1 + 4))(*((_QWORD *)a1 + 5), a2, 0LL) == 0;
}
