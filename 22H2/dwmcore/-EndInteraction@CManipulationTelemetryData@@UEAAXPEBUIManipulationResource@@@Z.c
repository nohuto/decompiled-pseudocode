/*
 * XREFs of ?EndInteraction@CManipulationTelemetryData@@UEAAXPEBUIManipulationResource@@@Z @ 0x180231F40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152990 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CManipulationTelemetryData::EndInteraction(
        CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  const struct IManipulationResource *v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  const struct IManipulationResource **v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_180344EB8 > 5 && (qword_180344EC8 & 2) != 0 && (qword_180344ED0 & 2) == qword_180344ED0 )
  {
    v4 = a2;
    v6 = &v4;
    v8 = 0;
    v7 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180344EB8,
      (unsigned __int8 *)dword_1802ECDB3,
      0LL,
      0LL,
      3u,
      &v5);
  }
  (*(void (__fastcall **)(_QWORD, const struct IManipulationResource *))(**(_QWORD **)(*((_QWORD *)this + 22) + 504LL)
                                                                       + 24LL))(
    *(_QWORD *)(*((_QWORD *)this + 22) + 504LL),
    a2);
}
