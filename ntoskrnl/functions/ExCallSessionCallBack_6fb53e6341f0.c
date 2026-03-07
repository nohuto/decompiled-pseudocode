__int64 __fastcall ExCallSessionCallBack(unsigned int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int v7; // edi
  struct _KPROCESS *SessionById; // rax
  struct _KPROCESS *v9; // rsi
  int v10; // ebx
  union _RTL_RUN_ONCE *v11; // r14
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbp
  struct _KPROCESS *NextSession; // rbx
  __int64 v16; // r15
  int SessionId; // r12d
  int v18; // esi
  union _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rbp
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-88h] BYREF

  v4 = a4;
  v7 = -1073741811;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !a1 )
  {
    NextSession = (struct _KPROCESS *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      v16 = a3;
      do
      {
        SessionId = MmGetSessionId((__int64)NextSession);
        v18 = MmAttachSession(NextSession, &ApcState);
        if ( v18 >= 0 )
        {
          Win32Callouts = MmSessionGetWin32Callouts();
          v20 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
          v21 = v20;
          if ( v20 )
          {
            v18 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v20[1].Count)(v20[2].Count, a2, v16);
            ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v21);
          }
          MmDetachSession((__int64)NextSession, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        }
        if ( SessionId )
          v18 = v7;
        v7 = v18;
        NextSession = (struct _KPROCESS *)MmGetNextSession(NextSession);
      }
      while ( NextSession );
      v4 = a4;
    }
    v10 = 0;
LABEL_8:
    if ( v4 )
      *v4 = v7;
    return (unsigned int)v10;
  }
  SessionById = (struct _KPROCESS *)MmGetSessionById(*a1, a2);
  v9 = SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  v10 = MmAttachSession(SessionById, &ApcState);
  if ( v10 < 0 )
  {
    v10 = -1073741811;
  }
  else
  {
    v11 = MmSessionGetWin32Callouts();
    v12 = ExReferenceCallBackBlock((signed __int64 *)v11);
    v13 = v12;
    if ( v12 )
    {
      v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v12[1].Count)(v12[2].Count, a2, a3);
      ExDereferenceCallBackBlock((signed __int64 *)v11, v13);
    }
    else
    {
      v10 = -1073741811;
    }
    MmDetachSession((__int64)v9, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  }
  ObfDereferenceObject(v9);
  if ( v10 >= 0 )
    goto LABEL_8;
  return (unsigned int)v10;
}
