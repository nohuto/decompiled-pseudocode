/*
 * XREFs of MiCoalescePlaceholderAllocations @ 0x140A2F378
 * Callers:
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     MiSetVadDeleted @ 0x140332ED8 (MiSetVadDeleted.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiGetNextVad @ 0x140350908 (MiGetNextVad.c)
 *     MiDecrementVadsBeingDeleted @ 0x140615D58 (MiDecrementVadsBeingDeleted.c)
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 */

__int64 __fastcall MiCoalescePlaceholderAllocations(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // bl
  unsigned __int64 v8; // r13
  __int64 **Address; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 NextVad; // rdi
  unsigned int v12; // r12d
  __int64 v13; // rax
  int v14; // ebx
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rdi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r12
  __int64 v21; // rbp
  _QWORD *v22; // r14
  _QWORD *v23; // rbx
  unsigned int *v24; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+18h]

  v4 = a4;
  CurrentThread = KeGetCurrentThread();
  v8 = MiLockVadRange(a1, a2, a3 & 0xFFFFFFFFFFFFF000uLL, 1);
  if ( v8 >= 2 )
  {
    Address = MiLocateAddress(a2);
    v10 = (unsigned __int64)Address;
    if ( (*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) << 12 == a2 )
    {
      NextVad = (unsigned __int64)Address;
      v12 = 0;
      while ( 1 )
      {
        v13 = *(unsigned int *)(NextVad + 52);
        LODWORD(v13) = v13 & 0x7FFFFFFF;
        if ( (v13 | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 31)) != 0x7FFFFFFFDLL )
          break;
        if ( (*(_DWORD *)(NextVad + 48) & 8) != 0 )
        {
          v14 = MiCheckSecuredVad(
                  NextVad,
                  (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12,
                  ((*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32))
                 - (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32))
                 + 1) << 12,
                  0x55u,
                  v4);
          if ( v14 < 0 )
            goto LABEL_22;
        }
        v15 = NextVad;
        ++v12;
        NextVad = MiGetNextVad(NextVad);
        if ( v12 >= v8 )
        {
          if ( (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) != a3 )
            break;
          v16 = (_QWORD *)MiGetNextVad(v10);
          v17 = MiGetNextVad((unsigned __int64)v16);
          MiReferenceVad((__int64)v16);
          MiRemoveVad((unsigned __int64)v16, 0, 0LL);
          MiSetVadDeleted((__int64)v16);
          for ( *v16 = 0LL; ; *v16 = v20 )
          {
            v20 = v16;
            if ( v16 == (_QWORD *)v15 )
              break;
            v16 = (_QWORD *)v17;
            v18 = MiGetNextVad(v17);
            v19 = v17;
            v17 = v18;
            MiReferenceVad(v19);
            MiRemoveVad((unsigned __int64)v16, 0, 0LL);
            MiSetVadDeleted((__int64)v16);
          }
          *(_BYTE *)(v10 + 33) = a3 >> 44;
          *(_DWORD *)(v10 + 28) = a3 >> 12;
          v21 = *(_QWORD *)(a1 + 1680);
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 280));
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
          v22 = v16;
          do
          {
            v23 = v22;
            v22 = (_QWORD *)*v22;
            if ( (_InterlockedExchangeAdd64(v23 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v23 + 5);
            KeAbPostRelease((ULONG_PTR)(v23 + 5));
          }
          while ( v22 );
          MiUnlockVad((__int64)CurrentThread, v10);
          while ( v16 )
          {
            v24 = (unsigned int *)v16;
            v16 = (_QWORD *)*v16;
            MiLockVad((__int64)CurrentThread, (__int64)v24);
            MiDeleteVad(v24, 0LL, 0);
          }
          MiDecrementVadsBeingDeleted(v21 + 48);
          return 0;
        }
        v4 = a4;
      }
    }
  }
  v14 = -1073741800;
LABEL_22:
  MiUnlockVadRange(a1, a2, v8, 1);
  return (unsigned int)v14;
}
