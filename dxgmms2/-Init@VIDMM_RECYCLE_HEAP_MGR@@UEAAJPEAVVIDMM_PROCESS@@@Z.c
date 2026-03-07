__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  struct _LOOKASIDE_LIST_EX *v4; // rax
  NTSTATUS v5; // edi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rsi
  PVOID v8; // rax
  struct _LOOKASIDE_LIST_EX *v9; // rax
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  PVOID v13; // rax
  struct _KTHREAD **v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _BYTE v20[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v21; // [rsp+58h] [rbp-20h]
  int v22; // [rsp+60h] [rbp-18h]

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new(24LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 199) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C0076854);
    WdLogSingleEntry1(6LL, 10323LL);
LABEL_23:
    DxgkLogInternalTriageEvent(v18, 262145LL);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v4 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 164) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C0076854);
    WdLogSingleEntry1(6LL, 10337LL);
    goto LABEL_23;
  }
  v5 = ExInitializeLookasideListEx(v4, 0LL, 0LL, PagedPool, 0, 0xB0uLL, 0x32316956u, 0);
  if ( v5 < 0 )
  {
    _InterlockedIncrement(&dword_1C0076854);
    WdLogSingleEntry1(6LL, 10346LL);
LABEL_18:
    DxgkLogInternalTriageEvent(v19, 262145LL);
    return (unsigned int)v5;
  }
  else
  {
    v6 = 0LL;
    v7 = (_QWORD *)((char *)this + 1624);
    do
    {
      v8 = ExAllocateFromLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 164));
      *v7 = v8;
      if ( !v8 )
      {
        _InterlockedIncrement(&dword_1C0076854);
        WdLogSingleEntry1(6LL, 10358LL);
        goto LABEL_23;
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 4 );
    *((_DWORD *)this + 404) = 4;
    v9 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
    *((_QWORD *)this + 165) = v9;
    if ( !v9 )
    {
      _InterlockedIncrement(&dword_1C0076854);
      WdLogSingleEntry1(6LL, 10369LL);
      goto LABEL_23;
    }
    v10 = ExInitializeLookasideListEx(v9, 0LL, 0LL, PagedPool, 0, 0xF0uLL, 0x32316956u, 0);
    v5 = v10;
    if ( v10 < 0 )
    {
      _InterlockedIncrement(&dword_1C0076854);
      WdLogSingleEntry1(6LL, v10);
      goto LABEL_18;
    }
    v11 = 0LL;
    v12 = (_QWORD *)((char *)this + 1656);
    do
    {
      v13 = ExAllocateFromLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 165));
      *v12 = v13;
      if ( !v13 )
      {
        _InterlockedIncrement(&dword_1C0076854);
        WdLogSingleEntry1(6LL, 10390LL);
        goto LABEL_23;
      }
      ++v11;
      ++v12;
    }
    while ( v11 < 4 );
    v14 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
    *((_DWORD *)this + 405) = 4;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, v14, 0);
    DXGPUSHLOCK::AcquireExclusive(v21);
    v15 = (_QWORD *)qword_1C0076928;
    v16 = (_QWORD *)((char *)this + 1600);
    v22 = 2;
    if ( *(struct _LIST_ENTRY **)qword_1C0076928 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
      __fastfail(3u);
    *v16 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    v16[1] = v15;
    *v15 = v16;
    qword_1C0076928 = (__int64)v16;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    return 0LL;
  }
}
