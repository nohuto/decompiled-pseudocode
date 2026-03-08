/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     HmgPentryFromPobj @ 0x1C004A180 (HmgPentryFromPobj.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004B490 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C006F140 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C00841C0 (UserIsProcessImmersiveAppContainer.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00B1BB0 (HmgIsProcessCleanupRequired.c)
 *     Feature_1626422585__private_IsEnabledDeviceUsage @ 0x1C00DDF7C (Feature_1626422585__private_IsEnabledDeviceUsage.c)
 *     HmgIsGarbageCollectibleType @ 0x1C0185FA4 (HmgIsGarbageCollectibleType.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0186930 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 CurrentProcess; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  GdiHandleManager *v12; // rdi
  unsigned int i; // r12d
  struct _ENTRY *v14; // rbx
  __int64 v15; // rcx
  struct OBJECT *EntryObject; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int8 v19; // bp
  bool v20; // di
  struct OBJECT *v21; // rdi
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-48h]
  struct _ENTRY *v26; // [rsp+98h] [rbp+20h] BYREF

  v4 = a1;
  v26 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v25 = CurrentProcess;
  v8 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  if ( *(_DWORD *)(v8 + 3192) )
    goto LABEL_7;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process)
    || v4 == 5 && (unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess) )
  {
LABEL_7:
    GreAcquireHmgrSemaphore(v7);
    v10 = 0;
    v11 = 0;
    v12 = *(GdiHandleManager **)(v8 + 8008);
    for ( i = GdiHandleManager::GetNextEntryIndex(v12, 0, &v26); i; i = GdiHandleManager::GetNextEntryIndex(
                                                                          v12,
                                                                          i,
                                                                          &v26) )
    {
      v14 = v26;
      if ( !*(_DWORD *)(v8 + 3192) )
      {
        if ( v4 == 5 && *((_BYTE *)v26 + 14) == 5 && *((char *)v26 + 15) < 0 )
        {
          EntryObject = GdiHandleManager::GetEntryObject(v12, i);
          if ( *((_QWORD *)EntryObject + 80) == v25 )
          {
            GreAcquireHmgrSemaphore(v15);
            v17 = HmgPentryFromPobj(EntryObject);
            *(_BYTE *)(v17 + 15) &= ~0x80u;
            *((_QWORD *)EntryObject + 80) = 0LL;
            GreReleaseHmgrSemaphore(v18);
          }
        }
        if ( !*(_DWORD *)(v8 + 3192)
          && ((*((_DWORD *)v14 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) != 0 )
        {
          goto LABEL_41;
        }
      }
      v19 = *((_BYTE *)v14 + 14) - 1;
      v20 = v19 <= 0x1Du;
      if ( !(unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage() && v19 <= 0x1Du && !*(_DWORD *)(v8 + 3192) )
        v20 = *((_BYTE *)v14 + 14) != 7;
      if ( v4 != *((_BYTE *)v14 + 14) && (v4 || !v20) )
        goto LABEL_41;
      v21 = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v8 + 8008), i);
      if ( (unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage() )
      {
        if ( !*(_DWORD *)(v8 + 3192) )
        {
          if ( *((_DWORD *)v21 + 2) )
          {
            LOBYTE(v22) = *((_BYTE *)v14 + 14);
            if ( (unsigned int)HmgIsGarbageCollectibleType(v22) )
              *((_WORD *)v21 + 7) |= 0x4000u;
          }
        }
        if ( *(_DWORD *)(v8 + 3192) )
          goto LABEL_38;
        if ( !*((_DWORD *)v21 + 2) && (*((_WORD *)v21 + 7) & 0x4000) == 0 )
        {
          if ( *((_WORD *)v21 + 6) )
          {
            v11 |= 1 << *((_BYTE *)v14 + 14);
            ++v10;
          }
LABEL_38:
          *((_DWORD *)v21 + 2) = 0;
          *((_WORD *)v21 + 6) = 0;
          *((_QWORD *)v21 + 2) = 0LL;
          *((_DWORD *)v14 + 2) &= ~1u;
          v23 = *((_BYTE *)v14 + 15) & 0xFE;
          *((_BYTE *)v14 + 15) = v23;
          if ( (v23 & 0x20) != 0 )
            *((_QWORD *)v14 + 2) = 0LL;
          *((_BYTE *)v14 + 15) &= ~0x20u;
          goto LABEL_41;
        }
        if ( (unsigned int)HmgSetOwner(*(_QWORD *)v21, -2147483630, *((_BYTE *)v14 + 14))
          && _bittest16((const signed __int16 *)v21 + 7, 0xEu) )
        {
LABEL_49:
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 1908));
        }
      }
      else
      {
        if ( *(_DWORD *)(v8 + 3192) )
          goto LABEL_38;
        LOBYTE(v22) = *((_BYTE *)v14 + 14);
        if ( !(unsigned int)HmgIsGarbageCollectibleType(v22) || !_bittest16((const signed __int16 *)v21 + 7, 0xEu) )
          goto LABEL_38;
        if ( (unsigned int)HmgSetOwner(*(_QWORD *)v21, -2147483630, *((_BYTE *)v14 + 14)) )
          goto LABEL_49;
      }
LABEL_41:
      v12 = *(GdiHandleManager **)(v8 + 8008);
    }
    if ( (unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage() )
    {
      if ( v10 )
        TraceLoggingWriteUnsupportedGdiUsage(26LL, v10, v11);
    }
    GreReleaseHmgrSemaphore(v24);
  }
}
