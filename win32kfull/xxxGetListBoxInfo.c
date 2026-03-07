__int64 __fastcall xxxGetListBoxInfo(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 *v4; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  PRKPROCESS *v9; // r14
  unsigned __int64 v10; // rsi

  v2 = 0LL;
  v4 = (unsigned __int64 *)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(a1);
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v7 = -*(_QWORD *)CurrentProcessWin32Process;
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    v9 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL);
    if ( v9 != (PRKPROCESS *)v8 )
      KeAttachProcess(*v9);
    v10 = *v4;
    if ( *v4 )
    {
      if ( !PsGetCurrentProcessWow64Process(v7) )
        v2 = 3LL;
      if ( (v2 & v10) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (*(_DWORD *)(v10 + 92) & 0x40000) != 0 )
        LODWORD(v2) = *(_DWORD *)(v10 + 76);
      else
        LODWORD(v2) = *(_DWORD *)(v10 + 32);
    }
    if ( v9 != (PRKPROCESS *)v8 )
      KeDetachProcess();
    return (unsigned int)v2;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(a1, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
