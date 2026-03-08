/*
 * XREFs of DbgkpMarkProcessPeb @ 0x1409344AC
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x14067F39C (DbgkClearProcessDebugObject.c)
 *     DbgkCopyProcessDebugPort @ 0x14070E820 (DbgkCopyProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x1409341B0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409351E4 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

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
