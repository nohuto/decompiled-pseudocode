/*
 * XREFs of PopUserPresentOverride @ 0x14099BC00
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     PopEvaluateGlobalUserStatus @ 0x1407A6464 (PopEvaluateGlobalUserStatus.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopUserPresentOverride(char a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  PopAcquireAdaptiveLock(1);
  v2 = 0;
  if ( a1 )
  {
    v3 = PopUserPresentOverrideCount + 1;
  }
  else
  {
    if ( !PopUserPresentOverrideCount )
    {
      v2 = -1073741811;
      goto LABEL_11;
    }
    v3 = PopUserPresentOverrideCount - 1;
  }
  PopUserPresentOverrideCount = v3;
  if ( v3 == 1 && a1 || !v3 && !a1 )
    PopEvaluateGlobalUserStatus();
LABEL_11:
  PopReleaseAdaptiveLock();
  return v2;
}
