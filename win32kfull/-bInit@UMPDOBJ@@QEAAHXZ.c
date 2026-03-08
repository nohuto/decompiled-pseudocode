/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C029C0E4
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0029D88 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C029B4D8 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C029B5E4 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C029C37C (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C02C1A94 (--0PROXYPORT@@QEAA@_K@Z.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rdx
  UMPDOBJ *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _UMPDHEAP *v12; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  unsigned int CurrentProcessId; // eax
  bool v16; // zf
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF
  __int64 v21; // [rsp+38h] [rbp+10h] BYREF

  memset_0(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 107) = -1;
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  v4 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = (_QWORD *)ThreadWin32Thread;
  if ( !v4 || !ThreadWin32Thread )
    return 0LL;
  v7 = bSandboxedCurrentProcess();
  *((_DWORD *)this + 106) = v7;
  if ( v7 )
  {
    v10 = v6[8];
    if ( v10 )
    {
      *((_QWORD *)this + 49) = v10;
      *(_DWORD *)(v10 + 48) = 0;
      goto LABEL_10;
    }
    PROXYPORT::PROXYPORT((PROXYPORT *)&v21, v8);
    v11 = v21;
    if ( v21 )
    {
      *((_QWORD *)this + 49) = v21;
      v6[8] = v11;
LABEL_10:
      *((_QWORD *)this + 3) = v6;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( (_QWORD *)v6[5] == v6 + 5 )
  {
    v12 = (struct _UMPDHEAP *)v6[7];
    if ( !v12 )
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(v9);
      *((_QWORD *)this + 7) = UMPDHeap;
      v6[7] = UMPDHeap;
      goto LABEL_17;
    }
    *((_DWORD *)v12 + 6) = 0;
  }
  else
  {
    v12 = UMPDOBJ::CreateUMPDHeap(v9);
  }
  *((_QWORD *)this + 7) = v12;
LABEL_17:
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
LABEL_18:
  v20 = 0LL;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v20, this, 0x11u, 10) )
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
    if ( v20 )
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
    return 0LL;
  }
  *((_QWORD *)this + 50) = KeGetCurrentThread();
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v16 = *((_DWORD *)this + 106) == 0;
  *((_DWORD *)this + 102) = CurrentProcessId & 0xFFFFFFFC;
  if ( v16 )
  {
    v17 = (_QWORD *)((char *)this + 40);
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 40;
    v19 = *(_QWORD *)v18;
    if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
      __fastfail(3u);
    *v17 = v19;
    v17[1] = v18;
    *(_QWORD *)(v19 + 8) = v17;
    *(_QWORD *)v18 = v17;
  }
  if ( v20 )
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
  return 1LL;
}
