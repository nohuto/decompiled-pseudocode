/*
 * XREFs of PpmEnableWmiInterface @ 0x14084E6B0
 * Callers:
 *     PopNewProcessorCallback @ 0x14097D420 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x140296080 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x140869750 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  unsigned int i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = KeGetPrcb(i);
      v2 = GroupAffinity;
      if ( GroupAffinity )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(GroupAffinity + 33840), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v2 + 33832), 0x80000001);
      }
    }
  }
  return GroupAffinity;
}
