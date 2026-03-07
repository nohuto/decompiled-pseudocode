void __fastcall NotifyShell::ArrangementHotKey(int a1, int a2)
{
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax

  if ( (unsigned __int8)anonymous_namespace_::NotifyShellSimplePayload(0, 4, a1, a2, 0) )
  {
    if ( !a1 )
    {
      v4 = PtiCurrentShared(v3);
      CInputGlobals::SetPtiLastWoken(
        gpInputGlobals,
        *(struct tagTHREADINFO **)(*(_QWORD *)(*((_QWORD *)v4 + 57) + 320LL) + 16LL),
        0);
    }
  }
}
