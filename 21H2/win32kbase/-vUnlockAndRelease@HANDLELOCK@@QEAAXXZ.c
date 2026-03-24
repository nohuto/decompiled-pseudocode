/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031DB0
 * Callers:
 *     HmgRemoveObject @ 0x1C00311D0 (HmgRemoveObject.c)
 *     HmgFree @ 0x1C007B180 (HmgFree.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0085570 (HmgShareUnlockRemoveObject.c)
 * Callees:
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002F7F0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0031CD0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0032170 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003229C (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0125FD8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  unsigned int v3; // edi
  unsigned __int16 *v4; // r15
  unsigned int v5; // ebx
  GdiHandleManager *v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r9
  _DWORD *v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rsi
  __int64 v21; // rcx
  char EtwGdiHandleType; // al
  _QWORD *v23; // r9
  int v24; // ecx
  int v25; // r8d
  unsigned int v26; // r12d
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  v3 = v2 & 0xFFFFFFFE;
  if ( (v2 & 0xFFFFFFFE) != 0 && v3 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(v3, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v19);
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v21);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  v4 = *(unsigned __int16 **)this;
  GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v4 + 14));
    McTemplateK0pqqq_EtwWriteTransfer(v24, (unsigned int)&GdiDestroyHandle, v25, *v23, EtwGdiHandleType);
    v4 = *(unsigned __int16 **)this;
  }
  *((_BYTE *)v4 + 14) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v2 & 1;
  v5 = **(_DWORD **)this & 0xFFFFFF;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  **(unsigned __int16 **)this,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = **(unsigned __int16 **)this;
    }
  }
  v6 = gpHandleManager;
  v7 = *((_QWORD *)gpHandleManager + 2);
  v8 = *(_DWORD *)(v7 + 2056);
  if ( v5 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    goto LABEL_36;
  v9 = ((v5 - v8) >> 16) + 1;
  if ( v5 < v8 )
    v9 = 0LL;
  v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
  if ( (_DWORD)v9 )
    v5 += ((1 - (_DWORD)v9) << 16) - v8;
  if ( v5 >= *(_DWORD *)(v10 + 20) )
LABEL_36:
    v11 = 0LL;
  else
    v11 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                     + 16LL * (unsigned __int8)v5
                     + 8);
  v12 = (unsigned __int16)*v11 | (*v11 >> 8) & 0xFF0000;
  if ( v12 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v11,
                                  1)
           + 13) == HIWORD(v12) )
        v12 = (unsigned __int16)v12;
    }
    else
    {
      v12 = (unsigned __int16)*v11;
    }
  }
  v13 = *((_QWORD *)v6 + 3);
  v14 = *((_QWORD *)v6 + 2);
  if ( v13 )
  {
    v26 = *(_DWORD *)(v13 + 4LL * (unsigned __int16)v12);
    if ( v26 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v6 + 2), v26, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v6 + 2), v26, 1);
      *(_DWORD *)(*((_QWORD *)v6 + 3) + 4LL * (unsigned __int16)v12) = 0;
      --*((_DWORD *)v6 + 1);
      v14 = *((_QWORD *)v6 + 2);
    }
  }
  v15 = *(_DWORD *)(v14 + 2056);
  if ( v12 < v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
  {
    v16 = ((v12 - v15) >> 16) + 1;
    if ( v12 < v15 )
      v16 = 0LL;
    v17 = *(_QWORD *)(v14 + 8 * v16 + 8);
    if ( (_DWORD)v16 )
      v12 += ((1 - (_DWORD)v16) << 16) - v15;
    if ( v12 < *(_DWORD *)(v17 + 20) )
    {
      v18 = *(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v12 >> 8));
      if ( *(_QWORD *)(v18 + 16LL * (unsigned __int8)v12 + 8) )
      {
        *(_QWORD *)(v18 + 16LL * (unsigned __int8)v12 + 8) = 0LL;
        *(_QWORD *)(*(_QWORD *)v17 + 24LL * v12) = *(unsigned int *)(v17 + 12);
        --*(_DWORD *)(v17 + 16);
        *(_DWORD *)(v17 + 12) = v12;
      }
    }
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v12 >> 8)) + 16LL * (unsigned __int8)v12,
      0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)v14 = 0;
  }
  *(_QWORD *)v11 = 0LL;
  --*((_DWORD *)v6 + 1);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
