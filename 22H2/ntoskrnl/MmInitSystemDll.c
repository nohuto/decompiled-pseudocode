/*
 * XREFs of MmInitSystemDll @ 0x140B76620
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x14076F6C4 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x1407A39B4 (PspReferenceSystemDll.c)
 */

signed __int64 MmInitSystemDll()
{
  signed __int64 result; // rax
  signed __int64 v1; // rbx

  result = (signed __int64)PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll(*(signed __int64 **)(result - 8));
    qword_140C65B00 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject(*(signed __int64 **)(v1 - 8), result, 0x64537350u);
  }
  return result;
}
