__int64 __fastcall OPMCreateProtectedOutput(__int64 a1, struct _LUID *a2, unsigned int a3, void **a4, int *a5)
{
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v8; // ebp
  __int64 v9; // rax
  int ProtectedOutput; // eax
  unsigned int v11; // ecx

  v8 = (int)a1;
  v9 = SGDGetSessionState(a1);
  ProtectedOutput = COPM::CreateProtectedOutput(*(void ***)(*(_QWORD *)(v9 + 24) + 3824LL), v8, a2, a3, a4, a5);
  v11 = 0;
  if ( ProtectedOutput < 0 )
    return (unsigned int)ProtectedOutput;
  return v11;
}
