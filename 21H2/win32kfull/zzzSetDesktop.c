/*
 * XREFs of zzzSetDesktop @ 0x1C005DB40
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00D22F8 (xxxCreateWindowStation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     GetJournallingQueue @ 0x1C005DF30 (GetJournallingQueue.c)
 *     CheckHandleFlag @ 0x1C005DFC4 (CheckHandleFlag.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  PVOID *v6; // r13
  __int64 ThreadWin32Thread; // rax
  char *v8; // r14
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  char *Heap; // rax
  _QWORD *i; // rdx
  __int64 v14; // r8
  struct tagTHREADINFO *v15; // rdx
  __int64 v16; // rcx
  tagQ *JournallingQueue; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  struct tagTHREADINFO **v22; // rdx
  _QWORD v23[12]; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D8h] [rbp+20h] BYREF

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
      *((_DWORD *)a1 + 222) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 222) = HandleInformation.GrantedAccess;
      if ( (unsigned int)CheckHandleFlag(0LL) )
        *((_DWORD *)a1 + 122) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 222) = 0;
  }
  if ( a2 && a2 == *((_QWORD *)a1 + 57) )
    return 0LL;
  v6 = (PVOID *)*((_QWORD *)a1 + 57);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23[0] = *(_QWORD *)(ThreadWin32Thread + 16);
  *(_QWORD *)(ThreadWin32Thread + 16) = v23;
  v23[1] = v6;
  v23[2] = UserDereferenceObject;
  if ( v6 )
    ObfReferenceObject(v6);
  v8 = (char *)*((_QWORD *)a1 + 56);
  if ( *((_QWORD *)a1 + 57) )
  {
    v21 = *((_QWORD *)a1 + 93);
    v22 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 94);
    if ( *(struct tagTHREADINFO **)(v21 + 8) != (struct tagTHREADINFO *)((char *)a1 + 744)
      || *v22 != (struct tagTHREADINFO *)((char *)a1 + 744) )
    {
      goto LABEL_46;
    }
    *v22 = (struct tagTHREADINFO *)v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
  LockObjectAssignment((char *)a1 + 456, a2);
  if ( !a2 )
  {
    *((_QWORD *)a1 + 58) = gpkdiStatic;
    goto LABEL_37;
  }
  *((_QWORD *)a1 + 58) = *(_QWORD *)(a2 + 8);
  v9 = (_QWORD *)((char *)a1 + 744);
  v10 = (_QWORD *)(a2 + 168);
  v11 = *(_QWORD *)(a2 + 168);
  if ( *(_QWORD *)(v11 + 8) != a2 + 168 )
LABEL_46:
    __fastfail(3u);
  *v9 = v11;
  *((_QWORD *)a1 + 94) = v10;
  *(_QWORD *)(v11 + 8) = v9;
  *v10 = v9;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x28uLL);
  *((_QWORD *)a1 + 56) = Heap;
  if ( !Heap )
  {
LABEL_37:
    Heap = (char *)a1 + 1048;
    *((_QWORD *)a1 + 56) = (char *)a1 + 1048;
  }
  if ( v8 )
  {
    if ( v8 != Heap )
    {
      *(_OWORD *)Heap = *(_OWORD *)v8;
      *((_OWORD *)Heap + 1) = *((_OWORD *)v8 + 1);
      *((_QWORD *)Heap + 4) = *((_QWORD *)v8 + 4);
    }
    if ( v8 != (char *)a1 + 1048 )
      RtlFreeHeap(v6[16], 0, v8);
  }
  else
  {
    *(_OWORD *)Heap = 0LL;
    *((_OWORD *)Heap + 1) = 0LL;
    *((_QWORD *)Heap + 4) = 0LL;
  }
  if ( !a2 )
    goto LABEL_38;
  for ( i = *(_QWORD **)(*((_QWORD *)a1 + 53) + 704LL); i && i[1] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    v14 = *(_QWORD *)(a2 + 16) - i[2];
    *((_QWORD *)a1 + 59) = v14;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = **((_QWORD **)a1 + 58) - v14;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = i[2];
  }
  else
  {
LABEL_38:
    *((_QWORD *)a1 + 59) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = 0LL;
    v19 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 190) = v19;
    v20 = *((_QWORD *)a1 + 54);
    if ( v20 )
      *(_DWORD *)(v20 + 384) = v19;
  }
  v15 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 56);
  v16 = *((_QWORD *)a1 + 60);
  if ( v15 == (struct tagTHREADINFO *)((char *)a1 + 1048) )
    *(_QWORD *)(v16 + 96) = 0LL;
  else
    *(_QWORD *)(v16 + 96) = (char *)v15 - *((_QWORD *)a1 + 59);
  if ( *((_QWORD *)a1 + 54) )
  {
    JournallingQueue = (tagQ *)GetJournallingQueue(a1);
    if ( JournallingQueue )
      tagQ::zzzAttachToQueue(JournallingQueue, a1, 0LL, 0);
  }
  PopAndFreeW32ThreadLock((__int64)v23);
  return 0LL;
}
