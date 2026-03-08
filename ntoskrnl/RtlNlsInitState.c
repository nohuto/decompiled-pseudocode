/*
 * XREFs of RtlNlsInitState @ 0x1408107AC
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall RtlNlsInitState(__int64 a1)
{
  __int64 v1; // rdi
  void *result; // rax

  v1 = a1 + 1064;
  *(_QWORD *)(a1 + 1192) = 0LL;
  memset((void *)(a1 + 1064), 0, 0x40uLL);
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_DWORD *)v1 = 327145;
  *(_DWORD *)(v1 + 4) = -196545;
  *(_DWORD *)(v1 + 8) = 4128831;
  memset((void *)(v1 + 64), 0, 0x40uLL);
  *(_QWORD *)(v1 + 160) = 0LL;
  result = &NlsEmptyLeadByteInfoTable;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_QWORD *)(v1 + 144) = &NlsEmptyLeadByteInfoTable;
  *(_QWORD *)(v1 + 152) = &NlsEmptyLeadByteInfoTable;
  *(_DWORD *)(v1 + 64) = 327145;
  *(_DWORD *)(v1 + 68) = -196545;
  *(_DWORD *)(v1 + 72) = 4128831;
  return result;
}
