/*
 * XREFs of VerifierKfRaiseIrql @ 0x140A96540
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKfRaiseIrql(char a1)
{
  __int64 (__fastcall *v1)(__int64); // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 (__fastcall *)(__int64))pXdvKfRaiseIrql;
  if ( KeAreInterruptsEnabled() )
  {
    ++dword_140C29FC4;
    v3 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 160LL);
  }
  LOBYTE(v3) = a1;
  v4 = ViKeIrqlLogAndTrimMemory(v3);
  LOBYTE(v5) = a1;
  result = v1(v5);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
