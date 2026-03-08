/*
 * XREFs of DmrValidateDeviceScope @ 0x14037BE8C
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x14037BF80 (DmrGetNextDrhdDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x14037BFAC (DmrGetNextRemappingStructure.c)
 *     DmrCheckPathMatch @ 0x14037C1AC (DmrCheckPathMatch.c)
 */

__int64 __fastcall DmrValidateDeviceScope(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // r15
  __int64 j; // rdx
  __int64 NextRemappingStructure; // rax
  __int64 v8; // rdi
  _BYTE *i; // rdx
  _BYTE *NextDrhdDeviceScope; // rax
  __int64 k; // rdx
  __int64 v13; // rbp
  __int64 m; // rdx
  __int64 v15; // rax
  __int64 v16; // r14

  v2 = 0;
  if ( *(_WORD *)a2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 4);
    if ( (v5 & 1) != 0 )
    {
      for ( i = 0LL; ; i = NextDrhdDeviceScope )
      {
        NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, i);
        if ( !NextDrhdDeviceScope )
          break;
        if ( (unsigned __int8)(*NextDrhdDeviceScope - 1) <= 1u )
          return (unsigned int)-1073741823;
      }
    }
    for ( j = 0LL; ; j = v8 )
    {
      NextRemappingStructure = DmrGetNextRemappingStructure(a1, j);
      v8 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*(_WORD *)NextRemappingStructure
        && NextRemappingStructure != a2
        && *(_WORD *)(NextRemappingStructure + 6) == *(_WORD *)(a2 + 6) )
      {
        if ( (v5 & *(_BYTE *)(NextRemappingStructure + 4) & 1) != 0 )
          return (unsigned int)-1073741823;
        for ( k = 0LL; ; k = v13 )
        {
          v13 = DmrGetNextDrhdDeviceScope(a2, k);
          if ( !v13 )
            break;
          for ( m = 0LL; ; m = v16 )
          {
            v15 = DmrGetNextDrhdDeviceScope(v8, m);
            v16 = v15;
            if ( !v15 )
              break;
            if ( (unsigned __int8)DmrCheckPathMatch(v13, v15) )
              return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  return v2;
}
