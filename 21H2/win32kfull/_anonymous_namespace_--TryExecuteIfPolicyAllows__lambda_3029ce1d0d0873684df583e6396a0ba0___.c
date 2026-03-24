/*
 * XREFs of _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___ @ 0x1C023F8D4
 * Callers:
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0240FD0 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00DAB90 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _lambda_3029ce1d0d0873684df583e6396a0ba0_::operator() @ 0x1C023FA9C (_lambda_3029ce1d0d0873684df583e6396a0ba0_--operator().c)
 *     ?IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@Z @ 0x1C0240744 (-IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@.c)
 */

char __fastcall anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___(
        __int64 a1,
        int a2)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v10 = *(_DWORD *)(a1 + 308);
  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v4 )
    v5 = ***(_QWORD ***)(v4 + 8);
  else
    v5 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v5)
    && v7
    && (unsigned __int8)CWindowGroupManager::IsPolicySet(v6, &v10)
    && (unsigned __int8)lambda_3029ce1d0d0873684df583e6396a0ba0_::operator()(v8, a1) )
  {
    return 1;
  }
  return v2;
}
