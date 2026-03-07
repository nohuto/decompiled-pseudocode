__int64 __fastcall GetThreadDesktopWindow(struct tagTHREADINFO *a1)
{
  __int64 v1; // rbx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx

  v1 = 0LL;
  v2 = a1;
  if ( a1 || (v2 = PtiCurrentShared()) != 0LL )
  {
    v3 = *((_QWORD *)v2 + 58);
    if ( v3 )
      return *(_QWORD *)(v3 + 24);
  }
  return v1;
}
