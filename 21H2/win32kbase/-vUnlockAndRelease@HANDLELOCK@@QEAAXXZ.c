/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0
 * Callers:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgFree @ 0x1C0087080 (HmgFree.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00979E0 (HmgShareUnlockRemoveObject.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C001ED50 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C001EDC0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C001F220 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00224D0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0150614 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  unsigned int v3; // edi
  _DWORD *v4; // r8
  char EtwGdiHandleType; // bp
  GdiHandleManager *v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r10
  _QWORD *v13; // r9
  GdiHandleManager *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // r10
  _DWORD *v20; // r15
  unsigned int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rsi
  unsigned int v24; // edx
  __int64 v25; // r9
  __int64 v26; // r11
  __int64 v27; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rsi
  bool v29; // r8
  __int64 v30; // r12
  unsigned int v31; // ebp
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  v3 = v2 & 0xFFFFFFFE;
  if ( (v2 & 0xFFFFFFFE) != 0 && v3 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(v3, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v27);
      --*((_DWORD *)W32ProcessFromId + 15);
      EtwTraceGreLockReleaseSemaphore(L"ghsemHmgr", ghsemHmgr);
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion();
      }
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  EtwGdiHandleType = GetEtwGdiHandleType(*(_BYTE *)(*(_QWORD *)this + 14LL));
  v6 = gpHandleManager;
  v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *v4 & 0xFFFFFF);
  v8 = *((_QWORD *)v6 + 2);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 2056);
  LODWORD(v11) = v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16);
  if ( v7 >= (unsigned int)v11
    || (v7 < v10
      ? (v12 = *(_QWORD *)(v8 + 8))
      : (v11 = ((v7 - v10) >> 16) + 1, v12 = *(_QWORD *)(v8 + 8 * v11 + 8), v9 = -65536 * ((v7 - v10) >> 16) - v10 + v7),
        (unsigned int)v9 >= *(_DWORD *)(v12 + 20)) )
  {
    v13 = 0LL;
  }
  else
  {
    LODWORD(v11) = 2 * (unsigned __int8)v9;
    v13 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(v11, (unsigned int)&GdiDestroyHandle, v10, *v13, EtwGdiHandleType);
  *(_BYTE *)(*(_QWORD *)this + 14LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v2 & 1;
  v14 = gpHandleManager;
  v15 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v16 = *((_QWORD *)v14 + 2);
  v17 = v15;
  v18 = *(_DWORD *)(v16 + 2056);
  if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16)
    || (v15 < v18
      ? (v19 = *(_QWORD *)(v16 + 8))
      : (v19 = *(_QWORD *)(v16 + 8LL * (((v15 - v18) >> 16) + 1) + 8), v17 = -65536 * ((v15 - v18) >> 16) - v18 + v15),
        (unsigned int)v17 >= *(_DWORD *)(v19 + 20)) )
  {
    v20 = 0LL;
  }
  else
  {
    v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
  }
  v21 = (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000;
  if ( v21 >= 0x10000 )
  {
    if ( *(_DWORD *)v14 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v14 + 2),
                                  (unsigned __int16)*v20,
                                  1)
           + 13) == HIWORD(v21) )
      {
        v21 = (unsigned __int16)v21;
      }
      else if ( *(_DWORD *)v14 > 0x10000u )
      {
        GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v14 + 2), (unsigned __int16)v21, v29);
      }
    }
    else
    {
      v21 = (unsigned __int16)*v20;
    }
  }
  v22 = *((_QWORD *)v14 + 3);
  v23 = *((_QWORD *)v14 + 2);
  if ( v22 )
  {
    v30 = 4LL * (unsigned __int16)v21;
    v31 = *(_DWORD *)(v30 + v22);
    if ( v31 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v14 + 2), v31, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v14 + 2), v31, 1);
      *(_DWORD *)(v30 + *((_QWORD *)v14 + 3)) = 0;
      --*((_DWORD *)v14 + 1);
      v23 = *((_QWORD *)v14 + 2);
    }
  }
  v24 = *(_DWORD *)(v23 + 2056);
  if ( v21 < v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
  {
    if ( v21 >= v24 )
    {
      v25 = *(_QWORD *)(v23 + 8LL * (((v21 - v24) >> 16) + 1) + 8);
      v21 += -65536 * ((v21 - v24) >> 16) - v24;
    }
    else
    {
      v25 = *(_QWORD *)(v23 + 8);
    }
    if ( v21 < *(_DWORD *)(v25 + 20) )
    {
      v26 = *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v21 >> 8));
      if ( *(_QWORD *)(v26 + 16LL * (unsigned __int8)v21 + 8) )
      {
        *(_QWORD *)(v26 + 16LL * (unsigned __int8)v21 + 8) = 0LL;
        *(_QWORD *)(*(_QWORD *)v25 + 24LL * v21) = *(unsigned int *)(v25 + 12);
        --*(_DWORD *)(v25 + 16);
        *(_DWORD *)(v25 + 12) = v21;
      }
    }
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v21 >> 8)) + 16LL * (unsigned __int8)v21,
      0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)v23 = 0;
  }
  *(_QWORD *)v20 = 0LL;
  --*((_DWORD *)v14 + 1);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
