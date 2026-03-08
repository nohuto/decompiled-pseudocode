/*
 * XREFs of MiLockCloneBlockAtDpc @ 0x14034A49C
 * Callers:
 *     MiDecrementCloneBlock @ 0x14029DC04 (MiDecrementCloneBlock.c)
 *     MiReferenceCloneProto @ 0x14034A39C (MiReferenceCloneProto.c)
 *     MiWriteSharedDemandZeroPte @ 0x140663178 (MiWriteSharedDemandZeroPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockCloneBlockAtDpc(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 16);
    }
    while ( result < 0 );
  }
  return result;
}
