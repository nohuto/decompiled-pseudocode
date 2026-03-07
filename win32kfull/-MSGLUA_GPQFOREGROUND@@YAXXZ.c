void __fastcall MSGLUA_GPQFOREGROUND(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax

  v1 = PtiCurrentShared(a1);
  EtwTraceUIPIInputError(v1, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL), 1);
}
