/*
 * XREFs of SmpInitializeKnownSubSystems @ 0x140005A50
 * Callers:
 *     SmpInit @ 0x140006E54 (SmpInit.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitializeKnownSubSystems()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rax

  v0 = 0LL;
  SmpKnownSubSysTable = (__int64)RtlAllocateHeap(
                                   *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                   SmBaseTag,
                                   0x300uLL);
  v1 = SmpKnownSubSysTable;
  if ( !SmpKnownSubSysTable )
    return 3221225495LL;
  v2 = 0LL;
  v3 = 32LL;
  while ( 1 )
  {
    v4 = (_QWORD *)(v0 + v1);
    v4[1] = v4;
    *v4 = v4;
    RtlInitializeSRWLock(v2 + v1 + 16);
    v2 += 24LL;
    v0 += 24LL;
    if ( !--v3 )
      break;
    v1 = SmpKnownSubSysTable;
  }
  RtlInitializeConditionVariable(&SmpSubSysReadyCondition);
  qword_140028578 = (__int64)&SmpOverflowSubSysList;
  SmpOverflowSubSysList = (__int64)&SmpOverflowSubSysList;
  return 0LL;
}
