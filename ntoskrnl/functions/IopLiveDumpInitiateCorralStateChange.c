__int64 __fastcall IopLiveDumpInitiateCorralStateChange(volatile __int32 *a1, __int32 a2, __int64 *a3)
{
  __int64 v3; // rbp
  __int64 MillisecondCounter; // rdi
  __int64 result; // rax
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a1;
  MillisecondCounter = 0LL;
  *a3 = 0LL;
  if ( (*(_DWORD *)(v3 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  _InterlockedExchange(a1 + 4, 0);
  _InterlockedExchange(a1 + 3, a2);
  if ( a2 == 7 )
    _InterlockedIncrement(a1 + 4);
  else
    IopLiveDumpProcessCorralStateChange(a1, a1 + 28);
  v9 = 0;
  while ( *((_DWORD *)a1 + 4) != *((_DWORD *)a1 + 5) )
    KeYieldProcessorEx(&v9);
  result = *(unsigned int *)(v3 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    result = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    *a3 = result;
  }
  return result;
}
