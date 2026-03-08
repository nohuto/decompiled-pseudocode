/*
 * XREFs of EtwpProfileInterrupt @ 0x1405FBC20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwpProfileInterrupt(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v2; // rdx
  unsigned int v3; // ecx
  unsigned int CurrentRunTime; // eax
  _KPROCESS *Process; // r11
  char v6; // r8
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int8 NestingLevel; // al
  char v9; // r8
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  char *v11; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-28h]
  __int16 v14; // [rsp+3Ch] [rbp-24h]
  char v15; // [rsp+3Eh] [rbp-22h]
  char v16; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp-14h]

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 360);
  v3 = 34656770;
  CurrentRunTime = CurrentThread[1].CurrentRunTime;
  if ( v2 > 0x7FFFFFFEFFFFLL )
    v3 = 34658818;
  Process = CurrentThread->Process;
  v15 = 0;
  v13 = CurrentRunTime;
  v6 = 8 * CurrentThread->Priority;
  v15 = v6;
  v12 = v2;
  v14 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel != 2 )
  {
    if ( NestingLevel <= 1u )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
LABEL_7:
    v9 = v6 | 2;
    goto LABEL_8;
  }
  v9 = v6 | 1;
LABEL_8:
  v3 &= ~0x4000u;
  v15 = v9;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v11 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    while ( *((_DWORD *)v11 + 29) <= 0xFFu )
    {
      LOBYTE(SchedulingGroup) = v11[116];
      if ( !(_BYTE)SchedulingGroup )
      {
        v11 = (char *)*((_QWORD *)v11 + 51);
        if ( v11 )
          continue;
      }
      goto LABEL_16;
    }
    LOBYTE(SchedulingGroup) = -1;
  }
LABEL_16:
  v19 = 0;
  v17 = &v12;
  v16 = (char)SchedulingGroup;
  v18 = 16;
  EtwTraceSiloKernelEvent(*(_QWORD *)&Process[2].Header.Lock, (__int64)&v17, 1u, 0x20000002u, 0xF2Eu, v3);
}
