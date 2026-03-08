/*
 * XREFs of PspSyscallProviderServiceDispatch @ 0x140420350
 * Callers:
 *     PsSyscallProviderDispatch @ 0x1409B1700 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspCaptureSystemServiceInMemoryArgs @ 0x1409B19D0 (PspCaptureSystemServiceInMemoryArgs.c)
 */

__int64 __fastcall PspSyscallProviderServiceDispatch(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD, _QWORD),
        char a3)
{
  __int64 result; // rax
  _BYTE v6[136]; // [rsp+20h] [rbp-88h] BYREF

  if ( (a3 & 0xF) == 0 )
    return a2(a1[7], a1[8], a1[9], a1[10]);
  result = PspCaptureSystemServiceInMemoryArgs((void *)(a1[48] + 40LL), v6);
  if ( (int)result >= 0 )
    return a2(a1[7], a1[8], a1[9], a1[10]);
  return result;
}
