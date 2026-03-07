__int64 *EtwTraceEndCallback()
{
  __int64 v0; // rbx
  __int64 *result; // rax

  v0 = 0LL;
  result = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    v0 = *result;
  --*(_BYTE *)(v0 + 1296);
  return result;
}
