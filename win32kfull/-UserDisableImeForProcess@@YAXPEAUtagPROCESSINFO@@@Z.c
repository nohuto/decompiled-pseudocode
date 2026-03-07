void __fastcall UserDisableImeForProcess(struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *i; // rbx

  *((_DWORD *)a1 + 3) |= 0x800000u;
  for ( i = (struct tagTHREADINFO *)*((_QWORD *)a1 + 40); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    UserDisableImeForThread(i, 0);
}
