/*
 * XREFs of PoEnergyContextStart @ 0x140701078
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PopEtInit @ 0x140B678A0 (PopEtInit.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x14070116C (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(PRKPROCESS PROCESS)
{
  unsigned __int64 v1; // r14
  char v2; // si
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  int ProcessAppId; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v1 = PROCESS[2].Affinity.StaticBitmap[4];
  v2 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( PopEtGlobals )
  {
    p_Blink = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
        return (unsigned int)-1073741558;
      KeStackAttachProcess(PROCESS, &ApcState);
      v2 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(PROCESS, v1 + 448);
    if ( ProcessAppId < 0 )
      *(_QWORD *)(v1 + 448) = PopEtGlobals + 872;
    else
      ProcessAppId = 0;
    if ( v2 )
    {
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      ExReleaseRundownProtection_0(p_Blink);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
