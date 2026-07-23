/*
 * XREFs of RtlDestroyAtomTable @ 0x1406860C0
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14031579C (RtlDereferenceAtomTable.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExpFreeHandleTable @ 0x140604378 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140604524 (ExpRemoveHandleTable.c)
 *     RtlpLockAtomTable @ 0x14061BE34 (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x1406862EC (RtlpFreeAtom.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v2; // ebp
  _QWORD **i; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  _QWORD **v8; // r12
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable(AtomTableHandle) )
  {
    v2 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 32); v2 < *((_DWORD *)AtomTableHandle + 7); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        v8 = (_QWORD **)(v5 + 2);
        *v5 = 0LL;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 == v8 )
            break;
          if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
            __fastfail(3u);
          *v8 = v10;
          v10[1] = v8;
          RtlpFreeAtom(v9);
        }
        RtlpFreeAtom(v5);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
    KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
    KeLeaveCriticalRegion();
    v6 = (_QWORD *)*((_QWORD *)AtomTableHandle + 2);
    ExpRemoveHandleTable((__int64)v6);
    ExpFreeHandleTable(v6);
    *(_OWORD *)AtomTableHandle = 0LL;
    *((_OWORD *)AtomTableHandle + 1) = 0LL;
    *((_QWORD *)AtomTableHandle + 4) = 0LL;
    RtlpFreeAtom(AtomTableHandle);
    return 0;
  }
  return -1073741811;
}
