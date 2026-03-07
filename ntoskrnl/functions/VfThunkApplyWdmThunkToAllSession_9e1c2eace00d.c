__int64 __fastcall VfThunkApplyWdmThunkToAllSession(__int64 a1)
{
  int v2; // edi
  struct _KPROCESS *i; // rcx
  struct _KPROCESS *NextSession; // rax
  struct _KPROCESS *v6; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
  if ( !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyWdmThunksCurrentSession(a1);
  for ( i = 0LL; ; i = v6 )
  {
    NextSession = (struct _KPROCESS *)MmGetNextSession(i);
    v6 = NextSession;
    if ( !NextSession )
      break;
    v2 = MmAttachSession(NextSession, &ApcState);
    if ( v2 >= 0 )
    {
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
      {
        v2 = ViThunkApplyWdmThunksCurrentSession(a1);
        if ( v2 < 0 )
        {
          MmQuitNextSession(v6);
          return (unsigned int)v2;
        }
      }
      MmDetachSession((__int64)v6, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    }
  }
  return (unsigned int)v2;
}
