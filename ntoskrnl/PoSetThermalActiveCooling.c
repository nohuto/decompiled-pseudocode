/*
 * XREFs of PoSetThermalActiveCooling @ 0x14097FC40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x140584860 (PopPropogateCoolingChange.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PoGetThermalRequestSupport @ 0x14085D140 (PoGetThermalRequestSupport.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x14098ED60 (PopDiagTraceThermalRequestActiveUpdate.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // bp
  __int64 v7; // rdx
  char v8; // al

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 1) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2 != 0;
    PopAcquireRwLockExclusive(v5 + 32);
    if ( *(_BYTE *)(a1 + 18) )
    {
      v8 = *(_BYTE *)(a1 + 17);
      if ( v8 != v6 )
      {
        LOBYTE(v7) = v8 == 0;
        PopThermalUpdateActiveTimeTracking(a1 + 40, v7);
        *(_BYTE *)(a1 + 17) = v6;
        PopDiagTraceThermalRequestActiveUpdate(a1);
        PopPropogateCoolingChange(v5);
      }
    }
    else
    {
      v4 = -1073741431;
    }
    PopReleaseRwLock(v5 + 32);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
