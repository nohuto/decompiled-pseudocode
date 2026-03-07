__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  __int64 v6; // r14
  unsigned int v7; // r12d
  int v8; // r15d
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID **v11; // r15
  PVOID *v12; // r13
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  char *v15; // rsi
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  char *Heap; // rax
  char *v20; // r12
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // r10
  __int64 *v24; // r9
  char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 Valid; // rcx
  __int64 v29; // rax
  __int64 *v30; // rax
  int v32; // ecx
  __int64 v33; // rax
  struct tagTHREADINFO **v34; // rdx
  struct tagTHREADINFO **v35; // rcx
  bool IsLockedShared; // al
  bool v37; // al
  tagQ *v38; // rcx
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-B8h] BYREF
  PVOID *v42; // [rsp+68h] [rbp-B0h]
  void (*v43)(void); // [rsp+70h] [rbp-A8h]
  __int128 v44; // [rsp+A0h] [rbp-78h]
  __int128 v45; // [rsp+B0h] [rbp-68h]
  __int128 v46; // [rsp+C0h] [rbp-58h]

  v6 = 0LL;
  if ( a2 && (*(_DWORD *)(a2 + 48) & 6) != 0 && a2 != *((_QWORD *)a1 + 57) && a1 != (struct tagTHREADINFO *)gTermIO[2] )
    return 3221225506LL;
  *((_DWORD *)a1 + 122) &= ~0x400000u;
  *((_QWORD *)a1 + 74) = a3;
  if ( a3 )
  {
    HandleInformation = 0LL;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) < 0 )
    {
      *((_DWORD *)a1 + 224) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 224) = HandleInformation.GrantedAccess;
      v7 = 3 * ((unsigned int)a3 >> 2);
      v8 = 0;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      EnterHandleFlagsCrit();
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        if ( !*(_QWORD *)CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        if ( CurrentProcessWin32Process
          && v7 < *(_DWORD *)(CurrentProcessWin32Process + 712)
          && _bittest64(*(const signed __int64 **)(CurrentProcessWin32Process + 720), v7) )
        {
          v8 = 1;
        }
      }
      LeaveHandleFlagsCrit();
      if ( v8 )
        *((_DWORD *)a1 + 122) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 224) = 0;
  }
  v11 = (PVOID **)((char *)a1 + 456);
  if ( a2 && (PVOID *)a2 == *v11 )
    return 0LL;
  v12 = *v11;
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  v41 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 16) = &v41;
  v42 = v12;
  v43 = (void (*)(void))UserDereferenceObject;
  if ( v12 )
    ObfReferenceObject(v12);
  v15 = (char *)*((_QWORD *)a1 + 56);
  if ( *v11 )
  {
    v34 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 93);
    v35 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 94);
    if ( v34[1] != (struct tagTHREADINFO *)((char *)a1 + 744) || *v35 != (struct tagTHREADINFO *)((char *)a1 + 744) )
      goto LABEL_65;
    *v35 = (struct tagTHREADINFO *)v34;
    v34[1] = (struct tagTHREADINFO *)v35;
  }
  LockObjectAssignment((char *)a1 + 456, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 58) = *(_QWORD *)(a2 + 8);
    v16 = (_QWORD *)((char *)a1 + 744);
    v17 = (_QWORD *)(a2 + 168);
    v18 = *(_QWORD *)(a2 + 168);
    if ( *(_QWORD *)(v18 + 8) == a2 + 168 )
    {
      *v16 = v18;
      *((_QWORD *)a1 + 94) = v17;
      *(_QWORD *)(v18 + 8) = v16;
      *v17 = v16;
      Heap = (char *)RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x30uLL);
      *((_QWORD *)a1 + 56) = Heap;
      v20 = (char *)a1 + 1056;
      if ( !Heap )
      {
        *((_QWORD *)a1 + 56) = v20;
        Heap = (char *)a1 + 1056;
      }
      goto LABEL_26;
    }
LABEL_65:
    __fastfail(3u);
  }
  *((_QWORD *)a1 + 58) = gpkdiStatic;
  Heap = (char *)a1 + 1056;
  *((_QWORD *)a1 + 56) = (char *)a1 + 1056;
  v20 = (char *)a1 + 1056;
