/*
 * XREFs of KiCancelClockTimer @ 0x1402D94E4
 * Callers:
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KePrepareClockTimerForIdle @ 0x1402A9B1C (KePrepareClockTimerForIdle.c)
 *     KiResetClockIntervalOneShot @ 0x1402D935C (KiResetClockIntervalOneShot.c)
 *     KeUpdatePendingQosRequest @ 0x140458E7C (KeUpdatePendingQosRequest.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x14022FD10 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldRearmClockTimer @ 0x1402D96B0 (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KiCancelClockTimer(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  NTSTATUS result; // eax
  char v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  char *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v3 = a3;
  result = 2 * a2;
  *(_BYTE *)(a1 + 16LL * (int)a2 + 36388) &= ~1u;
  if ( (unsigned int)dword_140C02F28 > 5 )
  {
    v11 = 0;
    v14 = 0;
    v9 = &v7;
    v7 = a2;
    v12 = &v6;
    v10 = 4;
    v6 = a3;
    v13 = 1;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C02F28,
               (unsigned __int8 *)byte_14002D25B,
               0LL,
               0LL,
               4u,
               &v8);
  }
  if ( v3 )
  {
    LOBYTE(a2) = 1;
    result = KiShouldRearmClockTimer(a1, a2, a3);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(a1 + 36368) = 2;
      return KiSetNextClockTickDueTime(1);
    }
  }
  return result;
}
