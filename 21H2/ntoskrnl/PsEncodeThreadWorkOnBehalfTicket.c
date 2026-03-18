/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x1402F61F8
 * Callers:
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406BCB64 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1409663D0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1232);
  a2[1] = *(_DWORD *)(a1 + 1152);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}
