void __fastcall UninitializeThreadInfoIocp(struct tagTHREADINFO *a1, __int64 a2)
{
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v3 = (void *)*((_QWORD *)a1 + 187);
  if ( v3 )
  {
    ObCloseHandle(v3, 0);
    *((_QWORD *)a1 + 187) = 0LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 186);
  if ( v4 )
  {
    ObCloseHandle(v4, 0);
    *((_QWORD *)a1 + 186) = 0LL;
  }
  v5 = *((_QWORD *)a1 + 184);
  if ( v5 )
  {
    if ( (int)ProtectHandle(v5, a2, 0LL, 0LL) >= 0 )
      ObCloseHandle(*((HANDLE *)a1 + 184), 1);
    *((_QWORD *)a1 + 184) = 0LL;
  }
  v6 = (void *)*((_QWORD *)a1 + 183);
  if ( v6 )
  {
    ObCloseHandle(v6, 0);
    *((_QWORD *)a1 + 183) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a1 + 182);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)a1 + 182) = 0LL;
  }
}
