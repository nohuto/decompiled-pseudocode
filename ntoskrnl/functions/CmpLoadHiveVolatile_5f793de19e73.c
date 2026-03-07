__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  UNICODE_STRING *v5; // rsi
  char UnloadRundown; // r13
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  int v14; // r9d
  __int64 CellFlat; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // eax
  __int16 v19; // bx
  unsigned __int16 v20; // bx
  unsigned __int16 v21; // ax
  __int16 v22; // cx
  __int64 v23; // rax
  signed __int8 v24; // cf
  __int64 v25; // rbx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  signed __int64 v28; // rdx
  ULONG_PTR v29; // rtt
  ULONG_PTR v31; // [rsp+28h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v36; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  UUID v39[2]; // [rsp+A8h] [rbp-58h] BYREF
  UUID v40; // [rsp+C8h] [rbp-38h] BYREF
  UUID Uuid; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v42[27]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v33 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  SourceString = 0LL;
  Source = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  Uuid = 0LL;
  v40 = 0LL;
  memset(v39, 0, sizeof(v39));
  memset(v42, 0, sizeof(v42));
  BugCheckParameter3 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  HvpGetCellContextReinitialize(&v33);
  v36 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v7 = -1073741431;
    goto LABEL_50;
  }
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 >= 0 )
  {
    v7 = CmpUuidCreate(&v40);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v8 != CmpMasterHive )
      {
        v7 = -1073741811;
        goto LABEL_50;
      }
      *(_QWORD *)&v39[0].Data1 = a2;
      memset(v39[0].Data4, 0, 24);
      v7 = CmpCreateHive(&v36, 2u, 0x8000, 0, 0LL, (__int64)v39, 0LL, 18415617, 0LL, 0LL, 0LL, (__int64)v42);
      if ( v7 >= 0 )
      {
        v7 = CmpCreateHive(
               &BugCheckParameter3,
               0,
               1,
               0,
               0LL,
               0LL,
               0LL,
               17956864,
               (__int64)&Uuid,
               (__int64)&v40,
               0LL,
               (__int64)v42);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v7 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
          if ( v7 >= 0 )
          {
            if ( *(_BYTE *)(v8 + 2944) == 1 )
            {
              v7 = -1073741431;
            }
            else
            {
              v7 = CmpCopyKeyPartial(
                     v36,
                     *(unsigned int *)(*(_QWORD *)(v36 + 64) + 36LL),
                     BugCheckParameter3,
                     -1,
                     2,
                     v31,
                     1u,
                     (unsigned int *)&BugCheckParameter4);
              if ( v7 >= 0 )
              {
                v13 = BugCheckParameter4;
                v14 = BugCheckParameter4;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) = BugCheckParameter4;
                v7 = CmpCopySyncTree(v36, *(_DWORD *)(*(_QWORD *)(v36 + 64) + 36LL), BugCheckParameter3, v14, 2, 0);
                if ( v7 >= 0 )
                {
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(BugCheckParameter3, v13, &v33);
                  else
                    CellFlat = HvpGetCellPaged(BugCheckParameter3, v13, (unsigned int *)&v33);
                  v17 = CellFlat;
                  v18 = CmpConstructNameWithStatus(v2, &SourceString, v16);
                  v5 = (UNICODE_STRING *)SourceString;
                  v7 = v18;
                  if ( v18 >= 0 )
                  {
                    v19 = 2 * *(_WORD *)(v17 + 72);
                    if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
                      v19 = *(_WORD *)(v17 + 72);
                    v20 = SourceString->Length + v19 + 2;
                    DestinationString.Buffer = (wchar_t *)CmpAllocatePool(256LL, v20, 538987843LL);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v20;
                      DestinationString.Length = v20;
                      RtlCopyUnicodeString(&DestinationString, v5);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v21 = *(_WORD *)(v17 + 72);
                      if ( (*(_BYTE *)(v17 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          (unsigned __int8 *)(v17 + 76),
                          (unsigned __int16)(2 * v21));
                        v22 = 2 * *(_WORD *)(v17 + 72);
                        if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
                          v22 = *(_WORD *)(v17 + 72);
                        DestinationString.Length += v22;
                      }
                      else
                      {
                        Source.Buffer = (wchar_t *)(v17 + 76);
                        Source.MaximumLength = v21;
                        Source.Length = v21;
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v33);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v33);
                      v7 = CmpLinkHiveToMaster(
                             (__int64)&DestinationString,
                             0LL,
                             BugCheckParameter3,
                             0,
                             0x200u,
                             0,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             1,
                             v42);
                      if ( v7 >= 0 )
                      {
                        CmpAddToHiveFileList(BugCheckParameter3);
                        v23 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
                        v24 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
                        v25 = v23;
                        if ( v24 )
                          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v23, (__int64)&CmpHiveListHeadLock);
                        if ( v25 )
                          *(_BYTE *)(v25 + 18) = 1;
                        v26 = (_QWORD *)qword_140D54C90;
                        v27 = (_QWORD *)(BugCheckParameter3 + 1608);
                        if ( *(__int64 **)qword_140D54C90 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v27 = &CmpHiveListHead;
                        v27[1] = v26;
                        *v26 = v27;
                        qword_140D54C90 = (__int64)v27;
                        _m_prefetchw(&CmpHiveListHeadLock);
                        v28 = CmpHiveListHeadLock - 16;
                        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                          v28 = 0LL;
                        if ( (CmpHiveListHeadLock & 2) != 0
                          || (v29 = CmpHiveListHeadLock,
                              v29 != _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                                       v28,
                                       CmpHiveListHeadLock)) )
                        {
                          ExfReleasePushLock(&CmpHiveListHeadLock);
                        }
                        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
                        if ( !CmpProfileLoaded )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          CmpProfileLoaded = 1;
                        }
                        v5 = (UNICODE_STRING *)SourceString;
                        v7 = 0;
                        BugCheckParameter3 = 0LL;
                      }
                      goto LABEL_49;
                    }
                    v7 = -1073741670;
                  }
                  if ( v17 )
                  {
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v33);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v33);
                  }
                }
              }
            }
          }
LABEL_49:
          CmpUnlockRegistry(v10, v9, v11, v12);
        }
      }
    }
  }
LABEL_50:
  if ( BugCheckParameter3 )
    CmpDestroyHive((PVOID)BugCheckParameter3);
  if ( v36 )
    CmpDestroyHive((PVOID)v36);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( DestinationString.Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( v5 )
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  return (unsigned int)v7;
}
