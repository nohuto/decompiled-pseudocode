__int64 bUMPDSecurityGateEx(void)
{
  __int64 *ThreadWin32Thread; // rax
  unsigned int v1; // edx
  __int64 v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v6; // rax

  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  v1 = 0;
  if ( !ThreadWin32Thread )
    return 0LL;
  v2 = *ThreadWin32Thread;
  if ( !v2 )
    return 0LL;
  v3 = (_QWORD *)(v2 + 40);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    return 0LL;
  v6 = v4 - 5;
  if ( v4 == (_QWORD *)40 || (*((_DWORD *)v6 + 103) & 0x100) == 0 )
    return 0LL;
  LOBYTE(v1) = *((_DWORD *)v6 + 105) != 0;
  return v1;
}
