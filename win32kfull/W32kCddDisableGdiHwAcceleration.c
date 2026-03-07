__int64 W32kCddDisableGdiHwAcceleration()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rcx

  v0 = 0LL;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    v0 = *((_QWORD *)PtiCurrentShared(v1) + 81);
  return (v0 >> 34) & 1;
}
