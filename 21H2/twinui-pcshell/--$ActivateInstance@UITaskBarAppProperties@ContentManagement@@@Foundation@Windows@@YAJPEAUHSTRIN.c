/*
 * XREFs of ??$ActivateInstance@UITaskBarAppProperties@ContentManagement@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITaskBarAppProperties@ContentManagement@@@Z @ 0x18014FDBC
 * Callers:
 *     ?v_TrackUnpinnedApp@CTaskbandPin@@MEAAJPEBG@Z @ 0x180152160 (-v_TrackUnpinnedApp@CTaskbandPin@@MEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<ContentManagement::ITaskBarAppProperties>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v3 = RoActivateInstance(a1, &v5);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *a2 = v5;
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(
             v5,
             &GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)v3;
}
