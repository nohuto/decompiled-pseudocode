/*
 * XREFs of MiHotPatchProcess @ 0x140A34804
 * Callers:
 *     MiHotPatchAllProcesses @ 0x140A34748 (MiHotPatchAllProcesses.c)
 * Callees:
 *     MiGetFirstVad @ 0x1402A5B0C (MiGetFirstVad.c)
 *     MiUnlockVadShared @ 0x1402A5B30 (MiUnlockVadShared.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 *     MiGetNextVad @ 0x140350908 (MiGetNextVad.c)
 *     MiImageVadHotPatchEligible @ 0x140768E2C (MiImageVadHotPatchEligible.c)
 *     MiInjectThreadForHotPatch @ 0x140A34C94 (MiInjectThreadForHotPatch.c)
 */

__int64 __fastcall MiHotPatchProcess(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v7; // ebx
  __int64 i; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // r15d
  PVOID v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
LABEL_17:
    v7 = -1073741558;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1680) + 341LL) & 2) != 0 )
  {
    v7 = -1073741637;
  }
  else
  {
LABEL_4:
    for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v9) )
    {
      v9 = i;
      if ( !i )
        break;
      if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
      {
        MiLockVadShared((__int64)CurrentThread, i);
        if ( !(unsigned int)MiVadDeleted(v9)
          && (unsigned int)MiImageVadHotPatchEligible(v10)
          && (v11 = **(_QWORD **)(v9 + 72), v12 = *(_QWORD *)(*(_QWORD *)v11 + 56LL), *(_DWORD *)(v12 + 60) == a2)
          && *(_DWORD *)(v12 + 72) == a3 )
        {
          v13 = (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12;
          _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v11 + 24LL), -1LL, -1LL);
          MiReferenceVad(v9);
          MiUnlockVadShared((__int64)CurrentThread, v9);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          v7 = MiInjectThreadForHotPatch(v13, a2, a3);
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          MiLockVadShared((__int64)CurrentThread, v9);
          v14 = MiVadDeleted(v9);
          MiUnlockAndDereferenceVadShared(v15);
          if ( v7 < 0 )
            break;
          if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
            goto LABEL_17;
          if ( v14 )
            goto LABEL_4;
        }
        else
        {
          MiUnlockVadShared((__int64)CurrentThread, v9);
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  return (unsigned int)v7;
}
