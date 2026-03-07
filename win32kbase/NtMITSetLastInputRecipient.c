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
