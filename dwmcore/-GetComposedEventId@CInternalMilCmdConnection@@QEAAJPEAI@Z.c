__int64 __fastcall CInternalMilCmdConnection::GetComposedEventId(CInternalMilCmdConnection *this, unsigned int *a2)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int CompositionId; // esi
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 136);
  CompositionId = DwmQueryCompositionId();
  v12 = v4;
  AcquireSRWLockExclusive(v4);
  *((_DWORD *)this + 36) = GetCurrentThreadId();
  if ( *((_QWORD *)this + 2) || (v7 = OpenComposedEvent(CompositionId, v6, (void **)this + 2), v8 = v7, v7 >= 0) )
  {
    *a2 = CompositionId;
    LODWORD(v4[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)v7,
      v10);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v12);
    return v8;
  }
}
