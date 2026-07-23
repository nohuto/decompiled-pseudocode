/*
 * XREFs of LdrpUnloadNode @ 0x18006B4F8
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x18006B4F8 (LdrpUnloadNode.c)
 * Callees:
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x18000FD28 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpSendDllNotifications @ 0x18003DD70 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DE04 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpUnloadNode @ 0x18006B4F8 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B7E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpProcessDetachNode @ 0x18006B9D4 (LdrpProcessDetachNode.c)
 *     LdrpUnmapModule @ 0x180071DB0 (LdrpUnmapModule.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     AVrfDllUnloadNotification @ 0x1800D9714 (AVrfDllUnloadNotification.c)
 */

void __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // r14
  void (__fastcall *v2)(_QWORD *); // rbp
  _QWORD *i; // rsi
  _QWORD *v5; // rbx
  _DWORD *v6; // rdx
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *v12; // r8
  _QWORD **v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  char *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  char **v19; // rdx
  __int64 v20; // rcx
  char **v21; // rax
  __int64 v22; // rdx
  char **v23; // rcx
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 56) == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    LdrpProcessDetachNode();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( g_ShimsEnabled )
    v2 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                g_pfnSE_LdrEntryRemoved,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications((__int64)(i - 20), 2u);
      if ( v2 )
        v2(i - 20);
      SbUpdateSwitchContextBasedOnDll((__int64)(i - 20), v6, 1);
      if ( (v1->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3293,
        (unsigned int)"LdrpUnloadNode",
        2,
        (__int64)"Unmapping DLL \"%wZ\"\n",
        v5 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v5[6], 0);
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v7 = *(_QWORD ***)(a1 + 40);
    if ( !v7 )
      break;
    v8 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(a1 + 40) = 0LL;
    else
      *v7 = (_QWORD *)*v8;
    if ( !v8 )
      break;
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v9 = v8[1];
    v10 = v8 + 2;
    v11 = *(_QWORD ***)(v9 + 48);
    v12 = *v11;
    if ( *v11 != v8 + 2 )
    {
      do
      {
        v11 = (_QWORD **)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 != v10 );
    }
    *v11 = (_QWORD *)*v10;
    if ( *(_QWORD **)(v9 + 48) == v10 )
    {
      v13 = 0LL;
      if ( v11 != v10 )
        v13 = v11;
      *(_QWORD *)(v9 + 48) = v13;
    }
    LdrpDecrementNodeLoadCountLockHeld(v9, 0, &v24);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v24 )
      LdrpUnloadNode(v9);
    RtlFreeHeap(LdrpHeap, 0, v8);
  }
  v14 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v14 != (_QWORD *)a1 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      *((_DWORD *)v14 - 14) |= 2u;
      v16 = (char *)(v14 - 20);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v17 = *((_DWORD *)v16 + 26);
      if ( (v17 & 0x40) != 0 )
      {
        v18 = *((_QWORD *)v16 + 14);
        if ( *(char **)(v18 + 8) != v16 + 112 )
          goto LABEL_47;
        v19 = (char **)*((_QWORD *)v16 + 15);
        if ( *v19 != v16 + 112 )
          goto LABEL_47;
        *v19 = (char *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = *(_QWORD *)v16;
        if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16
          || (v21 = (char **)*((_QWORD *)v16 + 1), *v21 != v16)
          || (*v21 = (char *)v20, *(_QWORD *)(v20 + 8) = v21,
                                  v22 = *((_QWORD *)v16 + 2),
                                  *(char **)(v22 + 8) != v16 + 16)
          || (v23 = (char **)*((_QWORD *)v16 + 3), *v23 != v16 + 16) )
        {
LABEL_47:
          __fastfail(3u);
        }
        *v23 = (char *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        *((_DWORD *)v16 + 26) &= ~0x40u;
        v17 = *((_DWORD *)v16 + 26);
      }
      if ( (v17 & 0x80u) != 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)(v16 + 224));
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)(v16 + 200));
        *((_DWORD *)v16 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v16);
      LdrpDereferenceModule(v16);
      v14 = v15;
    }
    while ( v15 != (_QWORD *)a1 );
  }
}
