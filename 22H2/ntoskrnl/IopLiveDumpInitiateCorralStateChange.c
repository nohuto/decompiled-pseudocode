/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x1409ACA98
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1409ABDE0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AD698 (IopLiveDumpStartDumpDataBuffering.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409AD728 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508908 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1409AD4BC (IopLiveDumpProcessCorralStateChange.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(volatile __int32 *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 MillisecondCounter; // rsi
  __int32 v7; // edi
  __int64 result; // rax
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a1;
  MillisecondCounter = 0LL;
  *a3 = 0LL;
  v7 = a2;
  if ( (*(_DWORD *)(v4 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  _InterlockedExchange(a1 + 4, 0);
  _InterlockedExchange(a1 + 3, v7);
  if ( v7 == 7 )
    _InterlockedIncrement(a1 + 4);
  else
    IopLiveDumpProcessCorralStateChange(a1, a1 + 28);
  v10 = 0;
  while ( *((_DWORD *)a1 + 4) != *((_DWORD *)a1 + 5) )
    KeYieldProcessorEx(&v10, a2, (__int64)a3, a4);
  result = *(unsigned int *)(v4 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    result = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    *a3 = result;
  }
  return result;
}
