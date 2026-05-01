/*
 * XREFs of ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x18032CED0
 * Callers:
 *     _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x180310C90 (_lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator().c)
 *     _lambda_da7ad41009fba3d1d8d39f3832cc85a2_::operator() @ 0x1803113F8 (_lambda_da7ad41009fba3d1d8d39f3832cc85a2_--operator().c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x18032CC60 (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 *     ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1803314C0 (-RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$CloseServerWindow@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x18032ADB8 (--$CloseServerWindow@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 */

__int64 __fastcall ViewManagerBridge::CloseServerWindow(ViewManagerBridge *this, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( *((_BYTE *)this + 145) )
  {
    v4 = -2147417848;
    v5 = 590LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)v4);
    return v4;
  }
  ViewManagerInteropTraceLogging::CloseServerWindow<unsigned int &>((int *)&v8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 72LL))(*((_QWORD *)this + 13), a2);
  if ( (v4 & 0x80000000) != 0 )
  {
    v5 = 593LL;
    goto LABEL_5;
  }
  return v4;
}
