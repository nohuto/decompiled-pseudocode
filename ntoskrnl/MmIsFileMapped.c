/*
 * XREFs of MmIsFileMapped @ 0x140A39978
 * Callers:
 *     IopQueryProcessIdsUsingFile @ 0x1409481C8 (IopQueryProcessIdsUsingFile.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiUnlockVadShared @ 0x1402A5B30 (MiUnlockVadShared.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MmIsFileMapped(struct _KPROCESS *a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // r12d
  _QWORD *v7; // rax
  _QWORD *i; // rbx
  _QWORD **v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  v4 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == a1 )
  {
    v6 = 0;
  }
  else
  {
    KeStackAttachProcess(a1, &ApcState);
    v6 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v4);
  v7 = *(_QWORD **)(v4 + 2008);
  i = 0LL;
  while ( v7 )
  {
    i = v7;
    v7 = (_QWORD *)*v7;
  }
  if ( i )
  {
    do
    {
      v9 = (_QWORD **)i[1];
      v10 = (__int64)i;
      v11 = i;
      if ( v9 )
      {
        v12 = *v9;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v11 )
            break;
          v11 = i;
        }
      }
      if ( (*(_DWORD *)(v10 + 48) & 0x200000) == 0 )
      {
        MiLockVadShared((__int64)CurrentThread, v10);
        if ( !(unsigned int)MiVadDeleted(v10) )
        {
          v13 = *(__int64 **)(v10 + 72);
          v14 = *v13;
          if ( *(_QWORD *)(*v13 + 64) )
          {
            v15 = MiReferenceControlAreaFile(*v13);
            if ( *(_QWORD *)(v15 + 40) == v2 )
              v3 = 1;
            MiDereferenceControlAreaFile(v14, v15);
          }
        }
        MiUnlockVadShared((__int64)CurrentThread, v10);
        if ( v3 )
          break;
      }
    }
    while ( i );
    v4 = (__int64)a1;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v4);
  if ( v6 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return v3;
}
