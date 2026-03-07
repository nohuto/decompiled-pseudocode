__int64 __fastcall SendDwmIconChange(struct tagWND *a1)
{
  __int64 v2; // rcx
  void *v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  if ( (unsigned int)HasCaptionIcon(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0
    && xxxGetWindowSmIcon(a1, 1) )
  {
    xxxGetWindowSmIcon(a1, 1);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5);
  v3 = (void *)ReferenceDwmApiPort(v2);
  return DwmAsyncIconChange(v3);
}
