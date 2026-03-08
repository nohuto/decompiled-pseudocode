/*
 * XREFs of MiIncrementVmFaultCount @ 0x140619DDC
 * Callers:
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncrementVmFaultCount(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v3; // r8
  volatile signed __int32 *v4; // rcx

  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), a2);
  result = 0LL;
  v3 = *(_BYTE *)(a1 + 184) & 7;
  v4 = &dword_140C69E80;
  if ( v3 != 2 )
    v4 = 0LL;
  if ( v4 )
    result = (unsigned int)_InterlockedExchangeAdd(v4, a2);
  __addgsdword(0x2E90u, a2);
  return result;
}
