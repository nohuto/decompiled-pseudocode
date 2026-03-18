/*
 * XREFs of PopSystemIdleEventHandler @ 0x14080C220
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSystemIdleEventHandler(char a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v6; // ecx

  if ( a1 )
  {
    *a2 = 1;
    return 0LL;
  }
  PopAcquireAdaptiveLock(1);
  if ( (_BYTE)PopAdaptiveBootContext )
  {
    *a3 = 0;
    v6 = BYTE8(PopAdaptiveBootContext) & 7;
    if ( v6 == 1 )
    {
      *a2 = 2;
    }
    else
    {
      if ( v6 - 2 > 4 )
        goto LABEL_3;
      *a2 = 10;
      *a3 = PopAdaptiveBootstateToSystemPowerState[v6];
    }
    PopReleaseAdaptiveLock();
    return 0LL;
  }
LABEL_3:
  PopReleaseAdaptiveLock();
  if ( PopPlatformAoAc )
  {
    *a2 = 2;
  }
  else
  {
    *a2 = 10;
    *a3 = 0;
  }
  return 0LL;
}
