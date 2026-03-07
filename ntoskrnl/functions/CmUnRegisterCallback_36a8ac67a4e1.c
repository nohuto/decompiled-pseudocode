NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  __int64 NextElement; // rax
  _QWORD *v4; // rdi
  volatile signed __int32 *v5; // r14
  int v6; // eax
  _QWORD *v7; // rcx
  void **v8; // rax
  _QWORD *v10; // rcx
  void **v11; // rax
  char v12; // r14
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *i; // rcx
  _QWORD *v17; // r15
  _QWORD *v18; // r13
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // r13
  _QWORD *v26; // r15
  _QWORD *v27; // rbx
  PSLIST_ENTRY v28; // rbx
  PSLIST_ENTRY v29; // rcx
  void *v30; // rcx
  __int64 v31; // rcx
  void *v32; // rbx
  PVOID *v33; // r15
  __int128 v34; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v37; // [rsp+58h] [rbp-90h]
  __int64 v38; // [rsp+68h] [rbp-80h]
  PVOID *v39; // [rsp+70h] [rbp-78h]
  char *v40; // [rsp+78h] [rbp-70h]
  __int128 v41; // [rsp+80h] [rbp-68h] BYREF
  __int128 v42; // [rsp+90h] [rbp-58h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-48h]
  __int64 v44; // [rsp+100h] [rbp+18h] BYREF
  int v45; // [rsp+108h] [rbp+20h]

  v41 = 0LL;
  v2 = -1073741811;
  v45 = -1073741811;
  v42 = 0LL;
  v43 = 0LL;
  v34 = 0LL;
  CmpInitializeThreadInfo((__int64)&v41);
  v36 = 0LL;
  CmpLockCallbackListExclusive();
  do
  {
    do
    {
      NextElement = CmListGetNextElement(&CallbackListHead, &v36, 0LL);
      v4 = (_QWORD *)NextElement;
      v38 = NextElement;
      if ( !NextElement )
        goto LABEL_12;
    }
    while ( *(_QWORD *)(NextElement + 24) != Cookie.QuadPart );
    v5 = (volatile signed __int32 *)(NextElement + 16);
    v6 = *(_DWORD *)(NextElement + 16);
    LODWORD(v44) = v6;
    if ( !v6 )
    {
      v10 = (_QWORD *)*v4;
      v11 = (void **)v4[1];
      if ( *(_QWORD **)(*v4 + 8LL) == v4 && *v11 == v4 )
      {
        *v11 = v10;
        v10[1] = v11;
        CmpUnlockCallbackList();
        v2 = 0;
        v45 = 0;
        goto LABEL_18;
      }
LABEL_46:
      __fastfail(3u);
    }
  }
  while ( v6 < 0 );
  _InterlockedOr(v5, 0x80000000);
  CmpUnlockCallbackList();
  while ( 1 )
  {
    LODWORD(v44) = *((_DWORD *)v4 + 4);
    if ( (_DWORD)v44 == 0x80000000 )
      break;
    ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, v5, &v44, 4uLL, 0LL);
  }
  CmpLockCallbackListExclusive();
  v7 = (_QWORD *)*v4;
  v8 = (void **)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || *v8 != v4 )
    goto LABEL_46;
  *v8 = v7;
  v7[1] = v8;
  CmpUnlockCallbackList();
  v2 = 0;
  v45 = 0;
LABEL_12:
  if ( v2 < 0 )
  {
    CmpUnlockCallbackList();
    goto LABEL_14;
  }
LABEL_18:
  *((_QWORD *)&v34 + 1) = &v34;
  *(_QWORD *)&v34 = &v34;
  v12 = 0;
  CmpLockContextListExclusive();
  v13 = v4 + 8;
  v40 = (char *)(v4 + 8);
  v37 = v4 + 8;
  v14 = (_QWORD *)v4[8];
  v35[0] = v14;
  v15 = v14;
  for ( i = v14; ; i = (_QWORD *)v35[0] )
  {
    v17 = i;
    if ( v15 == v13 )
      break;
    v35[0] = *v14;
    v18 = i - 2;
    if ( ObReferenceObjectSafe(i[4]) )
    {
      v19 = *v17;
      v20 = (_QWORD *)v17[1];
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_46;
      if ( (_QWORD *)*v20 != v17 )
        goto LABEL_46;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = *v18;
      v22 = (_QWORD *)v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 )
        goto LABEL_46;
      if ( (_QWORD *)*v22 != v18 )
        goto LABEL_46;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = (_QWORD *)*((_QWORD *)&v34 + 1);
      if ( **((__int128 ***)&v34 + 1) != &v34 )
        goto LABEL_46;
      *v14 = &v34;
      v14[1] = v23;
      *v23 = v14;
      *((_QWORD *)&v34 + 1) = v14;
    }
    else
    {
      v12 = 1;
    }
    v15 = (_QWORD *)v35[0];
    v14 = (_QWORD *)v35[0];
  }
  CmpUnlockContextList();
  while ( 1 )
  {
    v24 = v34;
    if ( (__int128 *)v34 == &v34 )
      break;
    v31 = *(_QWORD *)v34;
    if ( *(__int128 **)(v34 + 8) != &v34 || *(_QWORD *)(v31 + 8) != (_QWORD)v34 )
      goto LABEL_46;
    *(_QWORD *)&v34 = *(_QWORD *)v34;
    *(_QWORD *)(v31 + 8) = &v34;
    v32 = (void *)(v24 - 16);
    v35[1] = v24 - 16;
    v33 = (PVOID *)(v24 - 16 + 48);
    v39 = v33;
    v42 = *(_OWORD *)v33;
    ((void (__fastcall *)(_QWORD, __int64, __int128 *))v4[5])(v4[4], 40LL, &v42);
    ObfDereferenceObject(*v33);
    ExFreePoolWithTag(v32, 0x63634D43u);
  }
  v25 = v37;
  v26 = v37;
  while ( v12 )
  {
    CmpLockContextListExclusive();
    v35[0] = *v13;
    v27 = (_QWORD *)v35[0];
    CmpUnlockContextList();
    if ( v27 == v25 )
      v12 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, v26, v35, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v28 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v28 )
    {
      v29 = v28;
      v28 = v28->Next;
      ExFreePoolWithTag(v29, 0);
    }
  }
  v30 = (void *)v4[7];
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  ExFreePoolWithTag(v4, 0);
LABEL_14:
  CmCleanupThreadInfo((__int64 *)&v41);
  return v2;
}
