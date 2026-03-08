/*
 * XREFs of HalpInterruptMaskAcpi @ 0x140A92308
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14050B1D4 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptPicLine @ 0x140376444 (HalpInterruptPicLine.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptMaskAcpi(char a1)
{
  _QWORD *Lines; // rax
  __int64 v4; // rdx
  ULONG_PTR *v5; // rcx
  unsigned int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HalpInterruptPicLine(&v8, (unsigned __int16)word_140C61CCE);
  HalpInterruptApplyOverrides(&v8, 0LL, 0LL);
  Lines = HalpInterruptFindLines((unsigned int *)&v8);
  if ( !Lines )
    return HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8D7u);
  v4 = Lines[5];
  if ( a1 )
    *(_DWORD *)(v4 + 12) |= 0x10u;
  else
    *(_DWORD *)(v4 + 12) &= ~0x10u;
  v5 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
  if ( v5 )
    return HalpInterruptSetLineStateInternal((__int64)v5, (__int64)&v8, *(_QWORD *)(v7 + 40) + 56LL * v6);
  else
    return HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8E7u);
}
