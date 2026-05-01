/*
 * XREFs of ?CrmpActivityWindowClosedWNFCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180008D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmpActivityWindowClosedWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD))
{
  a4[9](a4[2], a4, a4[10]);
  return 0LL;
}