LABEL_26:
  if ( v15 )
  {
    if ( v15 != Heap )
    {
      *(_OWORD *)Heap = *(_OWORD *)v15;
      *((_OWORD *)Heap + 1) = *((_OWORD *)v15 + 1);
      *((_OWORD *)Heap + 2) = *((_OWORD *)v15 + 2);
    }
    if ( v15 != v20 )
      RtlFreeHeap(v12[16], 0, v15);
  }
  else
  {
    *(_OWORD *)Heap = 0LL;
    *((_OWORD *)Heap + 1) = 0LL;
    *((_OWORD *)Heap + 2) = 0LL;
  }
  if ( !a2 )
    goto LABEL_57;
  v21 = *(_QWORD **)(*((_QWORD *)a1 + 53) + 696LL);
  if ( !v21 )
    goto LABEL_57;
  do
  {
    if ( v21[1] == a2 )
      break;
    v21 = (_QWORD *)*v21;
  }
  while ( v21 );
  if ( v21 )
  {
    v22 = *(_QWORD *)(a2 + 16) - v21[2];
    v23 = (_QWORD *)((char *)a1 + 472);
    *((_QWORD *)a1 + 59) = v22;
    v24 = (__int64 *)((char *)a1 + 480);
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = **((_QWORD **)a1 + 58) - v22;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = v21[2];
  }
  else
  {
LABEL_57:
    v23 = (_QWORD *)((char *)a1 + 472);
    *((_QWORD *)a1 + 59) = 0LL;
    v24 = (__int64 *)((char *)a1 + 480);
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = 0LL;
    v32 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 190) = v32;
    v33 = *((_QWORD *)a1 + 54);
    if ( v33 )
      *(_DWORD *)(v33 + 392) = v32;
  }
  v25 = (char *)*((_QWORD *)a1 + 56);
  v26 = *v24;
  if ( v25 == v20 )
    *(_QWORD *)(v26 + 96) = 0LL;
  else
    *(_QWORD *)(v26 + 96) = &v25[-*v23];
  if ( *((_QWORD *)a1 + 54) && (*((_DWORD *)a1 + 122) & 0x80u) == 0 && *v11 )
  {
    if ( !gbInDestroyHandleTableObjects )
    {
      v27 = SGDGetUserSessionState(v26);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v27 + 8)) != 1 )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL() )
          goto LABEL_76;
        if ( tagDomLock::IsLockedExclusive(gDomainHookLock)
          || (IsLockedShared = tagDomLock::IsLockedShared(gDomainHookLock)) )
        {
          IsLockedShared = 1;
        }
        if ( !IsLockedShared )
LABEL_76:
          __int2c();
      }
    }
    Valid = *(_QWORD *)(*((_QWORD *)a1 + 58) + 56LL);
    if ( Valid )
    {
      if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        Valid = PhkNextValid(Valid);
      if ( Valid )
        goto LABEL_90;
    }
    if ( !gbInDestroyHandleTableObjects )
    {
      v29 = SGDGetUserSessionState(Valid);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v29 + 8)) != 1 )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL() )
          goto LABEL_86;
        if ( tagDomLock::IsLockedExclusive(gDomainHookLock) || (v37 = tagDomLock::IsLockedShared(gDomainHookLock)) )
          v37 = 1;
        if ( !v37 )
LABEL_86:
          __int2c();
      }
    }
    Valid = *(_QWORD *)(*((_QWORD *)a1 + 58) + 48LL);
    if ( Valid )
    {
      if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        Valid = PhkNextValid(Valid);
      if ( Valid )
      {
LABEL_90:
        v38 = *(tagQ **)(*(_QWORD *)(Valid + 16) + 432LL);
        if ( v38 )
          tagQ::zzzAttachToQueue(v38, a1, 0LL, 0);
      }
    }
  }
  v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v30 )
    v6 = *v30;
  *(_QWORD *)(v6 + 16) = v41;
  if ( v42 )
    v43();
  return 0LL;
}
