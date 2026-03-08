/*
 * XREFs of HalpInterruptGetHighestPriorityInterrupt @ 0x1403CA4E0
 * Callers:
 *     HalpTimerOnlyClockInterruptPending @ 0x1403CA490 (HalpTimerOnlyClockInterruptPending.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptGetHighestPriorityInterrupt(_DWORD *a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  __int64 (__fastcall *v4)(_QWORD, char *, int *, __int64); // rax
  int v5; // eax
  _QWORD *Lines; // rax
  ULONG_PTR BugCheckParameter4; // r8
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h]

  v2 = HalpInterruptController;
  v9[0] = 0LL;
  v10 = 0;
  v11 = 0;
  LODWORD(v9[0]) = *(_DWORD *)(HalpInterruptController + 256);
  v4 = *(__int64 (__fastcall **)(_QWORD, char *, int *, __int64))(HalpInterruptController + 184);
  if ( v4 )
  {
    v5 = v4(*(_QWORD *)(HalpInterruptController + 16), (char *)v9 + 4, &v10, a2);
    if ( ((v5 - 2) & 0xFFFFFFFD) == 0 )
      return 3221225473LL;
    switch ( v5 )
    {
      case 0:
        KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v2 + 240), v2, 0LL);
      case 1:
        Lines = HalpInterruptFindLines((unsigned int *)v9);
        if ( !Lines )
        {
          HalpInterruptSetProblemEx(
            v2,
            18,
            HIDWORD(v9[0]),
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            3754);
          KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v2 + 240), v2, BugCheckParameter4);
        }
        *a1 = *(_DWORD *)(56LL * v11 + Lines[5] + 48);
        return 0LL;
      case 3:
        *a1 = v10;
        return 0LL;
    }
  }
  return 3221225659LL;
}
