/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x1409939AC
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402BDFD0 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( PopNetBIServiceSid )
  {
    v2 = RtlCheckTokenMembership(0LL, (void *)PopNetBIServiceSid, &v8);
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( !v8 )
      return (unsigned int)-1073741790;
    PopAcquirePolicyLock(v3);
    if ( PopNetBIRequestActive )
    {
      if ( !a1 )
        goto LABEL_8;
    }
    else if ( a1 )
    {
LABEL_8:
      PopNetBIRequestActive = a1;
LABEL_9:
      PopReleasePolicyLock(v5, v4, v6);
      return (unsigned int)v2;
    }
    v2 = -1073741811;
    goto LABEL_9;
  }
  return (unsigned int)-1073741823;
}
