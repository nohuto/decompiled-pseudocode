void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  char EtwGdiHandleType; // r15
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned int v22; // r9d
  __int64 v23; // r8
  _DWORD *v24; // r15
  unsigned int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // rsi
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // r8
  _QWORD **v31; // r11
  unsigned __int64 v32; // r10
  __int64 v33; // rcx
  unsigned __int64 W32ProcessFromId; // rsi
  __int64 v35; // rcx
  _DWORD *v36; // rax
  int v37; // r8d
  unsigned int v38; // esi
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  v5 = v4 & 0xFFFFFFFE;
  if ( (v4 & 0xFFFFFFFE) != 0 && v5 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(v5, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v33);
      --*(_DWORD *)(W32ProcessFromId + 60);
      GreReleaseHmgrSemaphore(v35);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(*(_QWORD *)this + 14LL), a2, a3);
  v8 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
  v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v8, **(_DWORD **)this & 0xFFFFFF);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = v9;
  v12 = *(unsigned int *)(v10 + 2056);
  v13 = (unsigned int)v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
  if ( v9 >= (unsigned int)v13
    || (v9 >= (unsigned int)v12
      ? (v13 = ((v9 - (unsigned int)v12) >> 16) + 1,
         v10 = *(_QWORD *)(v10 + 8 * v13 + 8),
         v11 = -65536 * ((v9 - (unsigned int)v12) >> 16) - (_DWORD)v12 + v9)
      : (v10 = *(_QWORD *)(v10 + 8)),
        (unsigned int)v11 >= *(_DWORD *)(v10 + 20)) )
  {
    v14 = 0LL;
  }
  else
  {
    v13 = 2LL * (unsigned __int8)v11;
    v14 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  }
  v15 = *v14;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v36 = (_DWORD *)SGDGetUserSessionState(v13, v14, v10, v12);
    McTemplateK0pqqq_EtwWriteTransfer(*v36, (unsigned int)&GdiDestroyHandle, v37, v15, EtwGdiHandleType, *v36, v5);
  }
  *(_BYTE *)(*(_QWORD *)this + 14LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v4 & 1;
  v16 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
  v17 = *(_QWORD *)(v16 + 8008);
  v18 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v16) + 24) + 8008LL);
  v19 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v18, **(_DWORD **)this & 0xFFFFFF);
  v20 = *(_QWORD *)(v18 + 16);
  v21 = v19;
  v22 = *(_DWORD *)(v20 + 2056);
  if ( v19 >= v22 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16)
    || (v19 >= v22
      ? (v23 = *(_QWORD *)(v20 + 8LL * (((v19 - v22) >> 16) + 1) + 8), v21 = -65536 * ((v19 - v22) >> 16) - v22 + v19)
      : (v23 = *(_QWORD *)(v20 + 8)),
        (unsigned int)v21 >= *(_DWORD *)(v23 + 20)) )
  {
    v24 = 0LL;
  }
  else
  {
    v24 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v21 >> 8)) + 16LL * (unsigned __int8)v21 + 8);
  }
  v25 = (unsigned __int16)*v24 | (*v24 >> 8) & 0xFF0000;
  if ( v25 >= 0x10000 )
  {
    if ( *(_DWORD *)v17 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v17 + 16),
                                  (unsigned __int16)*v24,
                                  1)
           + 13) == HIWORD(v25) )
        v25 = (unsigned __int16)v25;
    }
    else
    {
      v25 = (unsigned __int16)*v24;
    }
  }
  v26 = *(_QWORD *)(v17 + 24);
  if ( v26 )
  {
    v38 = *(_DWORD *)(4LL * (unsigned __int16)v25 + v26);
    if ( v38 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v17 + 16), v38, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v17 + 16), v38, 1);
      *(_DWORD *)(4LL * (unsigned __int16)v25 + *(_QWORD *)(v17 + 24)) = 0;
      --*(_DWORD *)(v17 + 4);
    }
  }
  v27 = *(_QWORD *)(v17 + 16);
  v28 = *(_DWORD *)(v27 + 2056);
  if ( v25 < v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
  {
    if ( v25 >= v28 )
    {
      v30 = *(_QWORD *)(v27 + 8LL * (((v25 - v28) >> 16) + 1) + 8);
      v25 += -65536 * ((v25 - v28) >> 16) - v28;
      v29 = v30;
    }
    else
    {
      v29 = *(_QWORD *)(v27 + 8);
      v30 = v29;
    }
    if ( v25 >= *(_DWORD *)(v30 + 20) )
    {
      v31 = (_QWORD **)(v29 + 24);
    }
    else
    {
      v31 = (_QWORD **)(v30 + 24);
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                     + 16LL * (unsigned __int8)v25
                     + 8) )
      {
        v32 = (unsigned __int64)v25 >> 8;
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * v32) + 16LL * (unsigned __int8)v25 + 8) = 0LL;
        *(_QWORD *)(*(_QWORD *)v30 + 24LL * v25) = *(unsigned int *)(v30 + 12);
        --*(_DWORD *)(v30 + 16);
        *(_DWORD *)(v30 + 12) = v25;
LABEL_24:
        ExReleasePushLockExclusiveEx(*(_QWORD *)(**v31 + 8 * v32) + 16LL * (unsigned __int8)v25, 0LL);
        KeLeaveCriticalRegion();
        *(_BYTE *)v27 = 0;
        goto LABEL_25;
      }
    }
    v32 = (unsigned __int64)v25 >> 8;
    goto LABEL_24;
  }
LABEL_25:
  *(_QWORD *)v24 = 0LL;
  --*(_DWORD *)(v17 + 4);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
