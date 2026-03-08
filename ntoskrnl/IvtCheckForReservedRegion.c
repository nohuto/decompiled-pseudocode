/*
 * XREFs of IvtCheckForReservedRegion @ 0x14080BF70
 * Callers:
 *     <none>
 * Callees:
 *     DmrGetNextRemappingStructure @ 0x14037BFAC (DmrGetNextRemappingStructure.c)
 *     DmrGetNextDeviceScope @ 0x14037C0D0 (DmrGetNextDeviceScope.c)
 *     HalpIvtCheckIdPathMatch @ 0x14037C118 (HalpIvtCheckIdPathMatch.c)
 */

char __fastcall IvtCheckForReservedRegion(_DWORD *a1)
{
  __int64 i; // rdx
  _WORD *NextRemappingStructure; // rax
  _WORD *v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 j; // r8
  char *NextDeviceScope; // rax
  char *v8; // rbp

  if ( *a1 == 1 && qword_140C6A758 )
  {
    for ( i = 0LL; ; i = (__int64)v4 )
    {
      NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(qword_140C6A758, i);
      v4 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( *NextRemappingStructure == 1 )
      {
        v5 = (unsigned __int64)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
        for ( j = 0LL; ; j = (unsigned __int64)v8 )
        {
          NextDeviceScope = (char *)DmrGetNextDeviceScope((unsigned __int64)(v4 + 12), v5, j);
          v8 = NextDeviceScope;
          if ( !NextDeviceScope )
            break;
          if ( HalpIvtCheckIdPathMatch((__int64)a1, NextDeviceScope) )
            return 1;
        }
      }
    }
  }
  return 0;
}
