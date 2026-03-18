/*
 * XREFs of PpmParkParkingAvailable @ 0x14081A654
 * Callers:
 *     PpmParkRegisterParking @ 0x1403CE6F8 (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x14099E10C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099E20C (PpmParkClearForcedMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned __int8 v0; // bl
  unsigned int v1; // esi
  _BYTE *v2; // rdi
  unsigned int v3; // ecx
  unsigned __int8 *v4; // rax
  _QWORD *v5; // rdx
  unsigned __int8 v6; // r8
  unsigned __int8 result; // al

  if ( PpmParkNumNodes != 1 || KeGetCurrentPrcb()->LogicalProcessorsPerCore != *(unsigned __int8 *)(PpmParkNodes + 6) )
  {
    v0 = 0;
    v1 = 0;
    if ( !PpmParkNumNodes )
      goto LABEL_17;
    v2 = (_BYTE *)(PpmParkNodes + 136);
    while ( 1 )
    {
      if ( *(v2 - 2) || *v2 || *((_QWORD *)v2 - 13) || !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
      {
        v0 = 1;
        goto LABEL_17;
      }
      v3 = 0;
      v4 = v2 - 4;
      v5 = v2 - 80;
      while ( 1 )
      {
        v6 = *(v4 - 4);
        if ( v6 )
          break;
LABEL_15:
        ++v3;
        ++v5;
        ++v4;
        if ( v3 >= 2 )
          goto LABEL_16;
      }
      if ( *(v4 - 2) >= *v4 && *v4 >= v6 )
        break;
      v0 = 1;
LABEL_16:
      ++v1;
      v2 += 336;
      if ( v1 >= PpmParkNumNodes )
      {
LABEL_17:
        result = v0;
        PpmIsParkingEnabled = v0;
        return result;
      }
    }
    if ( *v5 )
      v0 = 1;
    goto LABEL_15;
  }
  return 0;
}
