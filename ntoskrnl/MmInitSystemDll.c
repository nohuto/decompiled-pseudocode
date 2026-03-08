/*
 * XREFs of MmInitSystemDll @ 0x140B720A8
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x140727C90 (PspReferenceSystemDll.c)
 *     PsQuerySystemDllInfo @ 0x14076D124 (PsQuerySystemDllInfo.c)
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
    qword_140C65680 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject(*(signed __int64 **)(v1 - 8), result, 0x64537350u);
  }
  return result;
}
