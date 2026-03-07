__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  struct tagTHREADINFO *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  *a1 = -1LL;
  v5 = 0;
  v6 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  if ( *((struct tagDESKTOP **)v6 + 57) == grpdeskRitInput )
  {
    v5 = 1;
    *a1 = ***(_QWORD ***)(*((_QWORD *)PtiCurrentShared(v7, (__int64)v6, v8, v9) + 57) + 8LL);
  }
  return v5;
}
