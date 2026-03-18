/*
 * XREFs of GreSetPointer @ 0x1C00FAA98
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C005D248 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     GreHidePointer @ 0x1C00E1284 (GreHidePointer.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 *     _lambda_a958981e61cb814173376795bd306db4_::operator() @ 0x1C026B9F8 (_lambda_a958981e61cb814173376795bd306db4_--operator().c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C01359C8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 */

void __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v6; // r12d
  __int64 v7; // rbp
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  __int64 v11; // rbx
  __int64 HDEV; // rax
  HDEV v13; // rsi
  unsigned __int8 v14; // al
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r8
  int v23; // ecx
  int v24; // edx
  __int64 ***v25; // rcx
  __int64 **v26; // r12
  __int64 *v27; // rsi
  bool v28; // zf
  unsigned __int8 v29; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+34h] [rbp-64h]
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+50h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v35; // [rsp+58h] [rbp-40h]

  v6 = 0;
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  v29 = 0;
  v10 = Gre::Base::Globals(v9);
  v35 = v10;
  v33 = *((_QWORD *)v10 + 10);
  v11 = v33;
  v32 = v33;
  GreAcquireSemaphoreSharedInternal(v33);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v33);
  HDEV = UserGetHDEV();
  v13 = (HDEV)HDEV;
  if ( HDEV )
  {
    v31 = HDEV;
    if ( v7 )
    {
      v14 = *(_BYTE *)(v7 + 328);
      *(_DWORD *)(v7 + 328) &= ~1u;
      v29 = v14;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v31) )
    {
      GreAcquireSemaphore(*((_QWORD *)v10 + 15));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v10 + 15), 2LL);
    }
    v15 = *(_QWORD *)(v31 + 56);
    v34 = v15;
    GreAcquireSemaphore(v15);
    v17 = *(_QWORD *)(SGDGetSessionState(v16) + 32);
    v18 = (unsigned __int64)a1 & -(__int64)(a1 != 0LL);
    *(_QWORD *)(v17 + 8624) = v18;
    *(_BYTE *)(v17 + 8644) = a1 != 0LL;
    *(_DWORD *)(v17 + 8636) = a3;
    *(_DWORD *)(v17 + 8640) = a4;
    *(_DWORD *)(v17 + 8632) = a2;
    v19 = *(_QWORD *)(SGDGetSessionState(v18) + 32);
    if ( *(_DWORD *)(v19 + 8672) )
    {
      v20 = SGDGetSessionState(v19);
      v21 = 0LL;
      v32 = 1LL;
      v22 = 1LL;
      *(_DWORD *)(*(_QWORD *)(v20 + 32) + 8676LL) = 1;
      v23 = 1;
      if ( (a2 & 0x20) != 0 )
      {
        v6 = 1;
        v32 = 1LL;
        a2 |= 0x40u;
        v21 = 1LL;
      }
    }
    else
    {
      v22 = 0LL;
      v23 = 0;
      v32 = 0LL;
      v21 = 0LL;
    }
    v24 = *(_DWORD *)(v31 + 40);
    if ( (v24 & 0x20000) != 0 )
    {
      v25 = *(__int64 ****)(v31 + 1768);
      v26 = *v25;
      v30 = *((_DWORD *)v25 + 4);
      do
      {
        v27 = v26[6];
        if ( !v22 || (v27[262] & 0x2000) != 0 || (v27[5] & 4) != 0 || v21 )
        {
          GreAcquireSemaphore(v27[7]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v27[7], 4LL);
          vSetPointer((HDEV)v26[6], a1, a2, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()");
          GreReleaseSemaphoreInternal(v27[7]);
          v22 = v32;
        }
        v28 = v30-- == 1;
        v26 = (__int64 **)*v26;
      }
      while ( !v28 );
      v11 = v33;
      v15 = v34;
      v10 = v35;
    }
    else if ( !v23 || (*(_DWORD *)(v31 + 2096) & 0x2000) != 0 || (v24 & 4) != 0 || v6 )
    {
      vSetPointer(v13, a1, a2, a3, a4);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v31) )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
      GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 15));
    }
    if ( v15 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v15);
    }
    if ( v7 )
      *(_DWORD *)(v7 + 328) ^= (*(_DWORD *)(v7 + 328) ^ v29) & 1;
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v11);
  }
  else
  {
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v32);
  }
}
