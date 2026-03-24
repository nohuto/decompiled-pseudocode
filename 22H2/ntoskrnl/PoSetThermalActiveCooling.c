/*
 * XREFs of PoSetThermalActiveCooling @ 0x1407C7FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x1403C95B4 (PopPropogateCoolingChange.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14078DE1C (PopThermalUpdateActiveTimeTracking.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x1407C80DC (PopDiagTraceThermalRequestActiveUpdate.c)
 *     PoGetThermalRequestSupport @ 0x1407C8130 (PoGetThermalRequestSupport.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // bp
  __int64 v7; // rdx
  char v8; // al

  v4 = 0;
  if ( (unsigned __int8)PoGetThermalRequestSupport(a1, 1LL) )
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
