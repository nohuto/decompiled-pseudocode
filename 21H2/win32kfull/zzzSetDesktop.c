/*
 * XREFs of zzzSetDesktop @ 0x1C0065EC0
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C00D95C0 (xxxSetThreadDesktop.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     GetDesktopView @ 0x1C004F040 (GetDesktopView.c)
 *     GetJournallingQueue @ 0x1C00666D0 (GetJournallingQueue.c)
 *     CheckHandleFlag @ 0x1C0066758 (CheckHandleFlag.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  PVOID *v6; // r13
  __int64 ThreadWin32Thread; // rax
  char *v8; // r14
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char *Heap; // rax
  _QWORD *DesktopView; // rax
  __int64 v15; // rdx
  struct tagTHREADINFO *v16; // rdx
  __int64 v17; // rcx
  __int64 JournallingQueue; // rax
  __int64 v19; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r8
  struct tagTHREADINFO **v24; // rdx
  __int64 v25; // [rsp+48h] [rbp-80h] BYREF
  PVOID *v26; // [rsp+50h] [rbp-78h]
  void (*v27)(void); // [rsp+58h] [rbp-70h]
  __int128 v28; // [rsp+88h] [rbp-40h]
  __int64 v29; // [rsp+98h] [rbp-30h]
  PVOID Object; // [rsp+D8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E8h] [rbp+20h] BYREF

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
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v25 = *(_QWORD *)(ThreadWin32Thread + 16);
  *(_QWORD *)(ThreadWin32Thread + 16) = &v25;
  v26 = v6;
  v27 = (void (*)(void))UserDereferenceObject;
  if ( v6 )
    ObfReferenceObject(v6);
  v8 = (char *)*((_QWORD *)a1 + 56);
  if ( *((_QWORD *)a1 + 57) )
  {
    v23 = *((_QWORD *)a1 + 93);
    v24 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 94);
    if ( *(struct tagTHREADINFO **)(v23 + 8) != (struct tagTHREADINFO *)((char *)a1 + 744)
      || *v24 != (struct tagTHREADINFO *)((char *)a1 + 744) )
    {
      goto LABEL_44;
    }
    *v24 = (struct tagTHREADINFO *)v23;
    *(_QWORD *)(v23 + 8) = v24;
  }
  v28 = *(_OWORD *)((char *)a1 + 392);
  v29 = *((_QWORD *)a1 + 51);
  LockObjectAssignment((char *)a1 + 456, a2);
  if ( !a2 )
  {
    *((_QWORD *)a1 + 58) = gpkdiStatic;
    goto LABEL_35;
  }
  *((_QWORD *)a1 + 58) = *(_QWORD *)(a2 + 8);
  v10 = (_QWORD *)((char *)a1 + 744);
  v11 = (_QWORD *)(a2 + 168);
  v12 = *(_QWORD *)(a2 + 168);
  if ( *(_QWORD *)(v12 + 8) != a2 + 168 )
LABEL_44:
    __fastfail(3u);
  *v10 = v12;
  *((_QWORD *)a1 + 94) = v11;
  *(_QWORD *)(v12 + 8) = v10;
  *v11 = v10;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x18uLL);
  *((_QWORD *)a1 + 56) = Heap;
  if ( !Heap )
  {
LABEL_35:
    Heap = (char *)a1 + 1040;
    *((_QWORD *)a1 + 56) = (char *)a1 + 1040;
  }
  if ( v8 )
  {
    if ( v8 != Heap )
    {
      *(_OWORD *)Heap = *(_OWORD *)v8;
      *((_QWORD *)Heap + 2) = *((_QWORD *)v8 + 2);
    }
    if ( v8 != (char *)a1 + 1040 )
      RtlFreeHeap(v6[16], 0, v8);
  }
  else
  {
    *(_OWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 2) = 0LL;
  }
  if ( a2 && (DesktopView = GetDesktopView(*((_QWORD *)a1 + 53), a2), (v9 = DesktopView) != 0LL) )
  {
    v15 = *(_QWORD *)(a2 + 16) - DesktopView[2];
    *((_QWORD *)a1 + 59) = v15;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = **((_QWORD **)a1 + 58) - v15;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = DesktopView[2];
  }
  else
  {
    *((_QWORD *)a1 + 59) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = 0LL;
    v21 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 190) = v21;
    v22 = *((_QWORD *)a1 + 54);
    if ( v22 )
      *(_DWORD *)(v22 + 384) = v21;
  }
  v16 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 56);
  v17 = *((_QWORD *)a1 + 60);
  if ( v16 == (struct tagTHREADINFO *)((char *)a1 + 1040) )
  {
    *(_QWORD *)(v17 + 96) = 0LL;
  }
  else
  {
    v16 = (struct tagTHREADINFO *)((char *)v16 - *((_QWORD *)a1 + 59));
    *(_QWORD *)(v17 + 96) = v16;
  }
  if ( *((_QWORD *)a1 + 54) )
  {
    JournallingQueue = GetJournallingQueue(a1, v16, v9);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 392);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue, 0LL, 0);
    }
  }
  v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v19 + 16) = v25;
  if ( v26 )
    v27();
  return 0LL;
}
