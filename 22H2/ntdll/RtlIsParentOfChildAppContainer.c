/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x180046720
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x180044680 (RtlGetAppContainerSidType.c)
 */

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  unsigned int v4; // r8d
  _DWORD *v5; // rdx
  signed __int64 v6; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v4 = 1;
    v5 = (char *)ChildAppContainerSid + 12;
    v6 = (_BYTE *)ParentAppContainerSid - (_BYTE *)ChildAppContainerSid;
    while ( *(_DWORD *)((char *)v5 + v6) == *v5 )
    {
      ++v4;
      ++v5;
      if ( v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
