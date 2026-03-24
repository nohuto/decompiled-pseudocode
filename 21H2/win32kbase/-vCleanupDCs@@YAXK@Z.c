/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C000AAF0
 * Callers:
 *     MultiUserCleanupDCs @ 0x1C000D6E8 (MultiUserCleanupDCs.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0007A80 (bDeleteDCInternal.c)
 *     HmgSafeNextObjtByIndex @ 0x1C000DCBC (HmgSafeNextObjtByIndex.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002E990 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002FE60 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003B4D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0079AC0 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0092720 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgMarkUnXferable @ 0x1C009AA50 (HmgMarkUnXferable.c)
 *     HmgSetLock @ 0x1C009E244 (HmgSetLock.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00C9AC8 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C013EF18 (HmgCheckDCForPrivateReferences.c)
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
