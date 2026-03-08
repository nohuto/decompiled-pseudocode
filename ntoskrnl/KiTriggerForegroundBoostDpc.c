/*
 * XREFs of KiTriggerForegroundBoostDpc @ 0x1403CF580
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 */

void __fastcall KiTriggerForegroundBoostDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = -1LL;
  KeSetTimer2((__int64)&KiForegroundState, -(__int64)(unsigned int)(150000 * KiForegroundBoostTicks), 0LL, (__int64)v4);
}
