/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C000BF70
 * Callers:
 *     MultiUserCleanupDCs @ 0x1C000EB58 (MultiUserCleanupDCs.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0073B1C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0008F00 (bDeleteDCInternal.c)
 *     HmgSafeNextObjtByIndex @ 0x1C000F12C (HmgSafeNextObjtByIndex.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002FE00 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0031220 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C00312D0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C007B1A0 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00934E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgMarkUnXferable @ 0x1C009B810 (HmgMarkUnXferable.c)
 *     HmgSetLock @ 0x1C009F004 (HmgSetLock.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00C9D64 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C013F218 (HmgCheckDCForPrivateReferences.c)
 */

void __fastcall vCleanupDCs(unsigned int a1)
{
  __int64 v1; // r14
  unsigned int i; // ecx
  DC *v3; // rbx
  HDC v4; // rsi
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v6; // rdi
  ENTRYOBJ *v7; // rcx
  __int64 v8; // rdx
  GdiHandleEntryDirectory **v9; // rdi
  unsigned int v10; // eax
  struct _ENTRY *Entry; // rax
  unsigned int ObjtByIndex; // r15d
  _QWORD v13[6]; // [rsp+50h] [rbp-30h] BYREF
  struct OBJECT *EntryObject; // [rsp+B8h] [rbp+38h]

  v1 = a1;
  EntryObject = 0LL;
  if ( (unsigned int)HmgIsProcessCleanupRequiredByW32Pid() )
  {
    GreAcquireHmgrSemaphore();
    for ( i = 0; ; i = ObjtByIndex )
    {
      ObjtByIndex = HmgSafeNextObjtByIndex(i);
      if ( !ObjtByIndex )
        break;
      v3 = EntryObject;
      v4 = *(HDC *)EntryObject;
      EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, EntryObject);
      v6 = EntryFromObject;
      if ( EntryFromObject )
      {
        if ( (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, v1) )
        {
          GreReleaseHmgrSemaphore();
          if ( (*((_BYTE *)v6 + 15) & 0x20) != 0 || *((_DWORD *)EntryObject + 530) )
          {
            LOBYTE(v8) = 1;
            *((_DWORD *)EntryObject + 530) = 0;
            HmgMarkUnXferable(v4, v8);
            while ( *((_WORD *)EntryObject + 6) )
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
          }
          HmgSetLock(v4);
          bDeleteDCInternal(v4);
          GreAcquireHmgrSemaphore();
        }
        else if ( (unsigned int)ENTRYOBJ::bOwnedBy(v7, 0) )
        {
          while ( (unsigned int)HmgCheckDCForPrivateReferences(v3, v1) )
          {
            DCOBJ::DCOBJ((DCOBJ *)v13, v4);
            if ( v13[0] )
            {
              GreReleaseHmgrSemaphore();
              DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v13[0], v1, 0LL, 0LL, 0LL, 0);
              XDCOBJ::bCleanDC((XDCOBJ *)v13, 0);
              GreAcquireHmgrSemaphore();
LABEL_19:
              DCOBJ::~DCOBJ((DCOBJ *)v13);
              break;
            }
            GreReleaseHmgrSemaphore();
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
            GreAcquireHmgrSemaphore();
            v9 = (GdiHandleEntryDirectory **)gpHandleManager;
            v10 = GdiHandleManager::DecodeIndex(
                    gpHandleManager,
                    (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000);
            Entry = GdiHandleEntryDirectory::GetEntry(v9[2], v10, 0);
            if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !(unsigned int)ENTRYOBJ::bOwnedBy(Entry, 0) )
              goto LABEL_19;
            EntryObject = GdiHandleManager::GetEntryObject(
                            (GdiHandleManager *)v9,
                            (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000);
            v3 = EntryObject;
            DCOBJ::~DCOBJ((DCOBJ *)v13);
          }
        }
      }
    }
    GreReleaseHmgrSemaphore();
  }
}
