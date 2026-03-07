__int64 PpmParkComputeDiff()
{
  __int64 v0; // r8
  unsigned __int16 *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r9

  PpmPerfNewCoreParkingMask[0] = 2097153;
  memset(&unk_140C0BAB4, 0, 0x104uLL);
  PpmParkNewSoftParkingMask = 2097153;
  memset(&unk_140C0D4D4, 0, 0x104uLL);
  if ( PpmParkNumNodes )
  {
    v0 = (unsigned int)PpmParkNumNodes;
    v1 = (unsigned __int16 *)(PpmParkNodes + 4);
    do
    {
      v2 = *v1;
      v3 = *(_QWORD *)(v1 + 10);
      if ( LOWORD(PpmPerfNewCoreParkingMask[0]) <= (unsigned __int16)v2 )
      {
        if ( HIWORD(PpmPerfNewCoreParkingMask[0]) <= (unsigned __int16)v2 )
          goto LABEL_7;
        LOWORD(PpmPerfNewCoreParkingMask[0]) = v2 + 1;
      }
      *(_QWORD *)&PpmPerfNewCoreParkingMask[2 * v2 + 2] |= v3;
LABEL_7:
      v4 = *v1;
      v5 = *(_QWORD *)(v1 + 18);
      if ( (unsigned __int16)PpmParkNewSoftParkingMask > (unsigned __int16)v4 )
        goto LABEL_10;
      if ( HIWORD(PpmParkNewSoftParkingMask) > (unsigned __int16)v4 )
      {
        LOWORD(PpmParkNewSoftParkingMask) = v4 + 1;
LABEL_10:
        qword_140C0D4D8[v4] |= v5;
      }
      v1 += 96;
      --v0;
    }
    while ( v0 );
  }
  return KiXorAffinityEx(
           (char *)PpmPerfCoreParkingMask,
           PpmPerfNewCoreParkingMask,
           &PpmPerfChangedCoreParkingMask,
           word_140C0D912);
}
