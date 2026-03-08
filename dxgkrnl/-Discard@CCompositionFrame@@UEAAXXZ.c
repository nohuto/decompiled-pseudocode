/*
 * XREFs of ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C0017710
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0017BA8 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084098 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 */

void __fastcall CCompositionFrame::Discard(CCompositionFrame *this)
{
  __int64 (__fastcall ***i)(_QWORD); // rbx
  void *v3; // rdx
  char *v4; // rsi
  char *v5; // rax
  __int64 v6; // rcx
  char *v7; // rsi
  char *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  char *v14; // rbx
  char *v15; // rbx
  struct CFlipManagerSignal *v16; // rbx
  __int64 v17; // rsi

  for ( i = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 13); i; *((_QWORD *)this + 13) = i )
  {
    v12 = (**i)(i);
    LOBYTE(v13) = 1;
    i = (__int64 (__fastcall ***)(_QWORD))v12;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 8LL))(*((_QWORD *)this + 13), v13);
  }
  v3 = (void *)*((_QWORD *)this + 14);
  *((_DWORD *)this + 24) = 3;
  if ( v3 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 25), v3);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_BYTE *)this + 120) = 0;
  v4 = (char *)this + 152;
  while ( 1 )
  {
    v5 = *(char **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
LABEL_16:
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      break;
    v14 = v5 - 8;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v5 - 1) + 56LL))(v5 - 8);
    (**(void (__fastcall ***)(char *, __int64))v14)(v14, 1LL);
  }
  v7 = (char *)this + 168;
  while ( 1 )
  {
    v8 = *(char **)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_16;
    v9 = *(_QWORD *)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_16;
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( v8 == v7 )
      break;
    v15 = v8 - 48;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v8 - 1) + 56LL))(v8 - 8);
    ObfDereferenceObject(v15);
  }
  v10 = *((_QWORD *)this + 11);
  v11 = (_QWORD *)((char *)this + 184);
  while ( (_QWORD *)*v11 != v11 )
  {
    v16 = (struct CFlipManagerSignal *)((*v11 - 8LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v11 >> 64));
    v17 = *((_QWORD *)v16 + 5);
    *((_QWORD *)v16 + 5) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v17 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v17 + 32), v16, v10);
      CPushLock::ReleaseLock((CPushLock *)(v17 + 40));
    }
    ObfDereferenceObject((PVOID)v17);
  }
}
