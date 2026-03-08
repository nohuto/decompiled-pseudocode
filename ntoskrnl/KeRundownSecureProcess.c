/*
 * XREFs of KeRundownSecureProcess @ 0x14056D14C
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x14093FFA0 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 992) )
    return VslRundownSecureProcess();
  return result;
}
