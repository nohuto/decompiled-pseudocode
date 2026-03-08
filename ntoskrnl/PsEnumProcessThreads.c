/*
 * XREFs of PsEnumProcessThreads @ 0x14080E25C
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14080DD60 (EtwpProcessEnumCallback.c)
 *     PopUpdateSingleProcessHeteroPolicies @ 0x1408A10F0 (PopUpdateSingleProcessHeteroPolicies.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PsGetNextProcessThread @ 0x1406A8E30 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsEnumProcessThreads(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD *, __int64), __int64 a3)
{
  int v3; // edi
  _QWORD *v5; // rdx
  __int64 i; // rsi
  _QWORD *NextProcessThread; // rax
  void *v9; // rbx

  v3 = 0;
  v5 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextProcessThread = PsGetNextProcessThread(a1, v5);
    v9 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    v3 = a2(i, NextProcessThread, a3);
    if ( v3 < 0 )
    {
      ObfDereferenceObjectWithTag(v9, 0x6E457350u);
      return (unsigned int)v3;
    }
    v5 = v9;
  }
  return (unsigned int)v3;
}
