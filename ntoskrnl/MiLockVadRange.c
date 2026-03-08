/*
 * XREFs of MiLockVadRange @ 0x1407D74B8
 * Callers:
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1407000C4 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiGetFirstVad @ 0x1402A5B0C (MiGetFirstVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiGetNextVad @ 0x140350908 (MiGetNextVad.c)
 *     MiWaitForVadDeletion @ 0x14065E678 (MiWaitForVadDeletion.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x14065E858 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiVadIsMetadataBitmap @ 0x1407D76A0 (MiVadIsMetadataBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r12d
  int v6; // eax
  unsigned __int64 v7; // rbx
  void *FirstVad; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 NextVad; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 *v20; // rsi
  __int64 v21; // r14
  unsigned __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v28; // [rsp+28h] [rbp-50h]
  _OWORD v29[4]; // [rsp+30h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 1;
  v28 = CurrentThread;
  v29[0] = 0LL;
  v27 = 1;
  v6 = a4;
  v7 = a2;
LABEL_2:
  if ( v6 )
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( !v5 || (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
    return 0LL;
  if ( v7 == -1LL )
    FirstVad = MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(v7);
  v10 = 0LL;
  v11 = (unsigned __int64)FirstVad;
  v12 = 0LL;
  for ( i = (unsigned __int64)FirstVad; i; i = NextVad )
  {
    NextVad = MiGetNextVad(i);
    if ( a3 == -1LL )
      goto LABEL_13;
    v15 = *(unsigned int *)(i + 28);
    if ( a3 <= (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12 )
    {
      NextVad = 0LL;
      goto LABEL_13;
    }
    if ( NextVad )
    {
      if ( (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 == (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) )
        goto LABEL_13;
      NextVad = 0LL;
    }
    v5 = 0;
    v27 = 0;
LABEL_13:
    if ( (unsigned int)MiVadIsMetadataBitmap(i) )
    {
      *((_QWORD *)v29 + v12) = i;
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      if ( v10 )
      {
        v18 = KeAbPreAcquire(i + 40, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 40), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 40), v18, i + 40);
        if ( v19 )
          *(_BYTE *)(v19 + 18) = 1;
        CurrentThread = v28;
      }
      else
      {
        MiLockVad((__int64)CurrentThread, i);
      }
      v5 = v27;
      if ( (unsigned int)MiVadDeleted(i) || !v27 )
      {
        MiReferenceVad(v16);
        if ( v11 != i )
        {
          do
          {
            v25 = MiGetNextVad(v11);
            if ( !(unsigned int)MiVadIsMetadataBitmap(v11) )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
              KeAbPostRelease(v11 + 40);
            }
            v11 = v25;
          }
          while ( v25 != i );
        }
        if ( a4 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
        else
          UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
        if ( (unsigned int)MiVadDeleted(i) )
          MiWaitForVadDeletion(v26);
        MiUnlockAndDereferenceVad((PVOID)i);
        v6 = a4;
        v7 = a2;
        goto LABEL_2;
      }
      ++v10;
    }
  }
  if ( v5 && (_DWORD)v12 )
  {
    v20 = (__int64 *)v29;
    v21 = (unsigned int)v12;
    do
    {
      if ( v10 )
      {
        v22 = (unsigned __int64 *)(*v20 + 40);
        v23 = KeAbPreAcquire((__int64)v22, 0LL);
        v24 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
          ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
        if ( v24 )
          *(_BYTE *)(v24 + 18) = 1;
      }
      else
      {
        MiLockVad((__int64)CurrentThread, *v20);
      }
      ++v10;
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  return v10;
}
