/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C012A4FC
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C012B728 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C012C06C (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026B168 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C029165C (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 CurrentProcessWin32Process; // rsi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  UMPDOBJ *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _UMPDHEAP *v12; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  unsigned int CurrentProcessId; // eax
  bool v15; // zf
  __int64 v16; // rdi
  __int64 *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  _BYTE v23[32]; // [rsp+20h] [rbp-38h] BYREF
  UMPDOBJ *v24; // [rsp+40h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 107) = -1;
  *((_DWORD *)this + 9) = 1886221639;
  v3 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = (_QWORD *)*ThreadWin32Thread;
  if ( !CurrentProcessWin32Process || !v3 )
    return 0LL;
  v7 = PsGetCurrentProcessWin32Process(v6);
  v9 = (UMPDOBJ *)v7;
  if ( v7 )
    LODWORD(v7) = *(_DWORD *)(v7 + 264) | *(_DWORD *)(v7 + 12) & 0x80;
  *((_DWORD *)this + 106) = v7;
  if ( (_DWORD)v7 )
  {
    v10 = v3[8];
    if ( v10 )
    {
      *((_QWORD *)this + 49) = v10;
      *(_DWORD *)(v10 + 48) = 0;
      goto LABEL_12;
    }
    PROXYPORT::PROXYPORT((PROXYPORT *)&v25, v8);
    v11 = v25;
    if ( v25 )
    {
      *((_QWORD *)this + 49) = v25;
      v3[8] = v11;
LABEL_12:
      *((_QWORD *)this + 3) = v3;
      goto LABEL_20;
    }
    return 0LL;
  }
  if ( (_QWORD *)v3[5] == v3 + 5 )
  {
    v12 = (struct _UMPDHEAP *)v3[7];
    if ( !v12 )
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(v9);
      *((_QWORD *)this + 7) = UMPDHeap;
      v3[7] = UMPDHeap;
      goto LABEL_19;
    }
    *((_DWORD *)v12 + 6) = 0;
  }
  else
  {
    v12 = UMPDOBJ::CreateUMPDHeap(v9);
  }
  *((_QWORD *)this + 7) = v12;
LABEL_19:
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
LABEL_20:
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v23);
  if ( v24 || !HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
    v21 = 0;
  }
  else
  {
    v24 = this;
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v15 = *((_DWORD *)this + 106) == 0;
    *((_DWORD *)this + 102) = CurrentProcessId & 0xFFFFFFFC;
    if ( v15 )
    {
      v16 = 0LL;
      v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v17 )
        v16 = *v17;
      v18 = (_QWORD *)(v16 + 40);
      v19 = (_QWORD *)((char *)this + 40);
      v20 = *(_QWORD *)(v16 + 40);
      if ( *(_QWORD *)(v20 + 8) != v16 + 40 )
        __fastfail(3u);
      *v19 = v20;
      v19[1] = v18;
      *(_QWORD *)(v20 + 8) = v19;
      *v18 = v19;
    }
    v21 = 1;
  }
  if ( v24 )
    _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
  return v21;
}
