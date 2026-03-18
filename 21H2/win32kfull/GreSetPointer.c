/*
 * XREFs of GreSetPointer @ 0x1C0073040
 * Callers:
 *     GreHidePointer @ 0x1C0026210 (GreHidePointer.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C02711D8 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C008EE28 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // r14d
  __int64 ThreadWin32Thread; // rsi
  __int64 v10; // rdi
  __int64 HDEV; // rax
  HDEV v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // r15
  int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  __int64 ***v19; // rcx
  __int64 **v20; // r14
  int v21; // r13d
  __int64 *v22; // rbx
  unsigned __int8 v23; // [rsp+30h] [rbp-68h]
  __int64 v24; // [rsp+38h] [rbp-60h] BYREF
  __int64 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  __int64 v27; // [rsp+50h] [rbp-48h]
  _QWORD v28[8]; // [rsp+58h] [rbp-40h] BYREF

  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27 = ThreadWin32Thread;
  v23 = 0;
  v10 = ghsemDynamicModeChange;
  v26 = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v12 = (HDEV)HDEV;
  if ( HDEV )
  {
    v24 = HDEV;
    if ( ThreadWin32Thread )
    {
      v13 = *(_BYTE *)(ThreadWin32Thread + 328);
      *(_DWORD *)(ThreadWin32Thread + 328) &= ~1u;
      v23 = v13;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v24) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v28[0] = *(_QWORD *)(v24 + 56);
    GreAcquireSemaphore(v28[0]);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C03354E4 = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C03354E4 = 0;
    }
    dword_1C03354D8 = a2;
    dword_1C03354DC = a3;
    dword_1C03354E0 = a4;
    if ( gulCachedPointerRefs )
    {
      v14 = 0LL;
      v25 = 1LL;
      bCachedSetPointerRefs = 1;
      v15 = 1;
      v16 = 1LL;
      if ( (a2 & 0x20) != 0 )
      {
        v8 = 1;
        a2 |= 0x40u;
        v14 = 1LL;
      }
    }
    else
    {
      v16 = 0LL;
      v15 = 0;
      v25 = 0LL;
      v14 = 0LL;
    }
    v17 = *(_DWORD *)(v24 + 40);
    if ( (v17 & 0x20000) != 0 )
    {
      v19 = *(__int64 ****)(v24 + 1768);
      v20 = *v19;
      v21 = *((_DWORD *)v19 + 4);
      do
      {
        v22 = v20[6];
        if ( !v16 || (v22[262] & 0x2000) != 0 || (v22[5] & 4) != 0 || v14 )
        {
          GreAcquireSemaphore(v22[7]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v22[7], 4LL);
          vSetPointer((HDEV)v20[6], a1, a2, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v22[7]);
          GreReleaseSemaphoreInternal(v22[7]);
          v16 = v25;
        }
        v20 = (__int64 **)*v20;
        --v21;
      }
      while ( v21 );
      v10 = v26;
      ThreadWin32Thread = v27;
    }
    else if ( !v15 || (*(_DWORD *)(v24 + 2096) & 0x2000) != 0 || (v17 & 4) != 0 || v8 )
    {
      vSetPointer(v12, a1, a2, a3, a4);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v24) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    SEMOBJ::vUnlock((SEMOBJ *)v28);
    if ( ThreadWin32Thread )
      *(_DWORD *)(ThreadWin32Thread + 328) ^= (*(_DWORD *)(ThreadWin32Thread + 328) ^ v23) & 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
  return GreReleaseSemaphoreInternal(v10);
}
