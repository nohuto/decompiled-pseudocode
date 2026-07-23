/*
 * XREFs of PpmParkComputeDiff @ 0x14057D244
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14022C800 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     KeXorAffinityEx @ 0x140513938 (KeXorAffinityEx.c)
 */

__int64 PpmParkComputeDiff()
{
  __int64 v0; // r9
  unsigned __int16 *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r10

  PpmPerfNewCoreParkingMask[0] = 1310721;
  memset(&unk_140C128D4, 0, 0xA4uLL);
  PpmParkNewSoftParkingMask = 1310721;
  memset(&unk_140C12A34, 0, 0xA4uLL);
  if ( PpmParkNumNodes )
  {
    v0 = (unsigned int)PpmParkNumNodes;
    v1 = (unsigned __int16 *)(PpmParkNodes + 4);
    do
    {
      v2 = *v1;
      v3 = *(_QWORD *)(v1 + 14);
      if ( LOWORD(PpmPerfNewCoreParkingMask[0]) <= (unsigned __int16)v2 )
        LOWORD(PpmPerfNewCoreParkingMask[0]) = v2 + 1;
      *(_QWORD *)&PpmPerfNewCoreParkingMask[2 * v2 + 2] |= v3;
      v4 = *v1;
      v5 = *(_QWORD *)(v1 + 22);
      if ( (unsigned __int16)PpmParkNewSoftParkingMask <= (unsigned __int16)v4 )
        LOWORD(PpmParkNewSoftParkingMask) = v4 + 1;
      v1 += 136;
      qword_140C12A38[v4] |= v5;
      --v0;
    }
    while ( v0 );
  }
  return KeXorAffinityEx(
           PpmPerfCoreParkingMask,
           (unsigned __int16 *)PpmPerfNewCoreParkingMask,
           PpmPerfChangedCoreParkingMask);
}
