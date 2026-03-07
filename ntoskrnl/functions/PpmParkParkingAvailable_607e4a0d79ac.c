unsigned __int8 PpmParkParkingAvailable()
{
  unsigned __int8 v0; // bl
  unsigned int v1; // esi
  __int64 v2; // rdi
  unsigned int v3; // ecx
  __int64 v4; // rdx
  unsigned __int8 v5; // al
  unsigned __int8 result; // al

  if ( PpmParkNumNodes != 1 || KeGetCurrentPrcb()->LogicalProcessorsPerCore != *(unsigned __int8 *)(PpmParkNodes + 10) )
  {
    v0 = 0;
    v1 = 0;
    if ( !PpmParkNumNodes )
      goto LABEL_17;
    v2 = PpmParkNodes + 114;
    while ( 1 )
    {
      if ( *(_BYTE *)(v2 - 2)
        || *(_BYTE *)v2
        || *(_QWORD *)(v2 - 90)
        || !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
      {
        v0 = 1;
        goto LABEL_17;
      }
      v3 = 0;
      if ( !*(_BYTE *)(v2 - 103) )
        goto LABEL_16;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v2 + 70) + 104LL * v3;
        if ( *(_BYTE *)v4 )
          break;
LABEL_15:
        if ( ++v3 >= *(unsigned __int8 *)(v2 - 103) )
          goto LABEL_16;
      }
      v5 = *(_BYTE *)(v4 + 2);
      if ( *(_BYTE *)(v4 + 1) >= v5 && v5 >= *(_BYTE *)v4 )
        break;
      v0 = 1;
LABEL_16:
      ++v1;
      v2 += 192LL;
      if ( v1 >= PpmParkNumNodes )
      {
LABEL_17:
        result = v0;
        PpmIsParkingEnabled = v0;
        return result;
      }
    }
    if ( *(_QWORD *)(v4 + 24) )
      v0 = 1;
    goto LABEL_15;
  }
  return 0;
}
