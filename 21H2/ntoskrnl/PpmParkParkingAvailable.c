/*
 * XREFs of PpmParkParkingAvailable @ 0x1407BB1A0
 * Callers:
 *     PpmParkRegisterParking @ 0x1403C1890 (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x1408F9404 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F9504 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned __int8 v0; // bl
  unsigned int v1; // esi
  __int64 v2; // rdi
  unsigned int v3; // ecx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r9
  unsigned __int8 result; // al

  if ( PpmParkNumNodes != 1 || KeGetCurrentPrcb()->LogicalProcessorsPerCore != *(unsigned __int8 *)(PpmParkNodes + 6) )
  {
    v0 = 0;
    v1 = 0;
    if ( !PpmParkNumNodes )
      goto LABEL_17;
    v2 = PpmParkNodes + 132;
    while ( 1 )
    {
      if ( *(_BYTE *)(v2 + 2)
        || *(_BYTE *)(v2 + 4)
        || *(_QWORD *)(v2 - 100)
        || !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
      {
        v0 = 1;
        goto LABEL_17;
      }
      v3 = 0;
      v4 = (_QWORD *)(v2 - 76);
      v5 = 0LL;
      while ( 1 )
      {
        v6 = *(_BYTE *)(v2 + v5 - 4);
        if ( v6 )
          break;
LABEL_15:
        ++v3;
        ++v5;
        ++v4;
        if ( v3 >= 2 )
          goto LABEL_16;
      }
      v7 = *(_BYTE *)(v2 + v5);
      if ( *(_BYTE *)(v2 + v5 - 2) >= v7 && v7 >= v6 )
        break;
      v0 = 1;
LABEL_16:
      ++v1;
      v2 += 272LL;
      if ( v1 >= PpmParkNumNodes )
      {
LABEL_17:
        result = v0;
        PpmIsParkingEnabled = v0;
        return result;
      }
    }
    if ( *v4 )
      v0 = 1;
    goto LABEL_15;
  }
  return 0;
}
