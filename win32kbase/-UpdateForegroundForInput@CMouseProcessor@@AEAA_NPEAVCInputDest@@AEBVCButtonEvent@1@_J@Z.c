bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v5; // di
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  HWND WindowHandle; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _BYTE v20[64]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v21 = a4;
  v5 = 1;
  if ( !CInputDest::DoesBelongToForeground((__int64)a2, 1) )
  {
    if ( *((_DWORD *)a3 + 8) == 1 )
    {
      if ( gpqForeground
        && *((_DWORD *)a2 + 23) == 2
        && (v9 = *((_QWORD *)a2 + 10)) != 0
        && grpdeskRitInput
        && v9 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL) )
      {
        WindowHandle = CInputDest::GetWindowHandle(a2);
        CBaseProcessor::PostQEventWork(v11, (__int64)WindowHandle, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        v12 = *((_QWORD *)a3 + 1);
        v21 = *(_QWORD *)(v12 + 132);
        v13 = *(_DWORD *)(v12 + 108);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v20, a2, v7, v8);
        v14 = &v21;
        if ( v13 == 1 )
          v14 = 0LL;
        v5 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput(a2, v14) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20, v15, v16, v17);
      }
    }
    else
    {
      v18 = *((_QWORD *)a3 + 1);
      if ( *(_DWORD *)(v18 + 108) != 1 )
        return (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v18 + 132), a2) != 0;
    }
  }
  return v5;
}
