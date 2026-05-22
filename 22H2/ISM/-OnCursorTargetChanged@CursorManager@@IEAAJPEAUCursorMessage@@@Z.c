/*
 * XREFs of ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x1801874A0
 * Callers:
 *     ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x180187308 (-OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 * Callees:
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x180025F3C (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::OnCursorTargetChanged(CursorManager *this, struct CursorMessage *a2)
{
  int CursorDefaultState; // ebx
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CursorDefaultState = GetCursorDefaultState(*((_DWORD *)a2 + 4), (__int64)v9);
  if ( CursorDefaultState < 0 )
  {
    v5 = 220LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)CursorDefaultState);
    return (unsigned int)CursorDefaultState;
  }
  v7 = *(_QWORD *)((char *)a2 + 4);
  *((_QWORD *)a2 + 2) = v10;
  CursorDefaultState = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 32LL))(
                         *((_QWORD *)this + 7),
                         v7);
  if ( CursorDefaultState < 0 )
  {
    v5 = 223LL;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)((char *)a2 + 4);
  *((_BYTE *)a2 + 16) = v9[1];
  CursorDefaultState = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 16LL))(
                         *((_QWORD *)this + 7),
                         v8);
  if ( CursorDefaultState < 0 )
  {
    v5 = 226LL;
    goto LABEL_3;
  }
  return 0LL;
}
