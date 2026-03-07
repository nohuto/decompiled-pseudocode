__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // rdx

  *(_QWORD *)(*((_QWORD *)a1 + 60) + 8LL) = 0LL;
  v1 = (struct tagTHREADINFO *)*((unsigned int *)a1 + 122);
  LODWORD(v1) = (unsigned int)v1 & 0xFFFFFBFF;
  *(_DWORD *)(*((_QWORD *)a1 + 60) + 28LL) = (_DWORD)v1;
  *((_DWORD *)a1 + 122) &= ~0x400u;
  ForegroundBoost::UpdateProcessPriorityForSpinning(a1, v1);
  return 0LL;
}
