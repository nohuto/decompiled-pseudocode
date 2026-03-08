/*
 * XREFs of PpmTestAndLockProcessors @ 0x140235EAC
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140235F24 (PpmIdleWaitForDependentTransitions.c)
 *     PpmTestAndLockProcessor @ 0x140583A5C (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmTestAndLockProcessors(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 Prcb; // rax
  _DWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v10[1] = 0;
  v10[0] = 1;
  v12 = 0LL;
  v13 = 0LL;
  v3 = 0;
  LOBYTE(v12) = 1;
  v11 = &v12;
  BYTE2(v12) = 1;
  if ( !a2 )
    return PpmIdleWaitForDependentTransitions(a1);
  while ( 1 )
  {
    if ( *(_BYTE *)(a3 + 4) != 0xFF )
    {
      v8 = *(_DWORD *)a3;
      DWORD1(v12) = *(unsigned __int8 *)(a3 + 4);
      Prcb = KeGetPrcb(v8);
      result = PpmTestAndLockProcessor(Prcb, a1, v10);
      if ( (int)result < 0 )
        break;
    }
    ++v3;
    a3 += 8LL;
    if ( v3 >= a2 )
      return PpmIdleWaitForDependentTransitions(a1);
  }
  return result;
}
