/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C001F170
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F0E8 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C011F3C0 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C015F800 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026CE38 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C02934DC (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *ThreadWin32Thread; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  UMPDOBJ *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct _UMPDHEAP *v15; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  unsigned int CurrentProcessId; // eax
  bool v18; // zf
  struct _KTHREAD *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rax
  __int64 *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  unsigned int v28; // ebx
  _BYTE v30[32]; // [rsp+20h] [rbp-48h] BYREF
  UMPDOBJ *v31; // [rsp+40h] [rbp-28h]
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 107) = -1;
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = CurrentProcessWin32Process;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v5 || !v4 )
    return 0LL;
  v10 = PsGetCurrentProcessWin32Process();
  v12 = (UMPDOBJ *)v10;
  if ( v10 )
    LODWORD(v10) = *(_DWORD *)(v10 + 264) | *(_DWORD *)(v10 + 12) & 0x80;
  *((_DWORD *)this + 106) = v10;
  if ( (_DWORD)v10 )
  {
    v13 = v4[8];
    if ( v13 )
    {
      *((_QWORD *)this + 49) = v13;
      *(_DWORD *)(v13 + 48) = 0;
      goto LABEL_14;
    }
    PROXYPORT::PROXYPORT((PROXYPORT *)&v32, v11);
    v14 = v32;
    if ( v32 )
    {
      *((_QWORD *)this + 49) = v32;
      v4[8] = v14;
LABEL_14:
      *((_QWORD *)this + 3) = v4;
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( (_QWORD *)v4[5] == v4 + 5 )
  {
    v15 = (struct _UMPDHEAP *)v4[7];
    if ( !v15 )
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(v12);
      *((_QWORD *)this + 7) = UMPDHeap;
      v4[7] = UMPDHeap;
      goto LABEL_21;
    }
    *((_DWORD *)v15 + 6) = 0;
  }
  else
  {
    v15 = UMPDOBJ::CreateUMPDHeap(v12);
  }
  *((_QWORD *)this + 7) = v15;
LABEL_21:
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
LABEL_22:
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v30);
  if ( v31 || !HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
    v28 = 0;
  }
  else
  {
    v31 = this;
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v18 = *((_DWORD *)this + 106) == 0;
    *((_DWORD *)this + 102) = CurrentProcessId & 0xFFFFFFFC;
    if ( v18 )
    {
      v19 = KeGetCurrentThread();
      v20 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v21 = PsGetCurrentProcess(),
            v22 = PsGetProcessSessionIdEx(v21),
            v23 = PsGetCurrentThreadProcess(),
            v22 == (unsigned int)PsGetProcessSessionIdEx(v23)) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v19);
        if ( v24 )
          v20 = *v24;
      }
      v25 = (_QWORD *)(v20 + 40);
      v26 = (_QWORD *)((char *)this + 40);
      v27 = *(_QWORD *)(v20 + 40);
      if ( *(_QWORD *)(v27 + 8) != v20 + 40 )
        __fastfail(3u);
      *v26 = v27;
      v26[1] = v25;
      *(_QWORD *)(v27 + 8) = v26;
      *v25 = v26;
    }
    v28 = 1;
  }
  if ( v31 )
    _InterlockedDecrement((volatile signed __int32 *)v31 + 3);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v30);
  return v28;
}
