/*
 * XREFs of PoDisableSleepStates @ 0x140984060
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1403B03AC (VslpIumPhase4Initialize.c)
 *     PopInitializeHibernateGlobals @ 0x1408627D8 (PopInitializeHibernateGlobals.c)
 *     HalpLoadMicrocode @ 0x140934BE0 (HalpLoadMicrocode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
    v9 = (_QWORD *)qword_140C3F1A8;
    if ( *(__int64 **)qword_140C3F1A8 != &PopDisableSleepList )
      __fastfail(3u);
    *v8 = &PopDisableSleepList;
    v8[1] = v9;
    *v9 = v8;
    qword_140C3F1A8 = (__int64)v8;
    ExReleaseFastMutex(&PopDisableSleepMutex);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
