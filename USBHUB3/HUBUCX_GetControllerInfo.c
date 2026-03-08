/*
 * XREFs of HUBUCX_GetControllerInfo @ 0x1C0028954
 * Callers:
 *     HUBHSM_Configuring @ 0x1C0008800 (HUBHSM_Configuring.c)
 *     HUBHSM_GettingRootHubInfo @ 0x1C0009CB0 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetControllerInfo(__int64 a1)
{
  _DWORD *v1; // rbx
  bool v3; // zf
  __int64 result; // rax

  v1 = (_DWORD *)(a1 + 168);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 576))(*(_QWORD *)(a1 + 248), a1 + 168);
  v3 = *v1 == 3;
  *(_BYTE *)(a1 + 200) = 0;
  result = *(unsigned __int8 *)(a1 + 200);
  if ( v3 )
    result = 1LL;
  *(_BYTE *)(a1 + 200) = result;
  return result;
}
