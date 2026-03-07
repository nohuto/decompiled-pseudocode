void __fastcall DbgkpMarkProcessPeb(PRKPROCESS PROCESS)
{
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  __int64 *v3; // rdx
  __int16 v4; // ax
  __int64 v6; // rdx
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  p_Blink = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
  {
    if ( PROCESS[1].Affinity.StaticBitmap[24] )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(PROCESS[1].Affinity.StaticBitmap[24] + 2) = PROCESS[1].Affinity.StaticBitmap[29] != 0;
      v3 = (__int64 *)PROCESS[1].Affinity.StaticBitmap[30];
      if ( v3 )
      {
        v4 = WORD2(PROCESS[2].Affinity.StaticBitmap[20]);
        if ( v4 == 332 || v4 == 452 )
        {
          v6 = *v3;
          if ( v6 )
            *(_BYTE *)(v6 + 2) = *(_BYTE *)(PROCESS[1].Affinity.StaticBitmap[24] + 2);
        }
      }
      ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    }
    ExReleaseRundownProtection_0(p_Blink);
  }
}
