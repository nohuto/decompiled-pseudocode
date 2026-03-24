/*
 * XREFs of HalpInterruptMaskAcpi @ 0x14099822C
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14038B4F0 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14037861C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x140378710 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378770 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x140378894 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptPicLine @ 0x1403A7394 (HalpInterruptPicLine.c)
 *     HalpInterruptSetProblemEx @ 0x1404D19C8 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptMaskAcpi(char a1)
{
  _QWORD *Lines; // rax
  __int64 v3; // rcx
  ULONG_PTR *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HalpInterruptPicLine(&v8, (unsigned __int16)word_140C4A02E);
  HalpInterruptApplyOverrides((unsigned int *)&v8, 0LL, 0LL);
  Lines = HalpInterruptFindLines((unsigned int *)&v8);
  if ( !Lines )
    return HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8DEu);
  v3 = Lines[5];
  if ( a1 )
    *(_DWORD *)(v3 + 12) |= 0x10u;
  else
    *(_DWORD *)(v3 + 12) &= ~0x10u;
  v4 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
  if ( v4 )
    return HalpInterruptSetLineStateInternal((__int64)v4, (__int64)&v8, v5 + *(_QWORD *)(v6 + 40));
  else
    return HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8EEu);
}
