/*
 * XREFs of ?GetMinWidth@CAppLayoutOperationItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804F5270
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperationItem::GetMinWidth(
        CAppLayoutOperationItem *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int v2; // edx
  unsigned int v3; // edi
  unsigned int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a2 + 4);
  v3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v5 = MulDiv(96, v2, 100);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(**((_QWORD **)this + 2) + 288LL))(
         *((_QWORD *)this + 2),
         v5,
         &v9,
         &v10);
  if ( v6 >= 0 )
    return (unsigned int)v9;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperationitem.cpp",
      (const char *)(unsigned int)v6);
  return v3;
}
