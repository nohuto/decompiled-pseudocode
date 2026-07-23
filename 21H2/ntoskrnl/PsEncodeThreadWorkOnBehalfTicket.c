/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x1402A9FB4
 * Callers:
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140600D8C (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2690 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1152);
  a2[1] = *(_DWORD *)(a1 + 1072);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}
