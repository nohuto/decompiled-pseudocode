/*
 * XREFs of ?OnDeviceCommandStatic@InputStateManager@@SAJPEAX0H@Z @ 0x180087830
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::OnDeviceCommandStatic(char *a1, char *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 || !a2 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      809LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)0x8000FFFFLL);
    JUMPOUT(0x180087897LL);
  }
  v2 = (*(__int64 (__fastcall **)(char *, _QWORD, char *))(*((_QWORD *)a1 + 1) + 72LL))(
         a1 + 8,
         *(unsigned int *)a2,
         a2 + 8);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      817LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return 0LL;
}
