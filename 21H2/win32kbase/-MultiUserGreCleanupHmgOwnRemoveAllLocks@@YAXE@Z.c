/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgIsProcessCleanupRequired @ 0x1C001B4E4 (HmgIsProcessCleanupRequired.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C001E860 (UserIsProcessImmersiveAppContainer.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001E8AC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022AE0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0061B40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?Feature_1827749177__private_IsEnabled@@YAHXZ @ 0x1C00D8C50 (-Feature_1827749177__private_IsEnabled@@YAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00DA864 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     HmgIsGarbageCollectibleType @ 0x1C016C298 (HmgIsGarbageCollectibleType.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 CurrentProcess; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned __int8 v14; // r13
  GdiHandleManager *v15; // rcx
  unsigned int NextEntryIndex; // ebp
  struct _ENTRY *v17; // rbx
  struct OBJECT *EntryObject; // rax
  bool v19; // di
  __int64 v20; // rcx
  struct OBJECT *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  int IsGarbageCollectibleType; // eax
  char v26; // al
  unsigned int v27; // [rsp+78h] [rbp+10h]
  struct _ENTRY *v28; // [rsp+80h] [rbp+18h] BYREF

  v4 = a1;
  v28 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
  if ( !(unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process)
    && (v4 != 5 || !(unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess)) )
  {
    return;
  }
  GreAcquireHmgrSemaphore();
  v11 = 0;
  v27 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v15, 0, &v28);
  if ( !NextEntryIndex )
    goto LABEL_42;
  do
  {
    v17 = v28;
    if ( v4 == 5 && *((_BYTE *)v28 + 14) == 5 && *((char *)v28 + 15) < 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
      if ( *((_QWORD *)EntryObject + 80) == CurrentProcess )
        SURFACE::vAppContainerOwner(EntryObject, 0LL);
    }
    v19 = (unsigned __int8)(*((_BYTE *)v17 + 14) - 1) <= 0x1Du;
    if ( !(unsigned int)Feature_1827749177__private_IsEnabled() && v19 )
      v19 = *((_BYTE *)v17 + 14) != 7;
    if ( v4 )
    {
      if ( v4 != *((_BYTE *)v17 + 14) )
        goto LABEL_40;
    }
    else if ( !v19 )
    {
      goto LABEL_40;
    }
    if ( ((*((_DWORD *)v17 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) != 0 )
      goto LABEL_40;
    v21 = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
    if ( !(unsigned int)Feature_1827749177__private_IsEnabled() )
    {
      LOBYTE(v22) = *((_BYTE *)v17 + 14);
      if ( (unsigned int)HmgIsGarbageCollectibleType(v22, 0LL) && _bittest16((const signed __int16 *)v21 + 7, 0xEu) )
      {
        LOBYTE(v24) = *((_BYTE *)v17 + 14);
        if ( !(unsigned int)HmgSetOwner(*(_QWORD *)v21, 2147483666LL, v24) )
          goto LABEL_40;
LABEL_39:
        _InterlockedIncrement(&gGarbageCollectionPendingCount);
        goto LABEL_40;
      }
      goto LABEL_34;
    }
    if ( *((_DWORD *)v21 + 2) )
    {
      LOBYTE(v22) = *((_BYTE *)v17 + 14);
      IsGarbageCollectibleType = HmgIsGarbageCollectibleType(v22, 0LL);
      v20 = 0x4000LL;
      if ( IsGarbageCollectibleType )
        *((_WORD *)v21 + 7) |= 0x4000u;
    }
    else
    {
      v20 = 0x4000LL;
    }
    if ( !*((_DWORD *)v21 + 2) && (*((_WORD *)v21 + 7) & 0x4000) == 0 )
    {
      if ( *((_WORD *)v21 + 6) )
      {
        if ( v12 )
        {
          LOBYTE(v20) = *((_BYTE *)v17 + 14);
        }
        else
        {
          v14 = *((_BYTE *)v17 + 14);
          LOBYTE(v20) = v14;
          v27 = *((unsigned __int16 *)v21 + 6);
        }
        v13 |= 1 << v20;
        ++v12;
      }
LABEL_34:
      *((_DWORD *)v21 + 2) = 0;
      *((_WORD *)v21 + 6) = 0;
      *((_QWORD *)v21 + 2) = 0LL;
      *((_DWORD *)v17 + 2) &= ~1u;
      *((_BYTE *)v17 + 15) &= ~1u;
      v26 = *((_BYTE *)v17 + 15);
      if ( (v26 & 0x20) != 0 )
        *((_QWORD *)v17 + 2) = 0LL;
      *((_BYTE *)v17 + 15) = v26 & 0xDF;
      goto LABEL_40;
    }
    LOBYTE(v23) = *((_BYTE *)v17 + 14);
    if ( (unsigned int)HmgSetOwner(*(_QWORD *)v21, 2147483666LL, v23)
      && _bittest16((const signed __int16 *)v21 + 7, 0xEu) )
    {
      goto LABEL_39;
    }
LABEL_40:
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v20, NextEntryIndex, &v28);
  }
  while ( NextEntryIndex );
  v11 = v27;
LABEL_42:
  if ( (unsigned int)Feature_1827749177__private_IsEnabled() )
  {
    if ( v12 )
      TraceLoggingWriteUnsupportedGdiUsage(26LL, v12, v13, v11, v14);
  }
  GreReleaseHmgrSemaphore();
}
