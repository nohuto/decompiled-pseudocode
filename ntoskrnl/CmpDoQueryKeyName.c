/*
 * XREFs of CmpDoQueryKeyName @ 0x140243A70
 * Callers:
 *     CmpQueryKeyName @ 0x1406BD190 (CmpQueryKeyName.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpConstructName @ 0x1406BD1BC (CmpConstructName.c)
 *     CmPostCallbackNotification @ 0x1406BD1E4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406BD20C (CmpCallCallBacks.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmVirtualKCBToRealPath @ 0x140A15B68 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // r12
  __int64 v7; // r14
  UNICODE_STRING *p_UnicodeString; // r13
  char v9; // bl
  char v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r8d
  int v13; // eax
  int v14; // esi
  wchar_t *Buffer; // r10
  unsigned int v16; // r12d
  unsigned int v17; // r12d
  char v19; // [rsp+30h] [rbp-118h]
  char v20; // [rsp+31h] [rbp-117h]
  int v23; // [rsp+58h] [rbp-F0h]
  _QWORD v24[2]; // [rsp+60h] [rbp-E8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-C8h]
  __int128 v27; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v28; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-A0h]
  __int128 v30; // [rsp+B8h] [rbp-90h]
  __int64 v31; // [rsp+C8h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-78h] BYREF

  v6 = a1;
  v23 = a1;
  v26 = a1;
  v27 = 0LL;
  UnicodeString = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v7 = 0LL;
  p_UnicodeString = 0LL;
  v9 = 0;
  v19 = 0;
  v20 = 0;
  v10 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo(&v27);
  v24[1] = v24;
  v24[0] = v24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || (unsigned int)CmpIsRegistryLockAcquired() )
  {
    v10 = 1;
  }
  else
  {
    *(_QWORD *)&v28 = v6;
    *((_QWORD *)&v28 + 1) = a3;
    LODWORD(v29) = a4;
    *((_QWORD *)&v29 + 1) = a5;
    v13 = CmpCallCallBacks(47, (unsigned int)&v28, v12, 48, v6, (__int64)v24);
    v14 = v13;
    if ( v13 < 0 )
    {
      if ( v13 == -1073740541 )
        v14 = 0;
      goto LABEL_19;
    }
    v10 = 1;
    v20 = 1;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry();
  v7 = *(_QWORD *)(v6 + 8);
  if ( (v7 & 1) != 0 )
  {
    v7 ^= 1uLL;
  }
  else if ( (*(_DWORD *)(v6 + 48) & 2) == 0 )
  {
    CmpLockKcbShared(v7);
    v9 = 1;
    v19 = 1;
  }
  v14 = CmpPerformKeyBodyDeletionCheck(v6, 0LL);
  if ( v14 >= 0 )
  {
    if ( CmpVEEnabled && (*(_DWORD *)(v7 + 184) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v7, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v7);
    }
    if ( p_UnicodeString )
    {
      if ( v9 )
      {
        CmpUnlockKcb(v7);
        v19 = 0;
      }
      CmpUnlockRegistry();
      CmpDetachFromRegistryProcess(&ApcState);
      v10 = 0;
      if ( a4 <= 0x10 )
      {
        *a5 = p_UnicodeString->Length + 18;
        v14 = -1073741820;
      }
      else
      {
        Buffer = p_UnicodeString->Buffer;
        v16 = p_UnicodeString->Length + 2;
        *a5 = p_UnicodeString->Length + 18;
        if ( v16 <= (unsigned __int64)a4 - 16 )
        {
          v14 = 0;
LABEL_18:
          v17 = v16 - 2;
          memmove((void *)(a3 + 16), Buffer, v17);
          *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v17 >> 1)) = 0;
          *(_WORD *)a3 = v17;
          *(_WORD *)(a3 + 2) = v17;
          *(_QWORD *)(a3 + 8) = a3 + 16;
          LODWORD(v6) = v23;
          goto LABEL_19;
        }
        v16 = a4 - 16;
        v14 = -1073741820;
        if ( a4 - 16 >= 2 )
          goto LABEL_18;
        LODWORD(v6) = v23;
      }
    }
    else
    {
      v14 = -1073741670;
    }
  }
LABEL_19:
  if ( v19 )
    CmpUnlockKcb(v7);
  if ( v10 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( v20 )
    CmPostCallbackNotification(48, v6, v14, (unsigned int)&v28, (__int64)v24);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v27;
  return (unsigned int)v14;
}
