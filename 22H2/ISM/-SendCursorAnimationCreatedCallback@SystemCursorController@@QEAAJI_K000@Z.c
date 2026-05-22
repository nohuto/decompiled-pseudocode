/*
 * XREFs of ?SendCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K000@Z @ 0x18013D01C
 * Callers:
 *     _lambda_ba6101031141f0d6e8e74a4c358feff2_::operator() @ 0x18013E7FC (_lambda_ba6101031141f0d6e8e74a4c358feff2_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorController::SendCursorAnimationCreatedCallback(
        SystemCursorController *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == *((_DWORD *)this + 18) && (v6 = *((_QWORD *)this + 8)) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)(v6 + 8)
                                                                                                  + 56LL))(
           v6 + 8,
           a3,
           a4,
           a5,
           a6);
    if ( v7 >= 0 )
      return 0LL;
    v8 = 377LL;
  }
  else
  {
    v7 = -2147418113;
    v8 = 382LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
