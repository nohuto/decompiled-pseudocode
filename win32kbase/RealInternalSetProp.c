__int64 __fastcall RealInternalSetProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bp
  __int16 v6; // di
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbx
  __int16 v21; // ax
  __int64 Prop; // rax
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rcx
  __int64 v26; // rax

  v4 = a4;
  v6 = a2;
  if ( !a2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( !gbInDestroyHandleTableObjects )
  {
    v8 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL(v10, v9, v11, v12) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
    if ( !gbInDestroyHandleTableObjects )
    {
      v13 = SGDGetUserSessionState(v10, v9, v11, v12);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v13 + 8)) != 1
        && (!IS_USERCRIT_OWNED_AT_ALL(v15, v14, v16, v17) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
      {
        __int2c();
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 24);
  if ( !v18 || !v6 || (v19 = *(_DWORD *)(v18 + 4), v20 = v18 + 8, !v19) )
  {
LABEL_19:
    Prop = CreateProp(a1);
    v20 = Prop;
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = v6;
      *(_WORD *)(Prop + 10) = v4;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
      if ( CurrentProcessWin32Process )
      {
        v25 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x4000000) != 0 )
        *(_WORD *)(v20 + 10) |= 0x10u;
      v26 = PsGetCurrentProcessWin32Process(v25);
      if ( v26 )
        v26 &= -(__int64)(*(_QWORD *)v26 != 0LL);
      *(_DWORD *)(v20 + 12) = *(_DWORD *)(v26 + 868);
      goto LABEL_27;
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( *(_WORD *)(v20 + 8) != v6 )
      goto LABEL_14;
    v21 = *(_WORD *)(v20 + 10) & 1;
    if ( (v4 & 1) != 0 )
      break;
    if ( !v21 )
      goto LABEL_18;
LABEL_14:
    v20 += 16LL;
    if ( !--v19 )
      goto LABEL_19;
  }
  if ( !v21 )
    goto LABEL_14;
LABEL_18:
  if ( !v20 )
    goto LABEL_19;
LABEL_27:
  *(_QWORD *)v20 = a3;
  return 1LL;
}
