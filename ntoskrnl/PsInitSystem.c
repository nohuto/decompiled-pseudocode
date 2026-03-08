/*
 * XREFs of PsInitSystem @ 0x140B42F74
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140B422C8 (PspInitPhase1.c)
 *     PspInitPhase2 @ 0x140B64880 (PspInitPhase2.c)
 *     PspInitPhase3 @ 0x140B726D0 (PspInitPhase3.c)
 */

char __fastcall PsInitSystem(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return PspInitPhase0(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return PspInitPhase1();
  v3 = v2 - 1;
  if ( !v3 )
    return PspInitPhase2();
  if ( v3 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return PspInitPhase3();
}
