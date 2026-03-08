/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C016BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0009FE0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     PtiFromThreadId @ 0x1C00A6C40 (PtiFromThreadId.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rax

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v5 = 0LL;
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v11 = (struct tagTHREADINFO *)PtiFromThreadId(v4);
    if ( v11 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v11, 0);
      v5 = 1LL;
      goto LABEL_7;
    }
    v6 = 87;
  }
  else
  {
    v6 = 5;
  }
  UserSetLastError(v6);
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v5;
}
