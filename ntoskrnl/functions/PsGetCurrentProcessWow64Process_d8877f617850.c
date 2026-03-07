__int64 PsGetCurrentProcessWow64Process()
{
  __int64 v0; // rdx
  unsigned __int64 v1; // rax

  v0 = 0LL;
  v1 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[30];
  if ( v1 )
    return *(_QWORD *)v1;
  return v0;
}
