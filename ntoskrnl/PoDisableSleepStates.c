/*
 * XREFs of PoDisableSleepStates @ 0x140980FB0
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1403AB65C (VslpIumPhase4Initialize.c)
 *     PopInitializeHibernateGlobals @ 0x14082ABAC (PopInitializeHibernateGlobals.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  Pool2 = ExAllocatePool2(256LL, 24LL, 1683189584LL);
  v7 = 0;
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 20) = a2;
    ExAcquireFastMutex(&PopDisableSleepMutex);
    v9 = (_QWORD *)qword_140C3ED68;
    if ( *(__int64 **)qword_140C3ED68 != &PopDisableSleepList )
      __fastfail(3u);
    *v8 = &PopDisableSleepList;
    v8[1] = v9;
    *v9 = v8;
    qword_140C3ED68 = (__int64)v8;
    ExReleaseFastMutex(&PopDisableSleepMutex);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
