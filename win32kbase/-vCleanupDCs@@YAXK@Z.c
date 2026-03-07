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
