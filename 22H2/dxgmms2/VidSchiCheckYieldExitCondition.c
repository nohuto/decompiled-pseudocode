/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C0018E0C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008770 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0018CD0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0018E58 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(__int64 a1, unsigned __int64 a2, char *a3)
{
  char v3; // r10
  __int64 v5; // r8

  v3 = 0;
  if ( *(_BYTE *)(a1 + 2024) )
  {
    v5 = *(_QWORD *)(a1 + 2000);
    if ( v5 )
    {
      if ( a2 > v5 + *(_QWORD *)(a1 + 2008) )
      {
        VidSchiStopNodeYield((struct _VIDSCH_NODE *)a1);
        v3 = 1;
      }
    }
  }
  *a3 = v3;
}
