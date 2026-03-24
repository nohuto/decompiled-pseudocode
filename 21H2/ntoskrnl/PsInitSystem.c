/*
 * XREFs of PsInitSystem @ 0x140A4C2F8
 * Callers:
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     PspInitPhase3 @ 0x140A4B0C0 (PspInitPhase3.c)
 *     PspInitPhase2 @ 0x140A4B134 (PspInitPhase2.c)
 *     PspInitPhase1 @ 0x140A4B338 (PspInitPhase1.c)
 */

char __fastcall PsInitSystem(int a1, void *a2, __int64 a3, _DWORD *a4)
{
  int v4; // ecx
  __int64 v5; // rcx

  if ( !a1 )
    return PspInitPhase0(a2);
  v4 = a1 - 1;
  if ( !v4 )
    return PspInitPhase1();
  v5 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)v5 )
    return PspInitPhase2();
  if ( (_DWORD)v5 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return PspInitPhase3(v5, (__int64)a2, a3, a4);
}
