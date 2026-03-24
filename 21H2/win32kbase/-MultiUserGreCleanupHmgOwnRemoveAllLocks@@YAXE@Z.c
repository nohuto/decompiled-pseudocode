/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C013F4DC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C000DD60 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C002A9D0 (UserIsProcessImmersiveAppContainer.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C002AA1C (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002FE60 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgSetOwner @ 0x1C0035470 (HmgSetOwner.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     HmgIsGarbageCollectibleType @ 0x1C00C9A8C (HmgIsGarbageCollectibleType.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00C9AAC (HmgIsProcessCleanupRequired.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00C9B94 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2)
{
  char v2; // r14
  __int64 CurrentProcess; // r12
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  GdiHandleManager *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int NextEntryIndex; // esi
  int v16; // r8d
  struct _ENTRY *v17; // rbx
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v19; // rax
  struct OBJECT *v20; // rdi
  unsigned int v21; // eax
  char v22; // al
  unsigned __int8 v23; // [rsp+78h] [rbp+10h]
  struct _ENTRY *v24; // [rsp+80h] [rbp+18h] BYREF

  v2 = a1;
  v24 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( !(unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process)
    && (v2 != 5 || !(unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess)) )
  {
    return;
  }
  GreAcquireHmgrSemaphore(v7, v6, v8);
  v23 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v12, 0, &v24);
  if ( !NextEntryIndex )
    goto LABEL_24;
  do
  {
    v17 = v24;
    if ( v2 == 5 && *((_BYTE *)v24 + 14) == 5 && *((char *)v24 + 15) < 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
      if ( *((_QWORD *)EntryObject + 80) == CurrentProcess )
        SURFACE::vAppContainerOwner(EntryObject, 0LL);
    }
    LOBYTE(v14) = *((_BYTE *)v17 + 14);
    if ( v2 )
    {
      if ( v2 != (_BYTE)v14 )
        goto LABEL_21;
    }
    else if ( (unsigned __int8)(v14 - 1) > 0x1Du )
    {
      goto LABEL_21;
    }
    if ( ((*((_DWORD *)v17 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) != 0 )
      goto LABEL_21;
    v19 = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
    v20 = v19;
    if ( *((_DWORD *)v19 + 2) )
    {
      if ( HmgIsGarbageCollectibleType(*((_BYTE *)v17 + 14)) )
        *((_WORD *)v20 + 7) |= 0x4000u;
LABEL_18:
      if ( (unsigned int)HmgSetOwner(*(_QWORD *)v20, -2147483630, *((_BYTE *)v17 + 14)) )
      {
        v14 = 0x4000LL;
        if ( (*((_WORD *)v20 + 7) & 0x4000) != 0 )
          _InterlockedIncrement(&gGarbageCollectionPendingCount);
      }
      goto LABEL_21;
    }
    v14 = 0x4000LL;
    if ( (*((_WORD *)v19 + 7) & 0x4000) != 0 )
      goto LABEL_18;
    v21 = *((unsigned __int16 *)v19 + 6);
    if ( (_WORD)v21 )
    {
      LOBYTE(v14) = *((_BYTE *)v17 + 14);
      if ( !v9 )
      {
        v11 = v21;
        v23 = *((_BYTE *)v17 + 14);
      }
      v10 |= 1 << v14;
      ++v9;
    }
    *((_DWORD *)v20 + 2) = 0;
    *((_WORD *)v20 + 6) = 0;
    *((_QWORD *)v20 + 2) = 0LL;
    *((_DWORD *)v17 + 2) &= ~1u;
    *((_BYTE *)v17 + 15) &= ~1u;
    v22 = *((_BYTE *)v17 + 15);
    if ( (v22 & 0x20) != 0 )
      *((_QWORD *)v17 + 2) = 0LL;
    *((_BYTE *)v17 + 15) = v22 & 0xDF;
LABEL_21:
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v14, NextEntryIndex, &v24);
  }
  while ( NextEntryIndex );
  if ( v9 )
    TraceLoggingWriteUnsupportedGdiUsage(26LL, v9, v10, v11, v23);
LABEL_24:
  GreReleaseHmgrSemaphore(v14, v13, v16);
}
