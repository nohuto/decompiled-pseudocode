/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C001783C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C0061624 (MultiUserCleanupDCs.c)
 * Callees:
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C001B494 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022AE0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     bDeleteDCInternal @ 0x1C00518F0 (bDeleteDCInternal.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0061A80 (HmgSafeNextObjtByIndex.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0093168 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     HmgSetLock @ 0x1C00B0344 (HmgSetLock.c)
 *     HmgMarkUnXferable @ 0x1C00CD290 (HmgMarkUnXferable.c)
 *     ?Feature_3190902075__private_IsEnabled@@YAHXZ @ 0x1C00D8D30 (-Feature_3190902075__private_IsEnabled@@YAHXZ.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C016BF28 (HmgCheckDCForPrivateReferences.c)
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
  char v9; // al
  GdiHandleEntryDirectory **v10; // rdi
  unsigned int v11; // eax
  struct _ENTRY *Entry; // rax
  unsigned int ObjtByIndex; // r15d
  _QWORD v14[6]; // [rsp+50h] [rbp-30h] BYREF
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
          if ( (unsigned int)Feature_3190902075__private_IsEnabled() )
          {
            if ( (*((_BYTE *)v6 + 15) & 0x20) != 0 || *((_DWORD *)EntryObject + 528) )
            {
              LOBYTE(v8) = 1;
              *((_DWORD *)EntryObject + 528) = 0;
              HmgMarkUnXferable(v4, v8);
              while ( *((_WORD *)EntryObject + 6) )
                KeDelayExecutionThread(0, 0, gpLockShortDelay);
            }
          }
          else
          {
            v9 = *((_BYTE *)v6 + 15);
            if ( (v9 & 0x20) != 0 )
            {
              *((_BYTE *)v6 + 15) = v9 & 0xDF;
              while ( *((_WORD *)EntryObject + 6) )
                KeDelayExecutionThread(0, 0, gpLockShortDelay);
            }
          }
          HmgSetLock(v4);
          bDeleteDCInternal(v4, 1LL, 1LL);
          GreAcquireHmgrSemaphore();
        }
        else if ( (unsigned int)ENTRYOBJ::bOwnedBy(v7, 0) )
        {
          while ( 1 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v14, v4);
            if ( v14[0] )
              break;
            GreReleaseHmgrSemaphore();
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
            GreAcquireHmgrSemaphore();
            v10 = (GdiHandleEntryDirectory **)gpHandleManager;
            v11 = GdiHandleManager::DecodeIndex(
                    gpHandleManager,
                    (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000);
            Entry = GdiHandleEntryDirectory::GetEntry(v10[2], v11, 0);
            if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !(unsigned int)ENTRYOBJ::bOwnedBy(Entry, 0) )
              goto LABEL_25;
            EntryObject = GdiHandleManager::GetEntryObject(
                            (GdiHandleManager *)v10,
                            (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000);
            v3 = EntryObject;
            DCOBJ::~DCOBJ((DCOBJ *)v14);
          }
          if ( (unsigned int)HmgCheckDCForPrivateReferences(v3, v1) )
          {
            GreReleaseHmgrSemaphore();
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v14[0], v1, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC((XDCOBJ *)v14, 0);
            GreAcquireHmgrSemaphore();
          }
LABEL_25:
          DCOBJ::~DCOBJ((DCOBJ *)v14);
        }
      }
    }
    GreReleaseHmgrSemaphore();
  }
}
