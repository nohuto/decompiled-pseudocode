/*
 * XREFs of HmgNextOwned @ 0x1C001C270
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C001C150 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001C1E0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C000DD60 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002FE60 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0079AC0 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00C9AC8 (HmgIsProcessCleanupRequiredByW32Pid.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int NextEntryIndex, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  GdiHandleManager *CurrentThread; // rcx
  ENTRYOBJ *v8; // rdi
  struct OBJECT *EntryObject; // rax
  ENTRYOBJ *v10; // [rsp+58h] [rbp+20h] BYREF

  result = HmgIsProcessCleanupRequiredByW32Pid(a2);
  if ( (_DWORD)result )
  {
    GreAcquireHmgrSemaphore();
    v10 = 0LL;
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(CurrentThread, NextEntryIndex, &v10);
      if ( !NextEntryIndex )
        break;
      v8 = v10;
      if ( (unsigned int)ENTRYOBJ::bOwnedBy(v10, a2) )
      {
        if ( (*((_BYTE *)v8 + 15) & 0x40) == 0 )
          goto LABEL_10;
        EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
        if ( !EntryObject )
          goto LABEL_10;
        if ( *((_WORD *)EntryObject + 6) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((GdiHandleManager **)EntryObject + 2) == CurrentThread )
          {
            v8 = v10;
LABEL_10:
            *a3 = (unsigned __int16)NextEntryIndex | (unsigned __int64)(*((unsigned __int16 *)v8 + 6) << 16);
            goto LABEL_12;
          }
        }
      }
    }
    NextEntryIndex = 0;
LABEL_12:
    GreReleaseHmgrSemaphore();
    return NextEntryIndex;
  }
  return result;
}
