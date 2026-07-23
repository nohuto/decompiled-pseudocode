/*
 * XREFs of VerifierIoWMIWriteEvent @ 0x1409E9050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     WmiVerifierCopyEvent @ 0x1405A5AA0 (WmiVerifierCopyEvent.c)
 *     WmiVerifierTakeEventOwnership @ 0x1405A5AF8 (WmiVerifierTakeEventOwnership.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VerifierIoWMIWriteEvent(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // ebx
  PVOID v4; // rsi
  void *v5; // rcx

  if ( WmiVerifierTakeEventOwnership(a1) )
  {
    v4 = WmiVerifierCopyEvent(v2);
    if ( v4 )
    {
      v3 = ((__int64 (__fastcall *)(PVOID))pXdvIoWMIWriteEvent)(v4);
      v5 = (void *)a1;
      if ( v3 < 0 )
        v5 = v4;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)((__int64 (*)(void))pXdvIoWMIWriteEvent)();
  }
  return (unsigned int)v3;
}
