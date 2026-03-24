/*
 * XREFs of KeRundownSecureProcess @ 0x14051395C
 * Callers:
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x14089024C (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 992) )
    return VslRundownSecureProcess();
  return result;
}
