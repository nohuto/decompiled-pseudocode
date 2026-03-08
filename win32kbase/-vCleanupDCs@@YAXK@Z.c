/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C006F338
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     MultiUserCleanupDCs @ 0x1C00B637C (MultiUserCleanupDCs.c)
 * Callees:
 *     HmgSetLock @ 0x1C0019CE0 (HmgSetLock.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004B490 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0 (--1DCOBJ@@QEAA@XZ.c)
 *     HmgSafeNextObjt @ 0x1C006EFB0 (HmgSafeNextObjt.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C00A72DC (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00B1B60 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0185D28 (HmgCheckDCForPrivateReferences.c)
 */

void __fastcall vCleanupDCs(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rcx
  __int64 i; // rcx
  struct OBJECT *v5; // rbx
  HDC v6; // rbp
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v8; // rdi
  ENTRYOBJ *v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  GdiHandleEntryDirectory **v14; // rdi
  unsigned int v15; // eax
  struct _ENTRY *Entry; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // esi
  DC *v21[2]; // [rsp+50h] [rbp-38h] BYREF
  struct OBJECT *EntryObject; // [rsp+98h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  EntryObject = 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( (unsigned int)HmgIsProcessCleanupRequiredByW32Pid((unsigned int)v1) )
  {
    GreAcquireHmgrSemaphore(v3);
    for ( i = 0LL; ; i = v20 )
    {
      v20 = HmgSafeNextObjt(i, 1, &EntryObject);
      if ( !v20 )
        break;
      v5 = EntryObject;
      v6 = *(HDC *)EntryObject;
      EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleEntryDirectory ***)(v2 + 8008), EntryObject);
      v8 = EntryFromObject;
      if ( EntryFromObject )
      {
        if ( (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, v1) )
        {
          GreReleaseHmgrSemaphore((__int64)v9);
          v10 = *((_BYTE *)v8 + 15);
          if ( (v10 & 0x20) != 0 )
          {
            *((_BYTE *)v8 + 15) = v10 & 0xDF;
            while ( *((_WORD *)v5 + 6) )
              KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2352));
          }
          HmgSetLock((__int64)v6);
          GrepDeleteDC(v6, 0xC00000u);
          GreAcquireHmgrSemaphore(v11);
        }
        else if ( (unsigned int)ENTRYOBJ::bOwnedBy(v9, 0) )
        {
          while ( 1 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v21, v6);
            if ( v21[0] )
              break;
            GreReleaseHmgrSemaphore(v12);
            KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2352));
            GreAcquireHmgrSemaphore(v13);
            v14 = *(GdiHandleEntryDirectory ***)(v2 + 8008);
            v15 = GdiHandleManager::DecodeIndex(v14, (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000);
            Entry = GdiHandleEntryDirectory::GetEntry(v14[2], v15, 0);
            if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !(unsigned int)ENTRYOBJ::bOwnedBy(Entry, 0) )
              goto LABEL_18;
            EntryObject = GdiHandleManager::GetEntryObject(
                            (GdiHandleManager *)v14,
                            (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000);
            v5 = EntryObject;
            DCOBJ::~DCOBJ((DCOBJ *)v21);
          }
          if ( (unsigned int)HmgCheckDCForPrivateReferences(v5, v1) )
          {
            GreReleaseHmgrSemaphore(v17);
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v21[0], v1, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC(v21, 0);
            GreAcquireHmgrSemaphore(v18);
          }
LABEL_18:
          DCOBJ::~DCOBJ((DCOBJ *)v21);
        }
      }
    }
    GreReleaseHmgrSemaphore(v19);
  }
}
