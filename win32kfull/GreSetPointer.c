void __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v6; // r12d
  __int64 v7; // rbp
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 HDEV; // rax
  HDEV v14; // rsi
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r8
  int v24; // ecx
  int v25; // edx
  __int64 ***v26; // rcx
  __int64 **v27; // r12
  __int64 *v28; // rsi
  bool v29; // zf
  unsigned __int8 v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+34h] [rbp-64h]
  __int64 v32; // [rsp+38h] [rbp-60h] BYREF
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34; // [rsp+48h] [rbp-50h]
  __int64 v35; // [rsp+50h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v36; // [rsp+58h] [rbp-40h]

  v6 = 0;
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  v30 = 0;
  v10 = Gre::Base::Globals(v9);
  v36 = v10;
  v34 = *((_QWORD *)v10 + 10);
  v11 = v34;
  v33 = v34;
  GreAcquireSemaphoreSharedInternal(v34);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v34);
  HDEV = UserGetHDEV(v12);
  v14 = (HDEV)HDEV;
  if ( HDEV )
  {
    v32 = HDEV;
    if ( v7 )
    {
      v15 = *(_BYTE *)(v7 + 328);
      *(_DWORD *)(v7 + 328) &= ~1u;
      v30 = v15;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v32) )
    {
      GreAcquireSemaphore(*((_QWORD *)v10 + 15));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v10 + 15), 2LL);
    }
    v16 = *(_QWORD *)(v32 + 56);
    v35 = v16;
    GreAcquireSemaphore(v16);
    v18 = *(_QWORD *)(SGDGetSessionState(v17) + 32);
    v19 = (unsigned __int64)a1 & -(__int64)(a1 != 0LL);
    *(_QWORD *)(v18 + 8624) = v19;
    *(_BYTE *)(v18 + 8644) = a1 != 0LL;
    *(_DWORD *)(v18 + 8636) = a3;
    *(_DWORD *)(v18 + 8640) = a4;
    *(_DWORD *)(v18 + 8632) = a2;
    v20 = *(_QWORD *)(SGDGetSessionState(v19) + 32);
    if ( *(_DWORD *)(v20 + 8672) )
    {
      v21 = SGDGetSessionState(v20);
      v22 = 0LL;
      v33 = 1LL;
      v23 = 1LL;
      *(_DWORD *)(*(_QWORD *)(v21 + 32) + 8676LL) = 1;
      v24 = 1;
      if ( (a2 & 0x20) != 0 )
      {
        v6 = 1;
        v33 = 1LL;
        a2 |= 0x40u;
        v22 = 1LL;
      }
    }
    else
    {
      v23 = 0LL;
      v24 = 0;
      v33 = 0LL;
      v22 = 0LL;
    }
    v25 = *(_DWORD *)(v32 + 40);
    if ( (v25 & 0x20000) != 0 )
    {
      v26 = *(__int64 ****)(v32 + 1768);
      v27 = *v26;
      v31 = *((_DWORD *)v26 + 4);
      do
      {
        v28 = v27[6];
        if ( !v23 || (v28[262] & 0x2000) != 0 || (v28[5] & 4) != 0 || v22 )
        {
          GreAcquireSemaphore(v28[7]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v28[7], 4LL);
          vSetPointer((HDEV)v27[6], a1, a2, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()");
          GreReleaseSemaphoreInternal(v28[7]);
          v23 = v33;
        }
        v29 = v31-- == 1;
        v27 = (__int64 **)*v27;
      }
      while ( !v29 );
      v11 = v34;
      v16 = v35;
      v10 = v36;
    }
    else if ( !v24 || (*(_DWORD *)(v32 + 2096) & 0x2000) != 0 || (v25 & 4) != 0 || v6 )
    {
      vSetPointer(v14, a1, a2, a3, a4);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v32) )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
      GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 15));
    }
    if ( v16 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v16);
    }
    if ( v7 )
      *(_DWORD *)(v7 + 328) ^= (*(_DWORD *)(v7 + 328) ^ v30) & 1;
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v11);
  }
  else
  {
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v33);
  }
}
